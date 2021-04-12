/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol OS_xpc_object;
@class NSObject;

@interface CSVoiceIdXPCClient : NSObject {

	NSObject*<OS_xpc_object> _xpcConnection;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
-(void)setXpcConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)disconnect;
-(NSObject*<OS_xpc_object>)xpcConnection;
-(id)init;
-(void)connect;
-(void)_sendMessage:(id)arg1 connection:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleListenerError:(id)arg1 ;
-(id)_decodeError:(id)arg1 ;
-(void)_handleListenerEvent:(id)arg1 ;
-(void)dealloc;
-(void)notifyImplicitUtterance:(id)arg1 audioDeviceType:(id)arg2 audioRecordType:(id)arg3 voiceTriggerEventInfo:(id)arg4 otherCtxt:(id)arg5 completion:(/*^block*/id)arg6 ;
@end

