/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
*/


@class NSMutableArray;

@interface PAContiguousStack : NSObject {

	NSMutableArray* _threads;
	unsigned long long _firstTimestampIndex;
	unsigned long long _previousCpuTimeNs;
	unsigned long long _previousCpuInstructions;
	unsigned long long _previousCpuCycles;

}

@property (readonly) unsigned long long threadId; 
@property (readonly) unsigned long long dispatchQueueId; 
-(id)debugDescription;
-(unsigned long long)count;
-(unsigned long long)threadId;
-(unsigned long long)dispatchQueueId;
-(unsigned long long)cpuTimeNs;
-(BOOL)isProcessorIdleThread;
-(unsigned long long)lastTimestampIndex;
-(BOOL)isIdleWorkQueueThread;
-(unsigned long long)firstTimestampIndex;
-(BOOL)isGlobalForcedIdleThread;
-(unsigned long long)cpuInstructions;
-(unsigned long long)cpuCycles;
-(BOOL)isSingleStackWithLeafUserFrame:(id)arg1 andLeafKernelFrame:(id)arg2 ;
-(BOOL)hasSingleName:(id*)arg1 ;
-(id)initWithTimestampIndex:(unsigned long long)arg1 andPreviousCpuTimeNs:(unsigned long long)arg2 andPreviousCpuInstructions:(unsigned long long)arg3 andPreviousCpuCycles:(unsigned long long)arg4 ;
-(void)addSampleThread:(id)arg1 atTimestampIndex:(unsigned long long)arg2 ;
-(id)sampleThreadAtTimestampIndex:(unsigned long long)arg1 ;
-(BOOL)threadExistedPreviously;
-(void)iterateSampleThreadsFromTimestampIndex:(unsigned long long)arg1 toTimestampIndex:(unsigned long long)arg2 callback:(/*^block*/id)arg3 ;
-(void)iterateSampleTaskThreadPairsWithTasks:(id)arg1 fromTimestampIndex:(unsigned long long)arg2 toTimestampIndex:(unsigned long long)arg3 callback:(/*^block*/id)arg4 ;
@end

