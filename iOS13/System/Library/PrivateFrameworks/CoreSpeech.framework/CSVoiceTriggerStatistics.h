/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)clearTriggerCount;
-(unsigned long long)triggerCount;
-(void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2 ;
-(void)resetPHSRejectCount;
-(double)getLastPHSRejectTime;
-(unsigned long long)getPHSRejectCount;
-(void)incrementPHSRejectCount;
-(void)increaseTriggerCount;
@end

