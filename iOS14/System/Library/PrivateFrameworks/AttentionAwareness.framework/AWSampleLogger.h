/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)client:(id)arg1 pollEventType:(unsigned long long)arg2 event:(id)arg3 ;
+(void)client:(id)arg1 event:(id)arg2 ;
+(void)client:(id)arg1 attentionStateChange:(BOOL)arg2 ;
+(id)sharedLogger;
-(id)init;
-(void)shouldSample:(BOOL)arg1 ;
-(void)_outputPowerLog;
-(void)outputPowerLog;
-(void)powerLogName:(id)arg1 event:(id)arg2 ;
-(void)startUpdate;
-(void)updateDataForClient:(id)arg1 deadline:(unsigned long long)arg2 ;
-(void)sampleStartedWithDeadline:(unsigned long long)arg1 ;
-(void)sampleSucceeded;
@end

