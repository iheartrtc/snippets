static inline cairo_fixed_t
_cairo_fixed_from_double (double d)
{
    union {
        double d;
        int32_t i[2];
    } u;

    u.d = d + CAIRO_MAGIC_NUMBER_FIXED;
#ifdef FLOAT_WORDS_BIGENDIAN
    return u.i[1];
#else
    return u.i[0];
#endif
}

/* Way to have a [0|1] iteration loop */
/* Logging Module Design from Qt*/
 #define qCDebug(category, ...) \
     for (bool qt_category_enabled = category().isDebugEnabled(); qt_category_enabled; qt_category_enabled = false) \
         QMessageLogger(QT_MESSAGELOG_FILE, QT_MESSAGELOG_LINE, QT_MESSAGELOG_FUNC, category().categoryName()).debug(__VA_ARGS__)

/* Ways to use __VA_ARGS__ in pre-processor */
#define LOG1(fmt, ...)  printf(fmt "\r\n", __VA_ARGS__) //standard
#define LOG2(fmt, arg...)  printf(fmt "\r\n", arg) //extension
#define LOG3(fmt, arg...)  printf(fmt "\r\n", ##arg)


# a chanined method invocation that can allow atomicity
# Android 
if (fragment == null) {
  fragment = new CrimeFragment();
  fm.beginTransaction()
  .add(R.id.fragment_container, fragment)
  .commit();
}
