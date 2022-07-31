Extend inspired from: (Extend Extra Extreme!)
Other features inspired from: Gourdo1 and others

- Implements a variation of the Extend layer (https://forum.colemak.com/topic/2014-extend-extra-extreme/)
- Disabled Mouse Keys (to fix issues with KVM switches and also because they're not used here anyway)
- RGB turns off after 3 minutes of inactivity
- RGB turns off when USB is suspended
- Limited number of RGB effects enabled:
    1 - RGB_MATRIX_ALPHAS_MODS              : Solid color
    2 - RGB_MATRIX_SOLID_REACTIVE_SIMPLE    : Keyboard black, Key hits shown in current hue and fade black at effect selected speed
    3 - RGB_MATRIX_SOLID_REACTIVE           : Keyboard lights up in chosen hue, key hits shown in complementary hue (try this as default?)
    4 - RGB_MATRIX_SOLID_REACTIVE_WIDE      : Hue & value pulse around a single key hit then fades value out (Single key)
    5 - RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE : Same as above but more intense (Multi-key)
    6 - RGB_MATRIX_SOLID_MULTISPLASH        : Single color pulses from muli-keys. All else black.

- Base Layer:
  - Print Screen (default) -> Delete
  - Delete (default) -> Home

- Mode Layer (accessed by pressing CapsLock):
  - Navigation block on i, j, k, l
  - Home and End on u and o
  - Page up/down on h and n
  - Insert/delete on y and p
  - Shift, Ctrl, Alt on s, d, f (so you don't have to leave the home row)
  - CapsLock on a

- Fn Layer (accessed by pressing Fn):
  - RGB functions:
  - HUE on a, d
  - BRT on w, s
  - SAT on q, e
  - Toggle on x
  = RGB mode on -, =