/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setXpcConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)xpcConnection;
-(id)init;
-(id<CSVoiceTriggerXPCClientDelegate>)delegate;
-(id)fetchVoiceTriggerStats;
-(void)connect;
-(void)_sendMessage:(id)arg1 connection:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setDelegate:(id<CSVoiceTriggerXPCClientDelegate>)arg1 ;
-(void)enableVoiceTrigger:(BOOL)arg1 withAssertion:(id)arg2 timestamp:(double)arg3 ;
-(void)setPhraseSpotterBypassing:(BOOL)arg1 timeout:(double)arg2 ;
-(void)_handleListenerError:(id)arg1 ;
-(void)notifyVoiceTriggeredSiriSessionCancelled;
-(void)_handleListenerDisconnectedError:(id)arg1 ;
-(void)setRaiseToSpeakBypassing:(BOOL)arg1 timeout:(double)arg2 ;
-(void)_handleListenerEvent:(id)arg1 ;
-(void)dealloc;
@end

