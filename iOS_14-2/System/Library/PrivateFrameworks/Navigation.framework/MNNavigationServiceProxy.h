/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol MNNavigationServiceProxy <NSObject>
@required
-(void)pauseRealtimeUpdatesForSubscriber:(id)arg1;
-(void)repeatCurrentTrafficAlertWithReply:(/*^block*/id)arg1;
-(void)updateDestination:(id)arg1;
-(void)stopCurrentGuidancePrompt;
-(void)setIsConnectedToCarplay:(BOOL)arg1;
-(void)checkinForNavigationService:(/*^block*/id)arg1;
-(void)setGuidancePromptsEnabled:(BOOL)arg1;
-(void)repeatCurrentGuidanceWithReply:(/*^block*/id)arg1;
-(void)setRideIndex:(unsigned long long)arg1 forSegmentIndex:(unsigned long long)arg2;
-(void)startPredictingDestinationsWithHandler:(/*^block*/id)arg1;
-(void)interfaceHashesWithHandler:(/*^block*/id)arg1;
-(void)resumeOriginalDestination;
-(void)acceptReroute:(BOOL)arg1 forTrafficIncidentAlert:(id)arg2;
-(void)vibrateForPrompt:(unsigned long long)arg1 withReply:(/*^block*/id)arg2;
-(void)setFullGuidanceMode:(BOOL)arg1;
-(void)setCurrentAudioOutputSetting:(id)arg1;
-(void)resumeRealtimeUpdatesForSubscriber:(id)arg1;
-(void)switchToRoute:(id)arg1;
-(void)setTracePosition:(double)arg1;
-(void)setDisplayedStepIndex:(unsigned long long)arg1;
-(void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;
-(void)setTracePlaybackSpeed:(double)arg1;
-(void)stopNavigation;
-(void)startNavigationWithDetails:(id)arg1 activeBlock:(/*^block*/id)arg2;
-(void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;
-(void)setHFPPreference:(BOOL)arg1 forSetting:(id)arg2;
-(void)setTraceIsPlaying:(BOOL)arg1;
-(void)setHeadingOrientation:(int)arg1;
-(void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;
-(void)changeSettings:(id)arg1;
-(void)recordPedestrianTracePath:(id)arg1;
-(void)stopPredictingDestinations;

@end

