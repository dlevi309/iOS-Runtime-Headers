/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@protocol CellThroughputAdviserDelegate <NSObject>
@required
-(void)sendPowerLogReport:(id)arg1 isStart:(BOOL)arg2;
-(void)setPollingRate:(double)arg1;
-(void)relayCellThroughputAdvice:(unsigned)arg1 at:(double)arg2;
-(void)postAWDMetric:(id)arg1 withIdentifier:(unsigned)arg2;
-(void)setTimerCallbackWithDelay:(double)arg1 context:(id)arg2;

@end

