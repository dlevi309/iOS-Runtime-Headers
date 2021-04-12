/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
*/


@protocol PAAggregatedStack <NSObject>
@required
-(int)count;
-(long long)compare:(id)arg1;
-(void)printToOutputStream:(id)arg1;
-(void)addSampleThread:(id)arg1 atTimestampIndex:(unsigned long long)arg2 fillGapInTimestampIndexWithPreviousThreads:(BOOL)arg3;

@end

