/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCurrentState:(MNNavigationState *)arg1 ;
-(void)pauseRealtimeUpdatesForSubscriber:(id)arg1 ;
-(void)repeatCurrentTrafficAlertWithReply:(/*^block*/id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)updateDestination:(id)arg1 ;
-(void)stopCurrentGuidancePrompt;
-(void)setIsConnectedToCarplay:(BOOL)arg1 ;
-(void)checkinForNavigationService:(/*^block*/id)arg1 ;
-(void)setGuidancePromptsEnabled:(BOOL)arg1 ;
-(void)repeatCurrentGuidanceWithReply:(/*^block*/id)arg1 ;
-(void)setRideIndex:(unsigned long long)arg1 forSegmentIndex:(unsigned long long)arg2 ;
-(id<MNNavigationSessionManagerDelegate>)navigationDelegate;
-(void)startPredictingDestinationsWithHandler:(/*^block*/id)arg1 ;
-(void)interfaceHashesWithHandler:(/*^block*/id)arg1 ;
-(void)resumeOriginalDestination;
-(void)acceptReroute:(BOOL)arg1 forTrafficIncidentAlert:(id)arg2 ;
-(void)vibrateForPrompt:(unsigned long long)arg1 withReply:(/*^block*/id)arg2 ;
-(id)init;
-(void)setFullGuidanceMode:(BOOL)arg1 ;
-(void)setCurrentAudioOutputSetting:(id)arg1 ;
-(MNNavigationState *)currentState;
-(void)_changeToDesiredLocationProviderTypeForState:(id)arg1 ;
-(BOOL)isStarted;
-(void)resumeRealtimeUpdatesForSubscriber:(id)arg1 ;
-(void)switchToRoute:(id)arg1 ;
-(void)start;
-(void)commuteSession:(id)arg1 didUpdateDestinations:(id)arg2 ;
-(void)setTracePosition:(double)arg1 ;
-(void)setDisplayedStepIndex:(unsigned long long)arg1 ;
-(void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1 ;
-(void)setTracePlaybackSpeed:(double)arg1 ;
-(void)stopNavigation;
-(void)startNavigationWithDetails:(id)arg1 activeBlock:(/*^block*/id)arg2 ;
-(void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2 ;
-(void)transitionToState:(id)arg1 ;
-(void)setHFPPreference:(BOOL)arg1 forSetting:(id)arg2 ;
-(void)setTraceIsPlaying:(BOOL)arg1 ;
-(id)navSessionDestination;
-(void)setHeadingOrientation:(int)arg1 ;
-(void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2 ;
-(void)changeSettings:(id)arg1 ;
-(void)recordPedestrianTracePath:(id)arg1 ;
-(void)stopPredictingDestinations;
-(GEOApplicationAuditToken *)auditToken;
-(id)_initialState;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(unsigned long long)_stateTypeForState:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_replayStateForNewObserver:(id)arg1 ;
-(void)reset;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)setNavigationDelegate:(id<MNNavigationSessionManagerDelegate>)arg1 ;
-(void)commuteSessionDidArrive:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)currentStateType;
@end

