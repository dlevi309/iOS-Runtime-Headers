/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSActivationEventNotificationHandlerDelegate.h>
#import <libobjc.A.dylib/CSSiriClientBehaviorMonitorDelegate.h>

@protocol CSVoiceTriggerDelegate, OS_dispatch_queue;
@class NSObject, NSMutableDictionary, CSAsset, CSAudioStreamHolding, CSAudioProvider, NSString;

@interface CSVoiceTriggerFirstPassRemora : NSObject <CSActivationEventNotificationHandlerDelegate, CSSiriClientBehaviorMonitorDelegate> {

	id<CSVoiceTriggerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _remoraSecondPassRequests;
	CSAsset* _currentAsset;
	CSAudioStreamHolding* _triggeredAudioStreamHolding;
	CSAudioProvider* _triggeredAudioProvider;
	unsigned long long _secondChanceHotTillMachTime;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * remoraSecondPassRequests;                  //@synthesize remoraSecondPassRequests=_remoraSecondPassRequests - In the implementation block
@property (nonatomic,retain) CSAsset * currentAsset;                                          //@synthesize currentAsset=_currentAsset - In the implementation block
@property (nonatomic,retain) CSAudioStreamHolding * triggeredAudioStreamHolding;              //@synthesize triggeredAudioStreamHolding=_triggeredAudioStreamHolding - In the implementation block
@property (nonatomic,retain) CSAudioProvider * triggeredAudioProvider;                        //@synthesize triggeredAudioProvider=_triggeredAudioProvider - In the implementation block
@property (assign,nonatomic) unsigned long long secondChanceHotTillMachTime;                  //@synthesize secondChanceHotTillMachTime=_secondChanceHotTillMachTime - In the implementation block
@property (assign,nonatomic,__weak) id<CSVoiceTriggerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CSAsset *)currentAsset;
-(unsigned long long)secondChanceHotTillMachTime;
-(void)setAsset:(id)arg1 ;
-(id)init;
-(void)setSecondChanceHotTillMachTime:(unsigned long long)arg1 ;
-(id<CSVoiceTriggerDelegate>)delegate;
-(void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3 ;
-(void)start;
-(void)setCurrentAsset:(CSAsset *)arg1 ;
-(void)setDelegate:(id<CSVoiceTriggerDelegate>)arg1 ;
-(void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 ;
-(void)reset;
-(void)activationEventNotificationHandler:(id)arg1 event:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_setAsset:(id)arg1 ;
-(void)_reset;
-(void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3 ;
-(void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(BOOL)arg3 option:(id)arg4 withEventUUID:(id)arg5 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_handleRemoraTriggerEvent:(id)arg1 secondPassRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_cancelAllAudioStreamHoldings;
-(void)_requestStartAudioStreamWitContext:(id)arg1 secondPassRequest:(id)arg2 startStreamOption:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handleSecondPassResult:(unsigned long long)arg1 secondPassRequest:(id)arg2 voiceTriggerInfo:(id)arg3 deviceId:(id)arg4 secondChanceCandidate:(BOOL)arg5 error:(id)arg6 completion:(/*^block*/id)arg7 ;
-(CSAudioProvider *)triggeredAudioProvider;
-(NSMutableDictionary *)remoraSecondPassRequests;
-(void)setRemoraSecondPassRequests:(NSMutableDictionary *)arg1 ;
-(CSAudioStreamHolding *)triggeredAudioStreamHolding;
-(void)setTriggeredAudioStreamHolding:(CSAudioStreamHolding *)arg1 ;
-(void)setTriggeredAudioProvider:(CSAudioProvider *)arg1 ;
@end

