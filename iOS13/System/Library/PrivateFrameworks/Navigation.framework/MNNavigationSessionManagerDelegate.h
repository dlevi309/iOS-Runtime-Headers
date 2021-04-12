/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol MNNavigationSessionManagerDelegate <NSObject>
@required
-(void)navigationSessionManager:(id)arg1 willStartNavigationWithRoute:(id)arg2 navigationType:(int)arg3 request:(id)arg4 response:(id)arg5;
-(void)navigationSessionManager:(id)arg1 didFailWithError:(id)arg2;
-(void)navigationSessionManager:(id)arg1 didChangeNavigationState:(int)arg2;
-(void)navigationSessionManager:(id)arg1 didUpdateLocation:(id)arg2;
-(void)navigationSessionManager:(id)arg1 didUpdateStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3;
-(void)navigationSessionManagerDidEnterPreArrivalState:(id)arg1;
-(void)navigationSessionManagerDidArrive:(id)arg1;
-(void)navigationSessionManagerDidTimeoutInArrivalRegion:(id)arg1;
-(void)navigationSessionManagerWillPause:(id)arg1;
-(void)navigationSessionManagerWillResumeFromPause:(id)arg1;
-(void)navigationSessionManager:(id)arg1 didUpdateDisplayETA:(id)arg2 displayRemainingMinutes:(unsigned long long)arg3 forRoute:(id)arg4;
-(void)navigationSessionManager:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
-(void)navigationSessionManager:(id)arg1 didUpdateETAResponseForRoute:(id)arg2;
-(void)navigationSessionManager:(id)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3;
-(void)navigationSessionManager:(id)arg1 didUpdateMotionType:(unsigned long long)arg2 confidence:(unsigned long long)arg3;
-(void)navigationSessionManager:(id)arg1 didUpdatePreviewRoutes:(id)arg2 withSelectedRouteIndex:(unsigned long long)arg3;
-(void)navigationSessionManagerWillReroute:(id)arg1;
-(void)navigationSessionManager:(id)arg1 didRerouteWithRoute:(id)arg2 locationDetails:(id)arg3 withAlternateRoutes:(id)arg4;
-(void)navigationSessionManagerDidCancelReroute:(id)arg1;
-(void)navigationSessionManager:(id)arg1 didUpdateRouteWithNewRideSelection:(id)arg2;
-(void)navigationSessionManager:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;
-(void)navigationSessionManager:(id)arg1 didFailRerouteWithError:(id)arg2;
-(void)navigationSessionManager:(id)arg1 didUpdateAlternateRoutes:(id)arg2;
-(void)navigationSessionManager:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned long long)arg4;
-(void)navigationSessionManager:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilSign:(double)arg3 timeUntilSign:(double)arg4;
-(void)navigationSessionManager:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;
-(void)navigationSessionManager:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
-(void)navigationSessionManager:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(BOOL)arg8;
-(void)navigationSessionManager:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
-(void)navigationSessionManager:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;
-(void)navigationSessionManagerHideSecondaryStep:(id)arg1;
-(void)navigationSessionManagerBeginGuidanceUpdate:(id)arg1;
-(void)navigationSessionManagerEndGuidanceUpdate:(id)arg1;
-(void)navigationSessionManager:(id)arg1 updateSignsWithInfo:(id)arg2;
-(void)navigationSessionManager:(id)arg1 usePersistentDisplay:(BOOL)arg2;
-(void)navigationSessionManager:(id)arg1 showLaneDirections:(id)arg2;
-(void)navigationSessionManager:(id)arg1 hideLaneDirectionsForId:(id)arg2;
-(void)navigationSessionManager:(id)arg1 showJunctionView:(id)arg2;
-(void)navigationSessionManager:(id)arg1 hideJunctionViewForId:(id)arg2;
-(void)navigationSessionManager:(id)arg1 didEnableGuidancePrompts:(BOOL)arg2;
-(void)navigationSessionManager:(id)arg1 newGuidanceEventFeedback:(id)arg2;
-(void)navigationSessionManager:(id)arg1 updatedGuidanceEventFeedback:(id)arg2;
-(void)navigationSessionManager:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2;
-(void)navigationSessionManager:(id)arg1 didUpdateTrafficIncidentAlert:(id)arg2;
-(void)navigationSessionManager:(id)arg1 didInvalidateTrafficIncidentAlert:(id)arg2;
-(void)navigationSessionManager:(id)arg1 didStartSpeakingPrompt:(id)arg2;
-(void)navigationSessionManager:(id)arg1 didUpdateAudioSettings:(id)arg2;
-(void)navigationSessionManager:(id)arg1 didUpdateCurrentAudioSetting:(id)arg2;
-(void)navigationSessionManager:(id)arg1 didUpdateCurrentAudioSettingForVoicePrompt:(id)arg2;
-(void)navigationSessionManager:(id)arg1 didUpdateAudioRouteSelection:(unsigned long long)arg2;
-(void)navigationSessionManager:(id)arg1 didStartUsingVoiceLanguage:(id)arg2;
-(void)navigationSessionManager:(id)arg1 didChangeVolume:(unsigned long long)arg2;
-(void)navigationSessionManager:(id)arg1 triggerHaptics:(int)arg2;
-(void)navigationSessionManager:(id)arg1 didUpdateTracePlaybackDetails:(id)arg2;
-(void)navigationSessionManager:(id)arg1 willSendTransitUpdateRequestForRouteIDs:(id)arg2;
-(void)navigationSessionManager:(id)arg1 didReceiveTransitUpdates:(id)arg2;

@end

