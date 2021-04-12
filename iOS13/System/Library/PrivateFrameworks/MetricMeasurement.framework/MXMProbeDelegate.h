/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
*/


@protocol MXMProbeDelegate <NSObject>
@optional
-(void)probeDidStartUpdating:(id)arg1;
-(void)probeDidUpdate:(id)arg1 data:(id)arg2 stop:(BOOL*)arg3;
-(void)probeDidStop:(id)arg1 reason:(unsigned long long)arg2;

@end

