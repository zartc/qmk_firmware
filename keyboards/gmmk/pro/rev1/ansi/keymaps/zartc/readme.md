Extend inspired from: Extend Extra Extreme!
Other features inspired from: Gourdo1 and others

- Implements a variation of the Extend layer (https://forum.colemak.com/topic/2014-extend-extra-extreme/)
- Disabled Mouse Keys (to fix issues with KVM switches and also because they're not used here anyway)
- RGB turns off after 15 minutes of inactivity
- RGB turns off when USB is suspended
- Just 4 RGB effects enabled:
  MATRIX_GRADIENT_UP_DOWN         : static horizontal rainbow, use HUE to displace the rainbow
  MATRIX_SOLID_REACTIVE_SIMPLE    : Keyboard black, Key hits shown in current hue and fade black at effect selected speed
  MATRIX_SOLID_REACTIVE           : Keyboard lights up in chosen hue, key hits shown in complementary hue
  MATRIX_SOLID                    : Keyboard lights up in chosen hue, nothing on key hits


The Base Layer:
======================================

- key left of the encoder: Delete (default was Print Screen)
- key below the encoder: Home (default was Delete)


The Mode Layer (accessed while pressing CapsLock)
======================================

- Navigation block on i, j, k, l
- Home and End on u and o
- Page up/down on h and n
- Insert/delete on y and p
- Shift, Ctrl, Alt are replicated on s, d, f (so you don't have to leave the home row)
- CapsLock on/off on a


The Fn Layer (accessed while pressing Fn)
======================================

RGB functions:
  A, D = BRT
  W, S = HUE
  Q, E = SAT
  -, + = MODE
  X, C = SPEED
  Z = Toggle on/off

Available effects:
  MATRIX_GRADIENT_UP_DOWN         : static horizontal rainbow, use HUE to displace the rainbow
  MATRIX_SOLID_REACTIVE_SIMPLE    : Keyboard black, Key hits shown in current hue and fade black at effect selected speed
  MATRIX_SOLID_REACTIVE           : Keyboard lights up in chosen hue, key hits shown in complementary hue
  MATRIX_SOLID                    : Keyboard lights up in chosen hue, nothing on key hits
  