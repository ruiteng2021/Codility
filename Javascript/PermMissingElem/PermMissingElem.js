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

function solveMeFirst(arr) {

    let n = arr.length + 1;
    // console.log(n);
    let result = n * (n + 1)/2;
    console.log(result);

    let sum = arr.reduce(function(a, b){ return a + b; }, 0);
    console.log(sum);

    return result - sum;



  // Hint: Type return a+b below   
    // if(arr.length == 0)
    //     return 1;
    // if(arr.length == 1)
    //     return arr[0]+1;

    // arr.sort((a, b) => a - b); 
    // let first = arr[0];
    // let result;
    // console.log(arr);

    // for (let i=1; i<arr.length; i++)
    // {
    //     if((arr[i]-first) == 1)
    //     {
    //         first = arr[i];
    //         continue;
    //     }
    //     if ((arr[i]-first) == 2)
    //     {
    //         result = first + 1;
    //         break;
    //     }            
    // }

    // var sum = arr.reduce(function(a, b){
    //     return a + b;
    // }, 0);

    // console.log(sum); 

//   return result;
}


function main() {
    // var a = parseInt(readLine());
    // var b = parseInt(readLine());

    var arr = readLine().split(" ");
    // console.log(arr);

    let inputArr = [];
    for (let item of arr){
        inputArr.push(parseInt(item));
    }
    // console.log(inputArr);
    var res = solveMeFirst(inputArr);
    console.log(res);
}

// 1. PermMissingElem
// Find the missing element in a given permutation.
// Task Score
// 60%
// Correctness
// 40%
// Performance
// 80%
// Task description


// Analysis
// expand allExample tests
// ▶example
// example test✔OK
// expand allCorrectness tests
// ▶empty_and_single
// empty list and single element✔OK
// ▶missing_first_or_last
// the first or the last element is missing✘RUNTIME ERROR
// tested program terminated with exit code 1
// ▶single
// single element✘WRONG ANSWER
// got 3 expected 1
// ▶double
// two elements✘RUNTIME ERROR
// tested program terminated with exit code 1
// ▶simple
// simple test✔OK
// expand allPerformance tests
// ▶medium1
// medium test, length = ~10,000✔OK
// ▶medium2
// medium test, length = ~10,000✔OK
// ▶large_range
// range sequence, length = ~100,000✘RUNTIME ERROR
// tested program terminated with exit code 1
// ▶large1
// large test, length = ~100,000✔OK
// ▶large2
// large test, length = ~100,000✔OK