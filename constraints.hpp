#pragma once

#include <type_traits>

///WHERE() syntax
#define WHERE(T, C) , class = typename std::enable_if<C, T>::type

//Primary type categories
#define ISARRAY(T)              std::is_array<T>::value
#define ISCLASS(T)              std::is_class<T>::value
#define ISENUM(T)               std::is_enum<T>::value
#define ISFLOATINGPOINT(T)      std::is_floating_point<T>::value
#define ISFUNCTION(T)           std::is_function<T>::value
#define ISINTEGRAL(T)           std::is_integral<T>::value
#define ISLVALUEREF(T)          std::is_lvalue_reference<T>::value
#define ISMEMBERFUNCPOINTER(T)  std::is_member_function_pointer<T>::value
#define ISMEMBEROBJPOINTER(T)   std::is_member_object_pointer<T>::value
#define ISPOINTER(T)            std::is_pointer<T>::value
#define ISRVALUEREF(T)          std::is_rvalue_reference<T>::value
#define ISUNION(T)              std::is_union<T>::value
#define ISVOID(T)               std::is_void<T>::value

//Composite type categories
#define ISARITHMETIC(T)         std::is_arithmetic<T>::value
#define ISCOMPOUND(T)           std::is_compound<T>::value
#define ISFUNDAMENTAL(T)        std::is_fundamental<T>::value
#define ISMEMBERPOINTER(T)      std::is_member_pointer<T>::value
#define ISOBJECT(T)             std::is_object<T>::value
#define ISREF(T)                std::is_reference<T>::value
#define ISSCALAR(T)             std::is_scalar<T>::value

//Type properties
#define ISABSTRACT(T)           std::is_abstract<T>::value
#define ISCONST(T)              std::is_const<T>::value
#define ISEMPTY(T)              std::is_empty<T>::value
#define ISLITERALTYPE(T)        std::is_literal_type<T>::value
#define ISPOD(T)                std::is_pod<T>::value
#define ISPOLYMORPHIC(T)           std::is_polymorphic<T>::value
#define ISSIGNED(T)             std::is_signed<T>::value
#define ISSTDLAYOUT(T)          std::is_standard_layout<T>::value
#define ISTRIVIAL(T)            std::is_trivial<T>::value
#define ISTRIVIALLYCOPYABLE(T)  std::is_trivially_copyable<T>::value
#define ISUNSIGNED(T)           std::is_unsigned<T>::value
#define ISVOLATILE(T)           std::is_volatile<T>::value

//Type features
#define HASVIRTUALDTOR(T)                   std::has_virutal_destructor<T>::value
#define ISASSIGNABLE(T)                     std::is_assignable<T>::value
#define ISCONSTRUCTIBLE(T)                  std::is_constructible<T>::value
#define ISCOPYASSIGNABLE(T)                 std::is_copy_assignable<T>::value
#define ISCOPYCONSTRUCTIBLE(T)              std::is_copy_constructible<T>::value
#define ISDESTRUCTIBLE(T)                   std::is_destructible<T>::value
#define ISDEFAULTCONSTRUCTIBLE(T)           std::is_default_constructible<T>::value
#define ISMOVEASSIGNABLE(T)                 std::is_move_assignable<T>::value
#define ISMOVECONSTRUCTIBLE(T)              std::is_move_constructible<T>::value
#define ISTRIVIALLYASSIGNABLE(T)            std::is_trivially_assignable<T>::value
#define ISTRIVIALLYCONSTRUCTIBLE(T)         std::is_trivially_constructible<T>::value
#define ISTRIVIALLYCOPYASSIGNABLE(T)        std::is_trivially_copy_assignable<T>::value
#define ISTRIVIALLYCOPYCONSTRUCTIBLE(T)     std::is_trivially_copy_constructible<T>::value
#define ISTRIVIALLYDESTRUCTIBLE(T)          std::is_trivially_destructible<T>::value
#define ISTRIVIALLYDEFAULTCONSTRUCTIBLE(T)  std::is_trivially_default_constructible<T>::value
#define ISTRIVIALLYMOVEASSIGNABLE(T)        std::is_trivially_move_assignable<T>::value
#define ISTRIVIALLYMOVECONSTRUCTIBLE(T)     std::is_trivially_move_constructible<T>::value
#define ISNOTHROWASSIGNABLE(T)              std::is_nothrow_assignable<T>::value
#define ISNOTHROWCONSTRUCTIBLE(T)           std::is_nothrow_constructible<T>::value
#define ISNOTHROWCOPYASSIGNABLE(T)          std::is_nothrow_copy_assignable<T>::value
#define ISNOTHROWCOPYCONSTRUCTIBLE(T)       std::is_nothrow_copy_constructible<T>::value
#define ISNOTHROWDESTRUCTIBLE(T)            std::is_nothrow_destructible<T>::value
#define ISNOTHROWDEFAULTCONSTRUCTIBLE(T)    std::is_nothrow_default_constructible<T>::value
#define ISNOTHROWMOVEASSIGNABLE(T)          std::is_nothrow_move_assignable<T>::value
#define ISNOTHROWMOVECONSTRUCTIBLE(T)       std::is_nothrow_move_constructible<T>::value

//Type relationships
#define ISBASEOF(A, B)                      std::is_base_of<A, B>::value
#define ISCONVERTIBLE(A, B)                 std::is_convertible<A, B>::value
#define ISSAME(A, B)                        std::is_same<A, B>::value


///Function Decorator syntax (FD syntax)
#define _FDBEGIN template<class T, class = typename std::enable_if<
#define _FDEND , T>::type>
#define _FDPROTO(C) _FDBEGIN C _FDEND

//Primary type categories
#define ARRAYFUNC           _FDPROTO(ISARRAY(T))
#define CLASSFUN            _FDPROTO(ISCLASS(T))
#define ENUMFUNC            _FDPROTO(ISENUM(T))
#define FLOATINGPOINTFUNC   _FDPROTO(ISFLOATINGPOINT(T))
#define FUNCTIONFUNC        _FDPROTO(ISFUNCTION(T))
#define INTEGRALFUNC        _FDPROTO(ISINTEGRAL(T))
#define LVALUEREFFUNC       _FDPROTO(ISLVALUEREF(T))
#define MEMFUNCPOINTERFUNC  _FDPROTO(ISMEMBERFUNCPOINTER(T))
#define MEMOBJPOINTERFUNC   _FDPROTO(ISMEMBEROBJPOINTER(T))
#define POINTERFUNC         _FDPROTO(ISPOINTER(T))
#define RVALUEREFFUNC       _FDPROTO(ISRVALUEREF(T))
#define UNIONFUNC           _FDPROTO(ISUNION(T))
#define VOIDFUNC            _FDPROTO(ISVOID(T))

//Composite type categories
#define ARITHMETICFUNC      _FDPROTO(ISARITHMETIC(T))
#define COMPOUNDFUNC        _FDPROTO(ISCOMPOUND(T))
#define FUNDAMENTALFUNC     _FDPROTO(ISFUNDAMENTAL(T))
#define MEMPOINERFUNC       _FDPROTO(ISMEMBERPOINTER(T))
#define OBJFUNC             _FDPROTO(ISOBJECT(T))
#define REFFUNC             _FDPROTO(ISREF(T))
#define SCALARFUNC          _FDPROTO(ISSCALAR(T))

//Type properties
#define ABSTRACTFUNC            _FDPROTO(ISABSTRACT(T))
#define CONSTFUNC               _FDPROTO(ISCONST(T))
#define EMPTYFUNC               _FDPROTO(ISEMPTY(T))
#define LITERALTYPEFUNC         _FDPROTO(ISLITERALTYPE(T))
#define PODFUNC                 _FDPROTO(ISPOD(T))
#define POLYMORPHICFUNC         _FDPROTO(ISPOLYMORPHIC(T))
#define SIGNEDFUNC              _FDPROTO(ISSIGNED(T))
#define STDLAYOUTFUNC           _FDPROTO(ISSTDLAYOUT(T))
#define TRIVIALFUNC             _FDPROTO(ISTRIVIAL(T))
#define TRIVIALLYCOPYABLEFUNC   _FDPROTO(ISTRIVIALLYCOPYABLE(T))
#define UNSIGNEDFUNC            _FDPROTO(ISUNSIGNED(T))
#define VOLATILEFUNC            _FDPROTO(ISVOLATILE(T))

//Type features
#define HASVIRTUALDTORFUNC                  _FDPROTO(HASVIRTUALDTOR(T))
#define ASSIGNABLEFUNC                      _FDPROTO(ISASSIGNABLE(T))
#define CONSTRUCTIBLEFUNC                   _FDPROTO(ISCONSTRUCTIBLE(T))
#define COPYASSIGNABLEFUNC                  _FDPROTO(ISCOPYASSIGNABLE(T))
#define COPYCONSTRUCTIBLEFUNC               _FDPROTO(ISCOPYCONSTRUCTIBLE(T))
#define DESTRUCTABLEFUNC                    _FDPROTO(ISDESTRUCTIBLE(T))
#define DEFAULTCONSTRUCTIBLEFUNC            _FDPROTO(ISDEFAULTCONSTRUCTIBLE(T))
#define MOVEASSIGNABLEFUNC                  _FDPROTO(ISMOVEASSIGNABLE(T))
#define MOVECONSTRUCTIBLEFUNC               _FDPROTO(ISMOVECONSTRUCTIBLE(T))
#define TRIVIALLYASSIGNABLEFUNC             _FDPROTO(ISTRIVIALLYASSIGNABLE(T))
#define TRIVIALLYCONSTRUCTIBLE              _FDPROTO(ISTRIVIALLYCONSTRUCTIBLE(T))
#define TRIVIALLYCOPYASSIGNABLEFUNC         _FDPROTO(ISTRIVIALLYCOPYASSIGNABLE(T))
#define TRIVIALLYCOPYCONSTRUCTIBLEFUNC      _FDPROTO(ISTRIVIALLYCOPYCONSTRUCTIBLE(T))
#define TRIVIALLYDESTRUCTIBLEFUNC           _FDPROTO(ISTRIVIALLYDESTRUCTIBLE(T))
#define TRIVIALLYDEFAULTCONSTRUCTIBLEFUNC   _FDPROTO(ISTRIVIALLYDEFAULTCONSTRUCTIBLE(T))
#define TRIVIALLYMOVEASSIGNABLEFUNC         _FDPROTO(ISTRIVIALLYMOVEASSIGNABLE(T))
#define TRIVIALLYMOVECONSTRUCTIBLEFUNC      _FDPROTO(ISTRIVIALLYMOVECONSTRUCTIBLE(T))
#define NOTHROWASSIGNABLEFUNC               _FDPROTO(ISNOTHROWASSIGNABLE(T))
#define NOTHROWCONSTRUCTIBLEFUNC            _FDPROTO(ISNOTHROWCONSTRUCTIBLE(T))
#define NOTHROWCOPYASSIGNABLEFUNC           _FDPROTO(ISNOTHROWCOPYASSIGNABLE(T))
#define NOTHROWCOPYCONSTRUCTIBLEFUNC        _FDPROTO(ISNOTHROWCOPYCONSTRUCTIBLE(T))
#define NOTHROWDESTRUCTIBLEFUNC             _FDPROTO(ISNOTHROWDESTRUCTIBLE(T))
#define NOTHROWDEFAULTCONSTRUCTIBLEFUNC     _FDPROTO(ISNOTHROWDEFAULTCONSTRUCTIBLE(T))
#define NOTHROWMOVEASSIGNABLEFUNC           _FDPROTO(ISNOTHROWMOVEASSIGNABLE(T))
#define NOTHROWMOVECONSTRUCTIBLEFUNC        _FDPROTO(ISNOTHROWMOVECONSTRUCTIBLE(T))

//Type relationships
#define BASEOFFUNC       _FDPROTO(ISBASEOF(A, B))
#define CONVERTIBLEFUNC  _FDPROTO(ISCONVERTIBLE(A, B))
#define SAMEFUNC         _FDPROTO(ISSAME(A, B))


































