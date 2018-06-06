<html>
<head>
  <title>Equation DB</title>
  <link href="../layout.css" rel="stylesheet" type="text/css"/>
</head>
<body>
  <div class="fullpageimage bg1">
    <div class="headline">
     <p>No metaldetectors allowed!</p>
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
  Select an equation:
  <select name="dropdown1">
  <option value ="idealgas">PV = nRT</option>
  </select><br>
  Solve for?:
  <select name="solvefordropdown">
  <option value="solveChoose">Choose</option>
  <option value="solveP">P</option>
  <option value="solveV">V</option>
  <option value="solveN">n</option>
  <option value="solveT">T</option>
  </select><br>
  Number 1: <input type="number" name="num1"><br>
  Number 2: <input type="number" name="num2"><br>
  text field: <input type="text" name="textin"><br>
  <input type="submit" value="Calculate!">
  </form>
</body>
</html>
