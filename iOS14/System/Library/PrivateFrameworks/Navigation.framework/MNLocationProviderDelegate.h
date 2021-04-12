/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol MNLocationProviderDelegate <NSObject>
@required
-(void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2;
-(void)locationProvider:(id)arg1 didReceiveError:(id)arg2;
-(void)locationProviderDidResumeLocationUpdates:(id)arg1;
-(BOOL)locationProviderShouldPauseLocationUpdates:(id)arg1;
-(void)locationProviderDidChangeAuthorizationStatus:(id)arg1;
-(void)locationProvider:(id)arg1 didUpdateHeading:(id)arg2;
-(void)locationProvider:(id)arg1 didChangeCoarseMode:(BOOL)arg2;
-(void)locationProvider:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
-(void)locationProviderDidPauseLocationUpdates:(id)arg1;
-(void)locationProvider:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;

@end

