/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
*/


@protocol MXMInstrumental <NSCopying>
@optional
-(void)willStartAtEstimatedTime:(unsigned long long)arg1;
-(BOOL)prepareWithOptions:(id)arg1 error:(id*)arg2;
-(void)didStartAtTime:(unsigned long long)arg1 startDate:(id)arg2;
-(void)willStop;
-(void)didStopAtTime:(unsigned long long)arg1 stopDate:(id)arg2;

@required
-(BOOL)harvestData:(id*)arg1 error:(id*)arg2;

@end

