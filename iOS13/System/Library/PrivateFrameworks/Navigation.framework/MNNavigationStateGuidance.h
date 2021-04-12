/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/MNNavigationState.h>

@class MNNavigationSessionManager, MNStartNavigationDetails;

@interface MNNavigationStateGuidance : MNNavigationState {

	MNNavigationSessionManager* _navigationSessionManager;
	MNStartNavigationDetails* _startDetails;

}
+(id)guidanceStateForStartDetails:(id)arg1 stateManager:(id)arg2 navigationSessionManager:(id)arg3 ;
-(void)enterState;
-(void)setDisplayedStepIndex:(unsigned long long)arg1 ;
-(void)setIsConnectedToCarplay:(BOOL)arg1 ;
-(id)currentDestination;
-(void)stopNavigation;
-(void)updateDestination:(id)arg1 ;
-(void)resumeOriginalDestination;
-(void)switchToRoute:(id)arg1 ;
-(void)repeatCurrentGuidanceWithReply:(/*^block*/id)arg1 ;
-(void)repeatCurrentTrafficAlertWithReply:(/*^block*/id)arg1 ;
-(void)vibrateForPrompt:(unsigned long long)arg1 withReply:(/*^block*/id)arg2 ;
-(void)stopCurrentGuidancePrompt;
-(void)setHFPPreference:(BOOL)arg1 forSetting:(id)arg2 ;
-(void)setCurrentAudioOutputSetting:(id)arg1 ;
-(void)setRideIndex:(unsigned long long)arg1 forLegIndex:(unsigned long long)arg2 ;
-(void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2 ;
-(void)acceptReroute:(BOOL)arg1 forTrafficIncidentAlert:(id)arg2 ;
-(void)setTraceIsPlaying:(BOOL)arg1 ;
-(void)setTracePlaybackSpeed:(double)arg1 ;
-(void)setTracePosition:(double)arg1 ;
-(void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1 ;
-(void)recordPedestrianTracePath:(id)arg1 ;
-(void)updateGuidanceWithData:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)pauseRealtimeUpdatesForSubscriber:(id)arg1 ;
-(void)resumeRealtimeUpdatesForSubscriber:(id)arg1 ;
-(id)traceManager;
-(id)initWithStateManager:(id)arg1 navigationSessionManager:(id)arg2 startDetails:(id)arg3 ;
-(void)leaveState;
-(BOOL)requiresHighMemoryThreshold;
-(unsigned long long)desiredLocationProviderType;
-(BOOL)shouldClearStoredRoutes;
-(void)preEnterState;
@end

