/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSVoiceTriggerDelegate.h>

@protocol OS_dispatch_queue;
@class NSHashTable, NSObject, NSString;

@interface CSVoiceTriggerEventNotifier : NSObject <CSVoiceTriggerDelegate> {

	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)unregisterObserver:(id)arg1 ;
-(void)voiceTriggerGotSuperVector:(id)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(void)voiceTriggerDidDetectSpeakerReject:(id)arg1 ;
-(id)init;
-(void)_notifyNearMissEvent:(id)arg1 ;
-(void)_notifyKeywordDetect;
-(void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)voiceTriggerDidDetectNearMiss:(id)arg1 ;
-(void)keywordDetectorDidDetectKeyword;
-(void)voiceTriggerDidRejected:(id)arg1 ;
-(void)_notifyRaiseToSpeakTriggerEvent:(id)arg1 ;
-(void)_notifyKeywordReject:(id)arg1 ;
-(id)_createVoiceTriggerEventInfoString:(id)arg1 ;
-(void)_notifySuperVector:(id)arg1 ;
-(void)_notifyTriggerEvent:(id)arg1 deviceId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)raiseToSpeakDetected:(id)arg1 ;
-(void)_notifySpeakerReject:(id)arg1 ;
-(void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2 ;
@end

