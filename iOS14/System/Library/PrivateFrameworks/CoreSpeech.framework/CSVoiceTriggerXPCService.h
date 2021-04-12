/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSVoiceTriggerXPCClientDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CSVoiceTriggerXPCClient, NSString;

@interface CSVoiceTriggerXPCService : NSObject <CSVoiceTriggerXPCClientDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	CSVoiceTriggerXPCClient* _xpcClient;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) CSVoiceTriggerXPCClient * xpcClient;              //@synthesize xpcClient=_xpcClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedService;
-(id)init;
-(void)enableVoiceTrigger:(BOOL)arg1 withAssertion:(id)arg2 ;
-(CSVoiceTriggerXPCClient *)xpcClient;
-(void)_teardownXPCClientIfNeeded;
-(void)setPhraseSpotterBypassing:(BOOL)arg1 timeout:(double)arg2 ;
-(void)notifyVoiceTriggeredSiriSessionCancelled;
-(void)setRaiseToSpeakBypassing:(BOOL)arg1 timeout:(double)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setXpcClient:(CSVoiceTriggerXPCClient *)arg1 ;
-(id)_createXPCClientConnectionIfNeeded:(id)arg1 ;
-(void)enableVoiceTrigger:(BOOL)arg1 withAssertion:(id)arg2 xpcClient:(id)arg3 ;
-(void)setPhraseSpotterBypassing:(BOOL)arg1 timeout:(double)arg2 xpcClient:(id)arg3 ;
-(void)setRaiseToSpeakBypassing:(BOOL)arg1 timeout:(double)arg2 xpcClient:(id)arg3 ;
-(void)notifyVoiceTriggeredSiriSessionCancelledWithXpcClient:(id)arg1 ;
-(void)voiceTriggerXPCClient:(id)arg1 didDisconnect:(BOOL)arg2 ;
-(id)fetchVoiceTriggerDailyStats;
@end

