function  [answer]=GaussQuadrature(a,b,f)

x1=(1/2)*((b-a)*(-1/sqrt(3))+a+b);
x2=(1/2)*((b-a)*(1/sqrt(3))+a+b);

answer = abs( ((b-a)/2)*(feval(f,x1)+feval(f,x2)) );
end
