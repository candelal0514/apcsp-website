<!DOCTYPE html>

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
  <h1> PHP Code </h1>
  <p>Numbers given:

  <?php
   $post = array_values($_POST); //Turn the values from the form on the prior page into an array (in order received)
   $paramCount = count($post) . " items received <br> "; 
   $x = 1; //Counter value
   echo "Topic: " . $post[0] /*This is the dropdown menu value*/ . "<br>";
   while ($x < $paramCount){
     echo "Variable " . $x . ": " . $post[$x] . "<br>";
     $x++;
   } //This while loop prints out all the values that were passed from the form
   ?>
  <h1>C Code</h1>
  <?php
   $output = shell_exec("eqDB/eqDB $post[0] $post[1] $post[2] $post[3] $post[4]");
   echo $output;
  ?>
</body>
</html>
