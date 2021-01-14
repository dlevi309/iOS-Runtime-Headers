/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/


@class NSMutableArray, NSString, SATimestamp, NSMutableDictionary;

@interface SAStack : NSObject {

	BOOL _omit;
	BOOL _isMainThread;
	BOOL _isTargetThread;
	BOOL _isIdleWorkQueue;
	BOOL _threadNameChanges;
	BOOL _isProcessorIdleThread;
	BOOL _isGlobalForcedIdleThread;
	int _minPriority;
	int _maxPriority;
	int _minBasePriority;
	int _maxBasePriority;
	unsigned long long _count;
	NSMutableArray* _dispatchQueues;
	NSMutableArray* _threadIds;
	NSString* _threadName;
	unsigned long long _firstSampleIndex;
	unsigned long long _lastSampleIndex;
	SATimestamp* _timeWhenFirstAttemptedToSample;
	unsigned long long _cpuTimeNs;
	unsigned long long _cpuInstructions;
	unsigned long long _cpuCycles;
	NSMutableArray* _rootFrames;
	NSMutableDictionary* _binaryImagesHitByTask;

}
@end

