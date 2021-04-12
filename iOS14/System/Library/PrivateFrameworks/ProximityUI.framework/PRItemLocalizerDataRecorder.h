/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

