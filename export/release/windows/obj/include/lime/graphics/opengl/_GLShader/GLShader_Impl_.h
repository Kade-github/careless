// Generated by Haxe 4.2.2
#ifndef INCLUDED_lime_graphics_opengl__GLShader_GLShader_Impl_
#define INCLUDED_lime_graphics_opengl__GLShader_GLShader_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,_internal,backend,native,NativeOpenGLRenderContext)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS4(lime,graphics,opengl,_GLShader,GLShader_Impl_)

namespace lime{
namespace graphics{
namespace opengl{
namespace _GLShader{


class HXCPP_CLASS_ATTRIBUTES GLShader_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GLShader_Impl__obj OBJ_;
		GLShader_Impl__obj();

	public:
		enum { _hx_ClassId = 0x2961bd64 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl._GLShader.GLShader_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl._GLShader.GLShader_Impl_"); }

		inline static ::hx::ObjectPtr< GLShader_Impl__obj > __new() {
			::hx::ObjectPtr< GLShader_Impl__obj > __this = new GLShader_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< GLShader_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			GLShader_Impl__obj *__this = (GLShader_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GLShader_Impl__obj), false, "lime.graphics.opengl._GLShader.GLShader_Impl_"));
			*(void **)__this = GLShader_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GLShader_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GLShader_Impl_",4a,13,27,03); }

		static  ::lime::graphics::opengl::GLObject fromInt(int id);
		static ::Dynamic fromInt_dyn();

		static  ::lime::graphics::opengl::GLObject fromSource( ::lime::_internal::backend::native::NativeOpenGLRenderContext gl,::String source,int type);
		static ::Dynamic fromSource_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace _GLShader

#endif /* INCLUDED_lime_graphics_opengl__GLShader_GLShader_Impl_ */ 
