/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol MNLocationRecorder <NSObject>
@required
-(void)recordInitialCourse:(double)arg1;
-(void)recordLocation:(id)arg1 correctedLocation:(id)arg2;
-(void)recordError:(id)arg1;
-(void)recordCompassHeading:(double)arg1 magneticHeading:(double)arg2 accuracy:(double)arg3 timestamp:(id)arg4;
-(void)recordLocationUpdatePause;
-(void)recordLocationUpdateResume;
-(void)recordVehicleSpeed:(double)arg1 timestamp:(id)arg2;
-(void)recordVehicleHeading:(double)arg1 timestamp:(id)arg2;
-(void)recordLocation:(id)arg1 rawLocation:(id)arg2;

@end

