Program 1: Using JavaScript, design a web page to accept a number from the user and print its Factorial.


Code:


<html>

<head><title>

</title>

</head>

<body>

<script>

let a=prompt("Enter a number:")

let fact=1;

for(i=1;i<=a;i++){

fact= fact*i;

}

document.write("The FACTORIAL is"+fact);

</script>

</body>

</html>












Output(s):

Program 2: Using JavaScript, a web page that prints Fibonacci series/any given series.

Code: <html> <body> <h3>fibonacci series:</h3> <script> let n = 8 ; let n1 = 0; let n2 = 1; let nextTerm; document.write(n1 + " "); for (let i = 1; i < n; i++) { nextTerm = n1 + n2; document.write(nextTerm + " "); n1 = n2; n2 = nextTerm; } </script> </body> </html> Output(s):

Program 3: Write a JavaScript program to display all the prime numbers between 1 and 100.


Code:

<html>

<head>

<title>Prime</title>

</head>

<body>

<script>

for (let i = 1; i <= 100; i++) {

let prime = true; Output(s):

for (let j = 2; j < i; j++) { if (i % j === 0) { prime = false; break; } } if (prime) { document.write(i + " "); } } </script> </body> </html>

Program 4: Write a JavaScript program to accept a number from the user and display the sum of its

digits


Code:



<html>

<head>

<title>Sum</title>

</head>

<body>

<script>

let a = prompt("Enter a number: ");

let b = 0;


for (let i=0; i < a.length; i++){

b += Number(a[i]); Output(s):

} document.write("Sum of digits: "+b); </script> </body> </html>
