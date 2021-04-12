/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
*/


@protocol OSActivityStreamDelegate <NSObject>
@optional
-(void)streamDidStart:(id)arg1;
-(void)streamDidStop:(id)arg1;
-(BOOL)activityStream:(id)arg1 results:(id)arg2 error:(id)arg3;
-(void)streamDidFail:(id)arg1 error:(id)arg2;

@required
-(BOOL)activityStream:(id)arg1 results:(id)arg2;

@end

