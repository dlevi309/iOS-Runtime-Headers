/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol MNNavigationSessionObserver <NSObject>
@optional
-(void)navigationSessionDidStart:(id)arg1;
-(void)navigationSession:(id)arg1 didChangeNavigationState:(int)arg2;
-(void)navigationSession:(id)arg1 didChangeGuidanceState:(id)arg2;
-(void)navigationSessionDidStop:(id)arg1;
-(void)navigationSession:(id)arg1 didUpdateMatchedLocation:(id)arg2;
-(void)navigationSession:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3;
-(void)navigationSession:(id)arg1 didUpdateStepNameInfo:(id)arg2;
-(void)navigationSessionDidEnterPreArrivalState:(id)arg1;
-(void)navigationSessionDidArrive:(id)arg1;
-(void)navigationSessionDidTimeoutInArrivalRegion:(id)arg1;
-(void)navigationSessionWillPause:(id)arg1;
-(void)navigationSessionWillResumeFromPause:(id)arg1;
-(void)navigationSession:(id)arg1 didUpdateDisplayETA:(id)arg2 displayRemainingMinutes:(unsigned long long)arg3 forRoute:(id)arg4;
-(void)navigationSession:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
-(void)navigationSession:(id)arg1 didUpdateETAResponseForRoute:(id)arg2;
-(void)navigationSession:(id)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3;
-(void)navigationSession:(id)arg1 didUpdateMotionType:(unsigned long long)arg2 confidence:(unsigned long long)arg3;
-(void)navigationSessionWillReroute:(id)arg1;
-(void)navigationSession:(id)arg1 didSuppressReroute:(id)arg2;
-(void)navigationSessionDidCancelReroute:(id)arg1;
-(void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4;
-(void)navigationSession:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;
-(void)navigationSession:(id)arg1 didUpdateDestination:(id)arg2;
-(void)navigationSession:(id)arg1 didFailRerouteWithError:(id)arg2;
-(void)navigationSession:(id)arg1 didUpdateAlternateRoutes:(id)arg2;
-(void)navigationSession:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned long long)arg4;
-(void)navigationSession:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilSign:(double)arg3 timeUntilSign:(double)arg4;
-(void)navigationSession:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;
-(void)navigationSession:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
-(void)navigationSession:(id)arg1 didAnnounce:(id)arg2 stage:(unsigned long long)arg3;
-(void)navigationSession:(id)arg1 triggerHaptics:(int)arg2;
-(void)navigationSession:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(BOOL)arg8;
-(void)navigationSession:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
-(void)navigationSession:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;
-(void)navigationSessionHideSecondaryStep:(id)arg1;
-(void)navigationSessionBeginGuidanceUpdate:(id)arg1;
-(void)navigationSessionEndGuidanceUpdate:(id)arg1;
-(void)navigationSession:(id)arg1 updateSignsWithInfo:(id)arg2;
-(void)navigationSession:(id)arg1 usePersistentDisplay:(BOOL)arg2;
-(void)navigationSession:(id)arg1 showLaneDirections:(id)arg2;
-(void)navigationSession:(id)arg1 hideLaneDirectionsForId:(id)arg2;
-(void)navigationSession:(id)arg1 showJunctionView:(id)arg2;
-(void)navigationSession:(id)arg1 hideJunctionViewForId:(id)arg2;
-(void)navigationSession:(id)arg1 didAnnounceArrival:(id)arg2;
-(void)navigationSession:(id)arg1 didEnableGuidancePrompts:(BOOL)arg2;
-(void)navigationSession:(id)arg1 newGuidanceEventFeedback:(id)arg2;
-(void)navigationSession:(id)arg1 updatedGuidanceEventFeedback:(id)arg2;
-(void)navigationSession:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2 responseCallback:(/*^block*/id)arg3;
-(void)navigationSession:(id)arg1 didUpdateTrafficIncidentAlert:(id)arg2;
-(void)navigationSession:(id)arg1 didInvalidateTrafficIncidentAlert:(id)arg2;
-(void)navigationSession:(id)arg1 didActivateAudioSession:(BOOL)arg2;
-(void)navigationSession:(id)arg1 didStartSpeakingPrompt:(id)arg2;

@end

