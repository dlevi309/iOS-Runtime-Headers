/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSVoiceTriggerXPCClientDelegate.h>

@protocol OS_dispatch_queue, CSVoiceTriggerXPCServiceDelegate;
@class NSObject, NSMutableSet, CSVoiceTriggerXPCClient, NSString;

@interface CSVoiceTriggerXPCService : NSObject <CSVoiceTriggerXPCClientDelegate> {

	BOOL _isPhraseSpotterBypassed;
	NSObject*<OS_dispatch_queue> _queue;
	id<CSVoiceTriggerXPCServiceDelegate> _delegate;
	NSMutableSet* _activationAssertions;
	CSVoiceTriggerXPCClient* _xpcClient;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<CSVoiceTriggerXPCServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableSet * activationAssertions;                               //@synthesize activationAssertions=_activationAssertions - In the implementation block
@property (assign,nonatomic) BOOL isPhraseSpotterBypassed;                                      //@synthesize isPhraseSpotterBypassed=_isPhraseSpotterBypassed - In the implementation block
@property (nonatomic,retain) CSVoiceTriggerXPCClient * xpcClient;                               //@synthesize xpcClient=_xpcClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedService;
+(id)sharedServiceForCoreSpeechDaemon;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<CSVoiceTriggerXPCServiceDelegate>)delegate;
-(void)setDelegate:(id<CSVoiceTriggerXPCServiceDelegate>)arg1 ;
-(CSVoiceTriggerXPCClient *)xpcClient;
-(void)setXpcClient:(CSVoiceTriggerXPCClient *)arg1 ;
-(void)enableVoiceTrigger:(BOOL)arg1 withAssertion:(id)arg2 ;
-(void)setPhraseSpotterBypassing:(BOOL)arg1 timeout:(double)arg2 ;
-(void)notifyVoiceTriggeredSiriSessionCancelled;
-(id)_createXPCClientConnectionIfNeeded;
-(void)_teardownXPCClientIfNeeded;
-(void)enableVoiceTriggerForCoreSpeechDaemon:(BOOL)arg1 withAssertion:(id)arg2 timestamp:(double)arg3 ;
-(void)setPhraseSpotterBypassingForCoreSpeechDaemon:(BOOL)arg1 timeout:(double)arg2 ;
-(void)voiceTriggerXPCClient:(id)arg1 didDisconnect:(BOOL)arg2 ;
-(void)notifyVoiceTriggeredSiriSessionCancelledForCoreSpeechDaemon;
-(void)notifyServiceConnectionLostForCoreSpeechDaemon;
-(NSMutableSet *)activationAssertions;
-(void)setActivationAssertions:(NSMutableSet *)arg1 ;
-(BOOL)isPhraseSpotterBypassed;
-(void)setIsPhraseSpotterBypassed:(BOOL)arg1 ;
@end

