/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreAudio.framework/CoreAudio
*/

#import <CoreAudio/CoreAudio-Structs.h>
#import <CoreAudio/Core_Audio_Hardware.h>
#import <libobjc.A.dylib/XPC_IO_Gateway.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSMutableSet, NSString;

@interface Core_Audio_Daemon : NSObject <Core_Audio_Hardware, XPC_IO_Gateway, NSXPCListenerDelegate> {

	BOOL _is_alive;
	NSMutableSet* _remote_connections;
	NSMutableSet* _property_listener_connections;
	NSMutableSet* _io_listener_connections;
	queue _high_priority_root_queue;
	queue _scratch_queue;
	shared_ptr<std::__1::shared_mutex>* _creation_mutex;
	shared_ptr<Daemon_Guts>* _guts;
	shared_ptr<Portal>* _portal;
	shared_ptr<Server_Side_Client_IO_Host>* _host;
	shared_ptr<AMCP::Utility::Settings_Storage>* _settings_storage;
	shared_ptr<HAL::Default_Device::Manager>* _default_device_manager;
	shared_ptr<HAL::Object_State::Manager>* _object_state_manager;
	shared_ptr<AMCP::System::All_Control_Value_Observer>* _default_device_all_control_value_observer;

}

@property (assign,nonatomic) shared_ptr<std::__1::shared_mutex>* creation_mutex;                                                           //@synthesize creation_mutex=_creation_mutex - In the implementation block
@property (assign,nonatomic) BOOL is_alive;                                                                                                //@synthesize is_alive=_is_alive - In the implementation block
@property (assign,nonatomic) shared_ptr<Daemon_Guts>* guts;                                                                                //@synthesize guts=_guts - In the implementation block
@property (assign,nonatomic) shared_ptr<Portal>* portal;                                                                                   //@synthesize portal=_portal - In the implementation block
@property (nonatomic,retain) NSMutableSet * remote_connections;                                                                            //@synthesize remote_connections=_remote_connections - In the implementation block
@property (nonatomic,retain) NSMutableSet * property_listener_connections;                                                                 //@synthesize property_listener_connections=_property_listener_connections - In the implementation block
@property (nonatomic,retain) NSMutableSet * io_listener_connections;                                                                       //@synthesize io_listener_connections=_io_listener_connections - In the implementation block
@property (assign,nonatomic) shared_ptr<Server_Side_Client_IO_Host>* host;                                                                 //@synthesize host=_host - In the implementation block
@property (assign,nonatomic) shared_ptr<AMCP::Utility::Settings_Storage>* settings_storage;                                                //@synthesize settings_storage=_settings_storage - In the implementation block
@property (assign,nonatomic) shared_ptr<HAL::Default_Device::Manager>* default_device_manager;                                             //@synthesize default_device_manager=_default_device_manager - In the implementation block
@property (assign,nonatomic) shared_ptr<HAL::Object_State::Manager>* object_state_manager;                                                 //@synthesize object_state_manager=_object_state_manager - In the implementation block
@property (assign,nonatomic) shared_ptr<AMCP::System::All_Control_Value_Observer>* default_device_all_control_value_observer;              //@synthesize default_device_all_control_value_observer=_default_device_all_control_value_observer - In the implementation block
@property (assign,nonatomic) queue high_priority_root_queue;                                                                               //@synthesize high_priority_root_queue=_high_priority_root_queue - In the implementation block
@property (assign,nonatomic) queue scratch_queue;                                                                                          //@synthesize scratch_queue=_scratch_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(shared_ptr<Server_Side_Client_IO_Host>*)host;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setHost:(shared_ptr<Server_Side_Client_IO_Host>*)arg1 ;
-(void)handle_io_message:(unsigned)arg1 with:(unsigned)arg2 incoming:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)release_resources;
-(void)audio_object_get_property_info:(unsigned)arg1 token:(unsigned)arg2 at:(AudioObjectPropertyAddress)arg3 reply:(/*^block*/id)arg4 ;
-(void)create_device_for_client_io:(unsigned)arg1 with:(unsigned)arg2 reply:(/*^block*/id)arg3 ;
-(void)create_io_client_on:(unsigned)arg1 using_listener:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)audio_object_get_property_data:(unsigned)arg1 token:(unsigned)arg2 at:(AudioObjectPropertyAddress)arg3 with:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)audio_object_set_property_data:(unsigned)arg1 token:(unsigned)arg2 at:(AudioObjectPropertyAddress)arg3 with:(id)arg4 value:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)create_aggregate_device:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)destroy_aggregate_device:(unsigned)arg1 reply:(/*^block*/id)arg2 ;
-(void)add_property_listener:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)send_io_message:(XPC_Message_Payload)arg1 ;
-(shared_ptr<HAL::Default_Device::Manager>*)default_device_manager;
-(void)call_all_remote_listeners_async:(id)arg1 ;
-(void)ping:(int)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithMCPType:(long long)arg1 ;
-(void)add_device_token_to_user_info:(unsigned)arg1 user_info:(id)arg2 ;
-(unsigned)device_token_from_user_info_item:(id)arg1 ;
-(void)stop_all_client_io:(unsigned)arg1 ;
-(void)start_all_client_io:(unsigned)arg1 ;
-(void)create_config_change_observers;
-(void)create_property_observer;
-(id)create_listener_connection:(id)arg1 ;
-(id)create_io_listener_connection:(id)arg1 ;
-(int)get_client_pid_from_current_connection;
-(void)sendPropertiesChanged:(unsigned)arg1 count:(unsigned long long)arg2 addresses:(const AudioObjectPropertyAddress*)arg3 ;
-(void)call_all_remote_listeners:(id)arg1 ;
-(shared_ptr<std::__1::shared_mutex>*)creation_mutex;
-(void)setCreation_mutex:(shared_ptr<std::__1::shared_mutex>*)arg1 ;
-(BOOL)is_alive;
-(void)setIs_alive:(BOOL)arg1 ;
-(shared_ptr<Daemon_Guts>*)guts;
-(void)setGuts:(shared_ptr<Daemon_Guts>*)arg1 ;
-(shared_ptr<Portal>*)portal;
-(void)setPortal:(shared_ptr<Portal>*)arg1 ;
-(NSMutableSet *)remote_connections;
-(void)setRemote_connections:(NSMutableSet *)arg1 ;
-(NSMutableSet *)property_listener_connections;
-(void)setProperty_listener_connections:(NSMutableSet *)arg1 ;
-(NSMutableSet *)io_listener_connections;
-(void)setIo_listener_connections:(NSMutableSet *)arg1 ;
-(shared_ptr<AMCP::Utility::Settings_Storage>*)settings_storage;
-(void)setSettings_storage:(shared_ptr<AMCP::Utility::Settings_Storage>*)arg1 ;
-(void)setDefault_device_manager:(shared_ptr<HAL::Default_Device::Manager>*)arg1 ;
-(shared_ptr<HAL::Object_State::Manager>*)object_state_manager;
-(void)setObject_state_manager:(shared_ptr<HAL::Object_State::Manager>*)arg1 ;
-(shared_ptr<AMCP::System::All_Control_Value_Observer>*)default_device_all_control_value_observer;
-(void)setDefault_device_all_control_value_observer:(shared_ptr<AMCP::System::All_Control_Value_Observer>*)arg1 ;
-(queue)high_priority_root_queue;
-(void)setHigh_priority_root_queue:(queue)arg1 ;
-(queue)scratch_queue;
-(void)setScratch_queue:(queue)arg1 ;
@end

