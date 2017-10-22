function [result]=numericalCheck(a,b,e,f)

% Algrithm to return area between any curve and x-axis
% complexity = O(n) where n is e
% Request for algrithm -- function is continuous
% where #   a,b :   belongs to X-axis 
%           e   :   efficiency of the algorithm
%           f   :   function(target to get area between it and x-axis)
%
% Algrithm logic 
%                   divided the area under function to small intrvals 
%                   then use Gauss's Quadrature for each sub-intrval
%                   to get area of them and summtion them


result=0;                                                                           %return value ,not equal zero at end
eps=epsilon();                                                                      %epsilon for machine
    
if (b<a)                                                                            %swap interval boundaries if it worng
    temp=a;
    a=b;
    b=temp;
end

if ((b-a)==0)                                                                       %check the interval boundaries
    result = 'error';
    return;
end

h=(b-a)/e;                                                                          %number of small intrval

if(h<(1E10*eps))                                                                    %avoid memory crush
    result='error #Enter less efficiency';                                          %return error due to high complexity
   return;                                                                          %break the Algorithm
end

x=a:h:b;
plot(x,feval(f,x)), xlabel('x'), ylabel('y'), title('Function Graph'),
grid on, axis equal                                                                 %draw the function

hold off;

if(b>a)                                                                             %normal case
    x1=a;
    x2=a;
    while(b>x2)
        
        result = result + Gauss_and_S_rule( x1 , x2+h , f );                         %use Gauss's Quadrature
        x1=x1+h;
        x2=x2+h;
        
    end
end

return;
end

% Samir Moustafa Soliman Abozid     collage ID : 20161503712
% Copyright © 2016 Faculty of Science Alexandria University
% Under permission of Prof. Dr. Mahmoud Mahmoud El-Alem
% for communication with programme samir_fake@yahoo.com
% NOTICE:  All information contained herein is blocked, and remains
% the property of Faculty Systems Incorporated and its suppliers,
% if any.  The intellectual and technical concepts contained
% herein are proprietary to Faculty Systems Incorporated
% and its suppliers and may be covered by Egypt,
% patents in process, and are protected by trade secret or copyright law.
% Dissemination of this information or reproduction of this material
% is strictly forbidden unless prior written permission is obtained
% from Faculty Incorporated.