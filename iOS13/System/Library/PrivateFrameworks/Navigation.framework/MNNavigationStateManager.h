/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/MNNavigationStateInterface.h>

@protocol MNNavigationSessionManagerDelegate;
@class MNNavigationState, MNObserverHashTable, GEOApplicationAuditToken, NSString;

@interface MNNavigationStateManager : NSObject <MNNavigationStateInterface> {

	BOOL _isStarted;
	MNNavigationState* _currentState;
	MNObserverHashTable* _navigationStateObservers;
	GEOApplicationAuditToken* _auditToken;
	id<MNNavigationSessionManagerDelegate> _navigationDelegate;

}

@property (nonatomic,readonly) GEOApplicationAuditToken * auditToken;                                       //@synthesize auditToken=_auditToken - In the implementation block
@property (assign,nonatomic,__weak) id<MNNavigationSessionManagerDelegate> navigationDelegate;              //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (nonatomic,readonly) BOOL isStarted;                                                              //@synthesize isStarted=_isStarted - In the implementation block
@property (nonatomic,readonly) MNNavigationState * currentState;                                            //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,readonly) unsigned long long currentStateType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(GEOApplicationAuditToken *)auditToken;
-(BOOL)isStarted;
-(void)start;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)reset;
-(MNNavigationState *)currentState;
-(void)setHeadingOrientation:(int)arg1 ;
-(void)setCurrentState:(MNNavigationState *)arg1 ;
-(id)_initialState;
-(void)transitionToState:(id)arg1 ;
-(void)setGuidancePromptsEnabled:(BOOL)arg1 ;
-(void)setDisplayedStepIndex:(unsigned long long)arg1 ;
-(void)setIsConnectedToCarplay:(BOOL)arg1 ;
-(void)setNavigationDelegate:(id<MNNavigationSessionManagerDelegate>)arg1 ;
-(id<MNNavigationSessionManagerDelegate>)navigationDelegate;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(void)stopNavigation;
-(unsigned long long)currentStateType;
-(void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2 ;
-(void)startNavigationWithDetails:(id)arg1 activeBlock:(/*^block*/id)arg2 ;
-(void)startPredictingDestinationsWithHandler:(/*^block*/id)arg1 ;
-(void)stopPredictingDestinations;
-(void)updateDestination:(id)arg1 ;
-(void)resumeOriginalDestination;
-(void)switchToRoute:(id)arg1 ;
-(void)setFullGuidanceMode:(BOOL)arg1 ;
-(void)changeSettings:(id)arg1 ;
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
-(void)interfaceHashesWithHandler:(/*^block*/id)arg1 ;
-(void)updateGuidanceWithData:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)pauseRealtimeUpdatesForSubscriber:(id)arg1 ;
-(void)resumeRealtimeUpdatesForSubscriber:(id)arg1 ;
-(void)checkinForNavigationService:(/*^block*/id)arg1 ;
-(void)commuteSession:(id)arg1 didUpdateDestinations:(id)arg2 ;
-(void)commuteSessionDidArrive:(id)arg1 ;
-(void)_replayStateForNewObserver:(id)arg1 ;
-(id)navSessionDestination;
-(unsigned long long)_stateTypeForState:(id)arg1 ;
-(void)_changeToDesiredLocationProviderTypeForState:(id)arg1 ;
@end

