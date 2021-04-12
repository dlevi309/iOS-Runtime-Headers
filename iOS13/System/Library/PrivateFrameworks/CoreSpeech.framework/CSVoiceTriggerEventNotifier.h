/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2 ;
-(void)voiceTriggerDidDetectNearMiss:(id)arg1 ;
-(void)voiceTriggerDidDetectSpeakerReject:(id)arg1 ;
-(void)keywordDetectorDidDetectKeyword;
-(void)voiceTriggerGotSuperVector:(id)arg1 ;
-(void)raiseToSpeakDetected:(id)arg1 ;
-(void)_notifyTriggerEvent:(id)arg1 deviceId:(id)arg2 ;
-(void)_notifyNearMissEvent:(id)arg1 ;
-(void)_notifySpeakerReject:(id)arg1 ;
-(void)_notifySuperVector:(id)arg1 ;
-(void)_notifyKeywordDetect;
-(void)_notifyRaiseToSpeakTriggerEvent:(id)arg1 ;
-(id)_createVoiceTriggerEventInfoString:(id)arg1 ;
@end

