/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol CSVoiceTriggerXPCClientDelegate, OS_xpc_object;
@class NSObject;

@interface CSVoiceTriggerXPCClient : NSObject {

	id<CSVoiceTriggerXPCClientDelegate> _delegate;
	NSObject*<OS_xpc_object> _xpcConnection;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcConnection;                           //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign,nonatomic,__weak) id<CSVoiceTriggerXPCClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id<CSVoiceTriggerXPCClientDelegate>)delegate;
-(void)setDelegate:(id<CSVoiceTriggerXPCClientDelegate>)arg1 ;
-(NSObject*<OS_xpc_object>)xpcConnection;
-(void)setXpcConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)connect;
-(void)enableVoiceTrigger:(BOOL)arg1 withAssertion:(id)arg2 timestamp:(double)arg3 ;
-(void)setPhraseSpotterBypassing:(BOOL)arg1 timeout:(double)arg2 ;
-(void)notifyVoiceTriggeredSiriSessionCancelled;
-(void)_handleListenerEvent:(id)arg1 ;
-(void)_handleListenerError:(id)arg1 ;
-(void)_sendMessage:(id)arg1 connection:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleListenerDisconnectedError:(id)arg1 ;
@end

