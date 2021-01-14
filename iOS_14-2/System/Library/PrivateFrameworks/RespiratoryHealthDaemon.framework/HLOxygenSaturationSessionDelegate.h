/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RespiratoryHealthDaemon.framework/RespiratoryHealthDaemon
*/


@protocol HLOxygenSaturationSessionDelegate <NSObject>
@required
-(void)oxygenSaturationSession:(id)arg1 didBeginWithStartTime:(double)arg2 expectedDuration:(double)arg3;
-(void)oxygenSaturationSession:(id)arg1 didEndForReason:(unsigned long long)arg2 measurement:(id)arg3;
-(void)oxygenSaturationSession:(id)arg1 feedbackDidChange:(unsigned long long)arg2;

@end

