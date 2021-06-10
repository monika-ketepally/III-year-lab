<?php
$a = 1;
while($a<51){
    $count=0;
    for($i=1;$i<=$a;$i++){
        if(($a%$i)==0){
            $count++;
        }
    }
    if($count<3){
        echo $a, " ";
    }
    $a = $a +1;
}

?>