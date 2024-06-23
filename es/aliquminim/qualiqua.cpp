   QPropertyAnimation animation(object, "property");
   animation.setStartValue(startValue);
   animation.setEndValue(endValue);
   animation.setDuration(duration);
   animation.setEasingCurve(easingCurve);
   animation.start();
   