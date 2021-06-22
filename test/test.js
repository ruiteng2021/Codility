process.stdin.resume();
process.stdin.setEncoding('ascii');

var input_stdin = "";
var input_stdin_array = "";
var input_currentline = 0;

    

process.stdin.on('data', function (data) {
    input_stdin += data;
});

process.on('SIGINT', function () {
    input_stdin_array = input_stdin.split("\r\n");
    main();    
    process.exit();
});

function readLine() {
    return input_stdin_array[input_currentline++];
}

function solveMeFirst(a, b) {
  // Hint: Type return a+b below   
  console.log("Hello world");
  return a+b;
}


function main() {
    var a = parseInt(readLine());
    var b = parseInt(readLine());


    var res = solveMeFirst(a, b);
    console.log(res);
}

