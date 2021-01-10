
#define n_of_points 11

#define x_axis PORTD
#define y_axis PORTB
  int points_x_y_0 [n_of_points][2] = {
{ 0, 0},
{ 2,18},
{ 0,26},
{ 4,26},
{10,31},
{14,26},
{29,26},
{15,18},
{29, 0},
{10, 7},
{ 0, 0}};
void setup(){
  DDRB=255;
  DDRD=255}
void loop() { 
for (int i = 0; i <n_of_points; i++)
{
x_axis = points_x_y_0[i][1];
y_axis = points_x_y_0[i][0];
delayMicroseconds(15);
}




}
