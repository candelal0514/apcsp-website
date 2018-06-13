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
  <select hidden name="dropdown1">
  <option value ="thermo">PV = nRT</option>
  </select><br>
  Submit Q as heat transferred in Joules, m as mass in grams, c as specific heat capacity of the liquid in Joules per gram degrees Celcius, and ΔT as temperature change in celcius.<br>
  </select><br>
  Leave the unkown variable blank!<br>
  Q : <input type="number" step="any" name="num1"><br>
  M : <input type="number" step="any" name="num2"><br>
  C : <input type="number" step="any" name="num3"><br>
  ΔT: <input tpye="number" step="any" name="num4"><br>
  <input type="submit" value="Calculate!">
  </form>
</body>
</html>
