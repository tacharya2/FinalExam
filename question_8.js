var bucket = [];
var vals = { 
“a” : 5, “b” : 7, “c”: 11, “d” : -13, “e” : -2 
}; 
var arithmeticOperators = { 
“+” : function (d, e) { return d + e; },
“-” : function (d, e ) { return d - e; }, 
“*” : function (d, e) { return d * e; }, 
“/” : function (d, e) { return d /e; },
“%”: function (d, e) {return d % e; } };
parse (expression).forEach(function(k) {
switch (k)  { 
case “+”: 
case “-”: 
case “*”:
case “/”:
case “%”: 
var AB =+ bucket.pop(); 
var BC =+ bucket.pop(); 
bucket.push(arithmeticOperators[k] (BC, AB)); 
break;
default: 
bucket.push (vals[k]); } }); 
var result = bucket.pop();
