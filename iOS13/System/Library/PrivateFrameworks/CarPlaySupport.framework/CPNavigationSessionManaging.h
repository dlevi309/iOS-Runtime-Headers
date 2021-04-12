/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/


@protocol CPNavigationSessionManaging <NSObject>
@required
-(void)pauseTripForReason:(unsigned long long)arg1 description:(id)arg2;
-(void)finishTrip;
-(void)cancelTrip;
-(void)showManeuvers:(id)arg1 usingDisplayStyles:(id)arg2;
-(void)updateTravelEstimates:(id)arg1 forManeuver:(id)arg2;
-(void)updateTripTravelEstimates:(id)arg1;

@end

