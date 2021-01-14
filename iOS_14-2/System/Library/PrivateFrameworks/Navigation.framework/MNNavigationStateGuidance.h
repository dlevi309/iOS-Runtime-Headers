/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/MNNavigationState.h>

@class MNNavigationSessionManager, MNStartNavigationDetails;

@interface MNNavigationStateGuidance : MNNavigationState {

	MNNavigationSessionManager* _navigationSessionManager;
	MNStartNavigationDetails* _startDetails;

}
+(id)guidanceStateForStartDetails:(id)arg1 stateManager:(id)arg2 navigationSessionManager:(id)arg3 ;
-(void)pauseRealtimeUpdatesForSubscriber:(id)arg1 ;
-(void)repeatCurrentTrafficAlertWithReply:(/*^block*/id)arg1 ;
-(void)updateDestination:(id)arg1 ;
-(void)stopCurrentGuidancePrompt;
-(void)setIsConnectedToCarplay:(BOOL)arg1 ;
-(void)repeatCurrentGuidanceWithReply:(/*^block*/id)arg1 ;
-(void)setRideIndex:(unsigned long long)arg1 forSegmentIndex:(unsigned long long)arg2 ;
-(void)resumeOriginalDestination;
-(unsigned long long)desiredLocationProviderType;
-(void)acceptReroute:(BOOL)arg1 forTrafficIncidentAlert:(id)arg2 ;
-(void)vibrateForPrompt:(unsigned long long)arg1 withReply:(/*^block*/id)arg2 ;
-(void)setCurrentAudioOutputSetting:(id)arg1 ;
-(void)enterState;
-(void)resumeRealtimeUpdatesForSubscriber:(id)arg1 ;
-(void)switchToRoute:(id)arg1 ;
-(void)setTracePosition:(double)arg1 ;
-(void)setDisplayedStepIndex:(unsigned long long)arg1 ;
-(void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1 ;
-(void)setTracePlaybackSpeed:(double)arg1 ;
-(void)stopNavigation;
-(void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2 ;
-(void)setHFPPreference:(BOOL)arg1 forSetting:(id)arg2 ;
-(void)setTraceIsPlaying:(BOOL)arg1 ;
-(void)recordPedestrianTracePath:(id)arg1 ;
-(id)traceManager;
-(id)initWithStateManager:(id)arg1 navigationSessionManager:(id)arg2 startDetails:(id)arg3 ;
-(id)simulationLocationProvider;
-(void)leaveState;
-(id)currentDestination;
-(BOOL)requiresHighMemoryThreshold;
-(id)clParameters;
-(BOOL)shouldClearStoredRoutes;
-(void)preEnterState;
@end

