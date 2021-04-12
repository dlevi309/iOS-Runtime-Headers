/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol MNNavigationServiceProxy <NSObject>
@required
-(void)setHeadingOrientation:(int)arg1;
-(void)setGuidancePromptsEnabled:(BOOL)arg1;
-(void)setDisplayedStepIndex:(unsigned long long)arg1;
-(void)setIsConnectedToCarplay:(BOOL)arg1;
-(void)stopNavigation;
-(void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;
-(void)startNavigationWithDetails:(id)arg1 activeBlock:(/*^block*/id)arg2;
-(void)startPredictingDestinationsWithHandler:(/*^block*/id)arg1;
-(void)stopPredictingDestinations;
-(void)updateDestination:(id)arg1;
-(void)resumeOriginalDestination;
-(void)switchToRoute:(id)arg1;
-(void)setFullGuidanceMode:(BOOL)arg1;
-(void)changeSettings:(id)arg1;
-(void)repeatCurrentGuidanceWithReply:(/*^block*/id)arg1;
-(void)repeatCurrentTrafficAlertWithReply:(/*^block*/id)arg1;
-(void)vibrateForPrompt:(unsigned long long)arg1 withReply:(/*^block*/id)arg2;
-(void)stopCurrentGuidancePrompt;
-(void)setHFPPreference:(BOOL)arg1 forSetting:(id)arg2;
-(void)setCurrentAudioOutputSetting:(id)arg1;
-(void)setRideIndex:(unsigned long long)arg1 forLegIndex:(unsigned long long)arg2;
-(void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;
-(void)acceptReroute:(BOOL)arg1 forTrafficIncidentAlert:(id)arg2;
-(void)setTraceIsPlaying:(BOOL)arg1;
-(void)setTracePlaybackSpeed:(double)arg1;
-(void)setTracePosition:(double)arg1;
-(void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;
-(void)recordPedestrianTracePath:(id)arg1;
-(void)interfaceHashesWithHandler:(/*^block*/id)arg1;
-(void)updateGuidanceWithData:(id)arg1 reply:(/*^block*/id)arg2;
-(void)pauseRealtimeUpdatesForSubscriber:(id)arg1;
-(void)resumeRealtimeUpdatesForSubscriber:(id)arg1;
-(void)checkinForNavigationService:(/*^block*/id)arg1;

@end

