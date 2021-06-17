// Generated by Haxe 4.2.2
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadAnalogList
#include <flixel/input/gamepad/lists/FlxGamepadAnalogList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadAnalogStateList
#include <flixel/input/gamepad/lists/FlxGamepadAnalogStateList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadAnalogValueList
#include <flixel/input/gamepad/lists/FlxGamepadAnalogValueList.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9e83d4f8938c5833_17_new,"flixel.input.gamepad.lists.FlxGamepadAnalogList","new",0x93642d0b,"flixel.input.gamepad.lists.FlxGamepadAnalogList.new","flixel/input/gamepad/lists/FlxGamepadAnalogList.hx",17,0x4e142041)
namespace flixel{
namespace input{
namespace gamepad{
namespace lists{

void FlxGamepadAnalogList_obj::__construct( ::flixel::input::gamepad::FlxGamepad gamepad){
            	HX_GC_STACKFRAME(&_hx_pos_9e83d4f8938c5833_17_new)
HXLINE(  18)		this->value =  ::flixel::input::gamepad::lists::FlxGamepadAnalogValueList_obj::__alloc( HX_CTX ,gamepad);
HXLINE(  19)		this->justMoved =  ::flixel::input::gamepad::lists::FlxGamepadAnalogStateList_obj::__alloc( HX_CTX ,2,gamepad);
HXLINE(  20)		this->justReleased =  ::flixel::input::gamepad::lists::FlxGamepadAnalogStateList_obj::__alloc( HX_CTX ,-1,gamepad);
            	}

Dynamic FlxGamepadAnalogList_obj::__CreateEmpty() { return new FlxGamepadAnalogList_obj; }

void *FlxGamepadAnalogList_obj::_hx_vtable = 0;

Dynamic FlxGamepadAnalogList_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxGamepadAnalogList_obj > _hx_result = new FlxGamepadAnalogList_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxGamepadAnalogList_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2ea733f7;
}


::hx::ObjectPtr< FlxGamepadAnalogList_obj > FlxGamepadAnalogList_obj::__new( ::flixel::input::gamepad::FlxGamepad gamepad) {
	::hx::ObjectPtr< FlxGamepadAnalogList_obj > __this = new FlxGamepadAnalogList_obj();
	__this->__construct(gamepad);
	return __this;
}

::hx::ObjectPtr< FlxGamepadAnalogList_obj > FlxGamepadAnalogList_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::input::gamepad::FlxGamepad gamepad) {
	FlxGamepadAnalogList_obj *__this = (FlxGamepadAnalogList_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxGamepadAnalogList_obj), true, "flixel.input.gamepad.lists.FlxGamepadAnalogList"));
	*(void **)__this = FlxGamepadAnalogList_obj::_hx_vtable;
	__this->__construct(gamepad);
	return __this;
}

FlxGamepadAnalogList_obj::FlxGamepadAnalogList_obj()
{
}

void FlxGamepadAnalogList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGamepadAnalogList);
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(justMoved,"justMoved");
	HX_MARK_MEMBER_NAME(justReleased,"justReleased");
	HX_MARK_END_CLASS();
}

void FlxGamepadAnalogList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(justMoved,"justMoved");
	HX_VISIT_MEMBER_NAME(justReleased,"justReleased");
}

::hx::Val FlxGamepadAnalogList_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return ::hx::Val( value ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"justMoved") ) { return ::hx::Val( justMoved ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return ::hx::Val( justReleased ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxGamepadAnalogList_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast<  ::flixel::input::gamepad::lists::FlxGamepadAnalogValueList >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"justMoved") ) { justMoved=inValue.Cast<  ::flixel::input::gamepad::lists::FlxGamepadAnalogStateList >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { justReleased=inValue.Cast<  ::flixel::input::gamepad::lists::FlxGamepadAnalogStateList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGamepadAnalogList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("value",71,7f,b8,31));
	outFields->push(HX_("justMoved",67,12,21,2b));
	outFields->push(HX_("justReleased",09,1b,5b,66));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxGamepadAnalogList_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::input::gamepad::lists::FlxGamepadAnalogValueList */ ,(int)offsetof(FlxGamepadAnalogList_obj,value),HX_("value",71,7f,b8,31)},
	{::hx::fsObject /*  ::flixel::input::gamepad::lists::FlxGamepadAnalogStateList */ ,(int)offsetof(FlxGamepadAnalogList_obj,justMoved),HX_("justMoved",67,12,21,2b)},
	{::hx::fsObject /*  ::flixel::input::gamepad::lists::FlxGamepadAnalogStateList */ ,(int)offsetof(FlxGamepadAnalogList_obj,justReleased),HX_("justReleased",09,1b,5b,66)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxGamepadAnalogList_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxGamepadAnalogList_obj_sMemberFields[] = {
	HX_("value",71,7f,b8,31),
	HX_("justMoved",67,12,21,2b),
	HX_("justReleased",09,1b,5b,66),
	::String(null()) };

::hx::Class FlxGamepadAnalogList_obj::__mClass;

void FlxGamepadAnalogList_obj::__register()
{
	FlxGamepadAnalogList_obj _hx_dummy;
	FlxGamepadAnalogList_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.gamepad.lists.FlxGamepadAnalogList",99,4b,d8,02);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxGamepadAnalogList_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxGamepadAnalogList_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxGamepadAnalogList_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxGamepadAnalogList_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace lists
