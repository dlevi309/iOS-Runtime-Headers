/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProximityUI.framework/ProximityUI
*/


@protocol PRItemLocalizerDataRecorder
@optional
-(void)start;
-(void)stopAndDiscard;
-(void)recordProximityMeasurement:(id)arg1;
-(void)recordPoseMeasurement:(id)arg1;
-(void)recordEstimatorInput:(id)arg1;
-(void)recordTargetEstimates:(id)arg1;
-(void)recordRangeEstimate:(id)arg1;
-(void)recordTargetMovingStateChanged:(BOOL)arg1 atTime:(double)arg2;
-(void)recordCustomData:(id)arg1 forKey:(id)arg2;
-(id)stopAndSave;

@end

