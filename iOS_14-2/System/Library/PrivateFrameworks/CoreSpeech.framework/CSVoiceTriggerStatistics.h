/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSVoiceTriggerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface CSVoiceTriggerStatistics : NSObject <CSVoiceTriggerDelegate> {

	unsigned long long _triggerCount;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _consecutivePHSRejects;
	double _lastPHSReject;
	unsigned long long _consecutiveVTRejects;
	unsigned long long _firstPassTriggerCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)clearTriggerCount;
-(void)incrementFirstPassTriggerCount;
-(void)incrementPHSRejectCount;
-(unsigned long long)triggerCount;
-(void)voiceTriggerDidDetectNearMiss:(id)arg1 ;
-(void)increaseTriggerCount;
-(void)voiceTriggerDidRejected:(id)arg1 ;
-(void)incrementVTRejectCount;
-(void)resetPHSRejectCount;
-(double)getLastPHSRejectTime;
-(unsigned long long)firstPassTriggerCount;
-(unsigned long long)getVTRejectCount;
-(void)clearFirstPassTriggerCount;
-(unsigned long long)getPHSRejectCount;
-(void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2 ;
@end

