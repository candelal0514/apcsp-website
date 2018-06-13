<html>
<head>
  <title>Equation DB</title>
  <link href="../layout.css" rel="stylesheet" type="text/css"/>
</head>
<body>
  <div class="fullpageimage bg1">
    <div class="headline">
     <p>Ideal Gas Equation</p>
    </div>
    <div class="header">
      <ul>
        <li><a href="../">Home</a></li>
        <li><a href="../page1.html">Linux Reference</a></li>
        <li><a class="active" href="./">Equation DB</a></li>
        <li><a href="../cgi-bin/student4/pistatus.cgi">Pi Status CGI</a></li>
        <li><a href="../cgi-bin/student4/pingallpi.cgi">Ping All Pi CGI</a></li>
        <li><a href="../lucabio.html">Luca's Bio</a></li>
        <li><a href="../justinbio.html">Justin's Bio</a></li>
      </ul>
    </div>
  </div>
  <form action="./results.php" method="post">
  <select hidden name="dropdown1">
  <option value ="idealgas">PV = nRT</option>
  </select><br>
  Submit P in atmospheres, V in Liters, n in moles, & T in Kelvins<br>
  Solve for?:
  <select name="solvefordropdown">
  <option value="solveChoose">Choose</option>
  <option value="P">P</option>
  <option value="V">V</option>
  <option value="N">n</option>
  <option value="T">T</option>
  </select><br>
  Known Variable 1: <input type="number" step="any" name="num1"><br>
  Known Variable 2: <input type="number" step="any" name="num2"><br>
  Known Variable 3: <input type="number" step="any" name="num3"><br>
  <input type="submit" value="Calculate!">
  </form>
</body>
</html>
