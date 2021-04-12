/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
*/

#import <PASampling/PASampleAggregator.h>

@class NSString;

@interface PAProcessInstanceAggregator : PASampleAggregator {

	unsigned long long _startingTSDSIndex;
	NSString* _headerNote;
	unsigned long long _stackshotFrameAddress;
	unsigned long long _timestampIndexWhenTransitionedToSamplingAllProcesses;
	BOOL _forceOneBasedTimeIndexes;

}

@property (readonly) BOOL hasTargetProcess; 
@property (assign) unsigned long long stackshotFrameAddress;                                               //@synthesize stackshotFrameAddress=_stackshotFrameAddress - In the implementation block
@property (readonly) unsigned long long timestampIndexWhenTransitionedToSamplingAllProcesses;              //@synthesize timestampIndexWhenTransitionedToSamplingAllProcesses=_timestampIndexWhenTransitionedToSamplingAllProcesses - In the implementation block
@property (copy) NSString * headerNote;                                                                    //@synthesize headerNote=_headerNote - In the implementation block
@property (assign) BOOL forceOneBasedTimeIndexes;                                                          //@synthesize forceOneBasedTimeIndexes=_forceOneBasedTimeIndexes - In the implementation block
@property (assign) BOOL printSpinSignatureStack; 
@property (assign) BOOL printTargetHIDEvent; 
@property (assign) BOOL printHeavyStacks; 
-(void)setSamples:(id)arg1 ;
-(unsigned long long)sampleIndexForDisplayTimeIndex:(int)arg1 ;
-(BOOL)printHeavyStacks;
-(BOOL)printTargetHIDEvent;
-(BOOL)hasTargetProcess;
-(BOOL)shouldPrintTimeOutsideSamplingRange:(double)arg1 ;
-(BOOL)printSpinSignatureStack;
-(BOOL)forceOneBasedTimeIndexes;
-(id)initWithSampleStore:(id)arg1 ;
-(void)filterToWallTimeRangeStart:(double)arg1 end:(double)arg2 ;
-(void)filterToDisplayTimeIndexStart:(unsigned long long)arg1 end:(unsigned long long)arg2 ;
-(NSString *)headerNote;
-(void)setHeaderNote:(NSString *)arg1 ;
-(void)setPrintSpinSignatureStack:(BOOL)arg1 ;
-(void)setPrintTargetHIDEvent:(BOOL)arg1 ;
-(void)setPrintHeavyStacks:(BOOL)arg1 ;
-(void)setForceOneBasedTimeIndexes:(BOOL)arg1 ;
-(void)printHeaderToOutputStream:(id)arg1 ;
-(id)sortedTasks;
-(void)printFooterToOutputStream:(id)arg1 ;
-(id)newAggregatedTaskForIdentificationPurposesWithSampleTask:(id)arg1 ;
-(id)newAggregatedTaskForSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2 ;
-(id)sampleTaskWithPid:(int)arg1 orTid:(unsigned long long)arg2 atTimestampIndex:(unsigned long long)arg3 ;
-(id)sampleTaskWithPid:(int)arg1 atTimestampIndex:(unsigned long long)arg2 ;
-(int)displayTimeIndexForTimestampIndex:(unsigned long long)arg1 ;
-(unsigned long long)timestampIndexWhenTransitionedToSamplingAllProcesses;
-(unsigned long long)stackshotFrameAddress;
-(id)kernelSampleTaskForSymbolication;
-(void)setStackshotFrameAddress:(unsigned long long)arg1 ;
-(id)sampleTaskWithUniqueId:(unsigned long long)arg1 atTimestampIndex:(unsigned long long)arg2 ;
-(void)printHIDEvent:(id)arg1 toOutputStream:(id)arg2 ;
-(id)sampleIndexStringForMachTime:(double)arg1 ;
-(id)sampleIndexStringForMachTimeRangeStart:(double)arg1 end:(double)arg2 ;
-(void)printHIDEventsToOutputStream:(id)arg1 ;
-(void)limitToSampleInterval:(double)arg1 ;
-(void)filterToMachTimeRangeStart:(double)arg1 end:(double)arg2 ;
@end

