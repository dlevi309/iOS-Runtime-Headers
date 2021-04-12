/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol MNTimeAndDistanceUpdaterDelegate <NSObject>
@required
-(void)timeAndDistanceUpdater:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;
-(void)timeAndDistanceUpdater:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
-(void)timeAndDistanceUpdater:(id)arg1 didUpdateDisplayETA:(id)arg2 displayRemainingMinutes:(unsigned long long)arg3 forRoute:(id)arg4;

@end

