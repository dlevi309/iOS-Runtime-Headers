/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol MNLocationManagerObserver <NSObject>
@required
-(void)locationManagerDidPauseLocationUpdates:(id)arg1;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1;
-(void)locationManagerUpdatedLocation:(id)arg1;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
-(void)locationManagerDidReset:(id)arg1;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;

@end

