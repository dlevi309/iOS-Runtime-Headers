/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

