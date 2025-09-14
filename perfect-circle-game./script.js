const canvas = document.getElementById('gameCanvas');
const ctx = canvas.getContext('2d');


const startBtn = document.getElementById('startBtn');
const startScreen = document.getElementById('startScreen');
function resizeCanvas() {
  let headerHeight = document.querySelector("h1").offsetHeight 
                   + document.getElementById("quote").offsetHeight 
                   + document.getElementById("scoreboard").offsetHeight 
                   + 20; 

  canvas.width = window.innerWidth;
  canvas.height = window.innerHeight - headerHeight; }
function drawRedDot() {
  canvas.width = window.innerWidth;
canvas.height = window.innerHeight;

  const centerX = canvas.width / 2;
  const centerY = canvas.height / 2;

  ctx.beginPath();
  ctx.arc(centerX, centerY, 10, 0, Math.PI * 2);
  ctx.fillStyle = "red";
  ctx.fill();
  ctx.closePath();
}

startBtn.addEventListener('click', () => {
  
  startBtn.remove();      
startScreen.remove();   
  drawRedDot();
  const controls = document.getElementById('controls');
controls.style.display = 'block';  
});
resizecanvas();



