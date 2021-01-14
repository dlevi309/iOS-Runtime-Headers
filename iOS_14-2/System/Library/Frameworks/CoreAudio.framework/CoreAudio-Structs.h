/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreAudio.framework/CoreAudio
*/


@class NSObject<OS_dispatch_object>;

typedef struct weak_ptr<HAL_Server_Lifetime_Events> {
	HAL_Server_Lifetime_Events __ptr_;
	__shared_weak_count __cntrl_;
} weak_ptr<HAL_Server_Lifetime_Events>;

typedef struct object {
	NSObject<OS_dispatch_object>* fObj;
} object;

typedef struct queue {
	object fObj;
} queue;

typedef struct shared_ptr<std::__1::shared_mutex> {
	shared_mutex __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<std::__1::shared_mutex>;

typedef struct shared_ptr<Daemon_Guts> {
	Daemon_Guts __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<Daemon_Guts>;

typedef struct shared_ptr<Server_Side_Client_IO_Host> {
	Server_Side_Client_IO_Host __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<Server_Side_Client_IO_Host>;

typedef struct shared_ptr<AMCP::Utility::Settings_Storage> {
	Settings_Storage __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<AMCP::Utility::Settings_Storage>;

typedef struct shared_ptr<HAL::Default_Device::Manager> {
	Manager __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<HAL::Default_Device::Manager>;

typedef struct shared_ptr<HAL::Object_State::Manager> {
	Manager __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<HAL::Object_State::Manager>;

typedef struct shared_ptr<AMCP::System::All_Control_Value_Observer> {
	All_Control_Value_Observer __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<AMCP::System::All_Control_Value_Observer>;

typedef struct shared_ptr<HALS_PowerManager::System_Interface> {
	System_Interface __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<HALS_PowerManager::System_Interface>;

typedef struct shared_ptr<HAL::Aggregate::Manager> {
	Manager __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<HAL::Aggregate::Manager>;

typedef struct type {
	unsigned char __lx[24];
} type;

typedef struct _value_func<int ()> {
	type __buf_;
	__base<int ()> __f_;
} value_func<int ()>;

typedef struct function<int ()> {
	value_func<int ()> __f_;
} function<int ()>;

typedef struct _value_func<std::__1::unique_ptr<HALIO::Client_Power_Settings_Base, std::__1::default_delete<HALIO::Client_Power_Settings_Base> > ()> {
	type __buf_;
	__base<std::__1::unique_ptr<HALIO::Client_Power_Settings_Base, std::__1::default_delete<HALIO::Client_Power_Settings_Base> > ()> __f_;
} value_func<std::__1::unique_ptr<HALIO::Client_Power_Settings_Base, std::__1::default_delete<HALIO::Client_Power_Settings_Base> > ()>;

typedef struct function<std::__1::unique_ptr<HALIO::Client_Power_Settings_Base, std::__1::default_delete<HALIO::Client_Power_Settings_Base> > ()> {
	value_func<std::__1::unique_ptr<HALIO::Client_Power_Settings_Base, std::__1::default_delete<HALIO::Client_Power_Settings_Base> > ()> __f_;
} function<std::__1::unique_ptr<HALIO::Client_Power_Settings_Base, std::__1::default_delete<HALIO::Client_Power_Settings_Base> > ()>;

typedef struct shared_ptr<HAL::Client::Object_ID_Map> {
	Object_ID_Map __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<HAL::Client::Object_ID_Map>;

typedef struct shared_ptr<Client_Side_IO_Gateway> {
	Client_Side_IO_Gateway __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<Client_Side_IO_Gateway>;

