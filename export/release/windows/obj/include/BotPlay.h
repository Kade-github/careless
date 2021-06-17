// Generated by Haxe 4.2.2
#ifndef INCLUDED_BotPlay
#define INCLUDED_BotPlay

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(BotPlay)
HX_DECLARE_CLASS0(Option)



class HXCPP_CLASS_ATTRIBUTES BotPlay_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef BotPlay_obj OBJ_;
		BotPlay_obj();

	public:
		enum { _hx_ClassId = 0x14219af3 };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="BotPlay")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"BotPlay"); }
		static ::hx::ObjectPtr< BotPlay_obj > __new(::String desc);
		static ::hx::ObjectPtr< BotPlay_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BotPlay_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BotPlay",7b,4f,d4,19); }

		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_BotPlay */ 
