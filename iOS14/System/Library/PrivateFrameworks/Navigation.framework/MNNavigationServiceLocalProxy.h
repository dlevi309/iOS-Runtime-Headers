/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/MNNavigationStateObserver.h>
#import <libobjc.A.dylib/MNNavigationSessionManagerDelegate.h>
#import <libobjc.A.dylib/MNNavigationServiceProxy.h>

@protocol MNNavigationServiceClientInterface;
@class NSString;

@interface MNNavigationServiceLocalProxy : NSObject <MNNavigationStateObserver, MNNavigationSessionManagerDelegate, MNNavigationServiceProxy> {

	id<MNNavigationServiceClientInterface> _delegate;
	unsigned long long _navigationServiceState;
	/*^block*/id _navigationServiceActiveBlock;
	/*^block*/id _navigationServiceActivePredictingBlock;

}

@property (assign,nonatomic,__weak) id<MNNavigationServiceClientInterface> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)pauseRealtimeUpdatesForSubscriber:(id)arg1 ;
-(void)navigationSessionManager:(id)arg1 updatedGuidanceEventFeedback:(id)arg2 ;
-(void)repeatCurrentTrafficAlertWithReply:(/*^block*/id)arg1 ;
-(void)updateDestination:(id)arg1 ;
-(void)stopCurrentGuidancePrompt;
-(void)navigationSessionManager:(id)arg1 willStartNavigationWithRoute:(id)arg2 navigationType:(int)arg3 request:(id)arg4 response:(id)arg5 ;
-(void)stateManager:(id)arg1 didUpdatePossibleDestinations:(id)arg2 ;
-(void)setIsConnectedToCarplay:(BOOL)arg1 ;
-(void)checkinForNavigationService:(/*^block*/id)arg1 ;
-(void)setGuidancePromptsEnabled:(BOOL)arg1 ;
-(void)repeatCurrentGuidanceWithReply:(/*^block*/id)arg1 ;
-(void)setRideIndex:(unsigned long long)arg1 forSegmentIndex:(unsigned long long)arg2 ;
-(void)startPredictingDestinationsWithHandler:(/*^block*/id)arg1 ;
-(void)interfaceHashesWithHandler:(/*^block*/id)arg1 ;
-(void)navigationSessionManagerDidCancelReroute:(id)arg1 ;
-(void)resumeOriginalDestination;
-(void)acceptReroute:(BOOL)arg1 forTrafficIncidentAlert:(id)arg2 ;
-(void)navigationSessionManagerDidEnterPreArrivalState:(id)arg1 ;
-(void)vibrateForPrompt:(unsigned long long)arg1 withReply:(/*^block*/id)arg2 ;
-(id)init;
-(void)navigationSessionManager:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3 ;
-(void)setFullGuidanceMode:(BOOL)arg1 ;
-(void)setCurrentAudioOutputSetting:(id)arg1 ;
-(void)navigationSessionManager:(id)arg1 showLaneDirections:(id)arg2 ;
-(void)navigationSessionManagerWillResumeFromPause:(id)arg1 ;
-(void)navigationSessionManagerShouldEnd:(id)arg1 ;
-(id<MNNavigationServiceClientInterface>)delegate;
-(void)navigationSessionManagerWillReroute:(id)arg1 ;
-(void)resumeRealtimeUpdatesForSubscriber:(id)arg1 ;
-(void)switchToRoute:(id)arg1 ;
-(void)start;
-(void)navigationSessionManagerEndGuidanceUpdate:(id)arg1 ;
-(void)navigationSessionManager:(id)arg1 didUpdateCurrentAudioSetting:(id)arg2 ;
-(void)setTracePosition:(double)arg1 ;
-(void)setDisplayedStepIndex:(unsigned long long)arg1 ;
-(void)navigationSessionManager:(id)arg1 hideLaneDirectionsForId:(id)arg2 ;
-(void)navigationSessionManager:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned long long)arg4 ;
-(void)navigationSessionManager:(id)arg1 didUpdateTracePlaybackDetails:(id)arg2 ;
-(void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1 ;
-(void)setTracePlaybackSpeed:(double)arg1 ;
-(void)stopNavigation;
-(void)startNavigationWithDetails:(id)arg1 activeBlock:(/*^block*/id)arg2 ;
-(void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2 ;
-(void)setHFPPreference:(BOOL)arg1 forSetting:(id)arg2 ;
-(void)setTraceIsPlaying:(BOOL)arg1 ;
-(void)stateManager:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(void)setHeadingOrientation:(int)arg1 ;
-(void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2 ;
-(void)navigationSessionManager:(id)arg1 didReceiveTransitUpdates:(id)arg2 ;
-(void)navigationSessionManager:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 ;
-(void)changeSettings:(id)arg1 ;
-(void)recordPedestrianTracePath:(id)arg1 ;
-(void)stopPredictingDestinations;
-(void)navigationSessionManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)navigationSessionManager:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(BOOL)arg8 ;
-(void)navigationSessionManager:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilSign:(double)arg3 timeUntilSign:(double)arg4 ;
-(void)navigationSessionManager:(id)arg1 usePersistentDisplay:(BOOL)arg2 ;
-(void)setDelegate:(id<MNNavigationServiceClientInterface>)arg1 ;
-(void)navigationSessionManager:(id)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3 ;
-(void)navigationSessionManager:(id)arg1 didUpdateLocation:(id)arg2 ;
-(void)navigationSessionManagerBeginGuidanceUpdate:(id)arg1 ;
-(void)navigationSessionManager:(id)arg1 newGuidanceEventFeedback:(id)arg2 ;
-(void)navigationSessionManager:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2 ;
-(void)navigationSessionManager:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2 ;
-(void)navigationSessionManagerHideSecondaryStep:(id)arg1 ;
-(void)navigationSessionManager:(id)arg1 willProcessSpeechEvent:(id)arg2 ;
-(void)navigationSessionManager:(id)arg1 didEnterPreArrivalStateForWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3 ;
-(void)navigationSessionManager:(id)arg1 didProcessSpeechEvent:(id)arg2 ;
-(void)reset;
-(void)navigationSessionManager:(id)arg1 didUpdateAlternateRoutes:(id)arg2 ;
-(void)navigationSessionManager:(id)arg1 didEnableGuidancePrompts:(BOOL)arg2 ;
-(void)navigationSessionManager:(id)arg1 didUpdateMotionType:(unsigned long long)arg2 confidence:(unsigned long long)arg3 ;
-(void)navigationSessionManager:(id)arg1 didUpdateCurrentAudioSettingForVoicePrompt:(id)arg2 ;
-(void)navigationSessionManager:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3 ;
-(void)navigationSessionManager:(id)arg1 didUpdateAudioRouteSelection:(unsigned long long)arg2 ;
-(void)navigationSessionManager:(id)arg1 didChangeNavigationState:(int)arg2 ;
-(void)navigationSessionManager:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3 ;
-(void)navigationSessionManager:(id)arg1 showJunctionView:(id)arg2 ;
-(void)navigationSessionManager:(id)arg1 triggerHaptics:(int)arg2 ;
-(void)navigationSessionManager:(id)arg1 didUpdateETAResponseForRoute:(id)arg2 ;
-(void)navigationSessionManager:(id)arg1 didStartSpeakingPrompt:(id)arg2 ;
-(void)navigationSessionManager:(id)arg1 didRerouteWithRoute:(id)arg2 location:(id)arg3 withAlternateRoutes:(id)arg4 ;
-(void)navigationSessionManagerDidArrive:(id)arg1 ;
-(void)stateManager:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(void)navigationSessionManager:(id)arg1 willSendTransitUpdateRequestForRouteIDs:(id)arg2 ;
-(void)navigationSessionManagerWillPause:(id)arg1 ;
-(void)navigationSessionManager:(id)arg1 updateSignsWithInfo:(id)arg2 ;
-(void)navigationSessionManager:(id)arg1 didUpdateAudioSettings:(id)arg2 ;
-(void)navigationSessionManager:(id)arg1 didUpdateDisplayETA:(id)arg2 remainingDistance:(id)arg3 ;
-(void)navigationSessionManager:(id)arg1 didChangeVolume:(unsigned long long)arg2 ;
-(unsigned long long)_serviceStateForStateType:(unsigned long long)arg1 ;
-(void)navigationSessionManager:(id)arg1 didUpdateRouteWithNewRideSelection:(id)arg2 ;
-(void)navigationSessionManager:(id)arg1 didUpdatePreviewRoutes:(id)arg2 withSelectedRouteIndex:(unsigned long long)arg3 ;
-(void)navigationSessionManager:(id)arg1 didUpdateStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3 ;
-(void)navigationSessionManager:(id)arg1 didResumeNavigatingFromWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3 ;
-(void)navigationSessionManager:(id)arg1 didUpdateTrafficIncidentAlert:(id)arg2 ;
-(void)stateManagerPredictingDidArrive:(id)arg1 ;
-(void)navigationSessionManager:(id)arg1 hideJunctionViewForId:(id)arg2 ;
-(void)navigationSessionManager:(id)arg1 didFailRerouteWithError:(id)arg2 ;
-(void)dealloc;
-(void)navigationSessionManager:(id)arg1 didStartUsingVoiceLanguage:(id)arg2 ;
-(void)navigationSessionManager:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4 ;
-(void)navigationSessionManager:(id)arg1 didInvalidateTrafficIncidentAlert:(id)arg2 ;
@end

