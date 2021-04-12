/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableDictionary, NSMutableSet;

@interface AWSampleLogger : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _powerLogQueue;
	NSMutableDictionary* _clientLogData;
	NSMutableSet* _outstandingClientLogData;
	NSMutableSet* _addedClientLogData;
	NSObject*<OS_dispatch_source> _timer;
	unsigned long long _samplingStartTime;
	unsigned long long _cumulativeSamplingTime;
	unsigned long long _samplesRequested;
	unsigned long long _pollsRequested;
	unsigned long long _samplesSucceeded;

}
+(id)sharedLogger;
+(void)client:(id)arg1 attentionStateChange:(BOOL)arg2 ;
+(void)client:(id)arg1 event:(id)arg2 ;
+(void)client:(id)arg1 pollEventType:(unsigned long long)arg2 event:(id)arg3 ;
-(id)init;
-(void)_outputPowerLog;
-(void)outputPowerLog;
-(void)powerLogName:(id)arg1 event:(id)arg2 ;
-(void)startUpdate;
-(void)updateDataForClient:(id)arg1 deadline:(unsigned long long)arg2 ;
-(void)shouldSample:(BOOL)arg1 ;
-(void)sampleStartedWithDeadline:(unsigned long long)arg1 ;
-(void)sampleSucceeded;
@end

