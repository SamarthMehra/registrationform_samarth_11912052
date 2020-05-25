# registrationform_samarth_11912052
<!DOCTYPE html>
<html>
<head>
<style>
h1
{
 background-color:MediumSeagreen;
 text-align:center;
 font-family:Sans-serif;
 font-size:200%;
 color:white;
}
div
{
 color:hsl(248,53%,58%);
 font-size:20px;
 font-family:Imapct;
}
</style>
<script>
function validation()
{
 var a=document.getElementById('uname').value;
 var b=document.getElementById('passwords').value;
 var c=document.getElementById('passw').value;
 var d=document.getElementById('number').value;
 var e=document.getElementById('Email').value;
 if(a==" ")
 {
   document.getElementById('message').innerHTML="**Plese enter this field";
   return false;
 }
 if(b=" ")
{ 
    document.getElementById('pwd').innerHTML="**Plese enter this field";
    return false;
}
if(c=" ")
{ 
    document.getElementById('pw').innerHTML="**Plese enter this field";
    return false;
}
if(d=" ")
{ 
    document.getElementById('Monum').innerHTML="**Plese enter this field";
    return false;
}
if(e=" ")
{ 
    document.getElementById('email id').innerHTML="**Plese enter this field";
    return false;
}
}
</script>
</head>
<body style="background-color:rgb(240,240,240)">
<h1>Complete Form Validation In Javascript</h1>
<div>
<form onsubmit="return validation();" action="message.html">
      <lable>Username:-</lable><br>
      <input type="text" id="uname" value=" " size="50">
<span id="message" style="color:red"></span><br><br>
      <lable>Password:-</lable><br>
      <input type="password" id="passwords" value=" " size="50">
 <span id="pwd" style="color:red"></span><br><br>
      <lable>Confirm Password:-</lable><br>
      <input type="password" id="passw" value=" " size="50">
 <span id="pw" style="color:red"></span><br><br>
      <lable>Mobile number:-</lable><br>
      <input type="number" id="Number" value=" " size="40">
 <span id="Monum" style="color:red"></span><br><br>
       <lable>Email Id:-</lable><br>
      <input type="email" id="Email" value=" " size="50">
 <span id="email id" style="color:red"></span><br><br>
      <button type="submit" >submit</button>
</form>
</div>
</body>
</html>
