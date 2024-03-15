function stringLength(str) {
  var length = 0;
  while (str[length] !== undefined) {
    length++;
  }
  return length;
}

function stringInverter(str) {
  var length = stringLength(str);
  var start = 0;
  var end = length - 1;
  str = str.split("");

  while (start < end) {
    var aux = str[start];
    str[start] = str[end];
    start++;
    end--;
  }
  return str.join("");
}

var Teste = "Teste";
console.log("Normal", Teste);

var strInverted = stringInverter(Teste);
console.log("invertido:", strInverted);
