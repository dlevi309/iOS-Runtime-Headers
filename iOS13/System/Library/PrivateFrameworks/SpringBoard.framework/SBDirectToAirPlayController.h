/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBMainDisplaySceneManagerObserver.h>
#import <libobjc.A.dylib/SBAVSystemControllerDirectToAirPlayObserver.h>
#import <libobjc.A.dylib/SBControlCenterObserver.h>

@class SBSStatusBarStyleOverridesAssertion, NSString, NSMutableDictionary, NSMutableSet, MPMediaControlsStatusBarStyleOverridesCoordinator, AVExternalPlaybackMonitor, AVRoutingSessionManager, AVRoutingSessionDestination, NSArray, _SBDirectToAirPlayPolicyState;

@interface SBDirectToAirPlayController : NSObject <SBMainDisplaySceneManagerObserver, SBAVSystemControllerDirectToAirPlayObserver, SBControlCenterObserver> {

	SBSStatusBarStyleOverridesAssertion* _directToAirPlayStatusBarStyleOverrideAssertion;
	NSString* _directToAirPlayStatusBarStyleOverrideAssertionCorrespondingBundleID;
	NSMutableDictionary* _directToAirPlayPlayingBundleIDsToRouteNames;
	NSMutableDictionary* _directToAirPlayReadyBundleIDsToRouteNames;
	NSMutableSet* _directToAirPlayIneligibleBundleIDs;
	NSMutableSet* _directToAirPlayEligibleBundleIDs;
	BOOL _controlCenterReportsItselfAsPresented;
	BOOL _currentRoutingSessionEstablishedAutomaticallyFromLikelyDestination;
	BOOL _externalPlaybackIsActive;
	BOOL _externalPlaybackIsPlaying;
	MPMediaControlsStatusBarStyleOverridesCoordinator* _mediaControlsCoordinator;
	AVExternalPlaybackMonitor* _externalPlaybackMonitor;
	AVRoutingSessionManager* _routingSessionManager;
	AVRoutingSessionDestination* _currentRoutingSessionDestination;
	NSArray* _likelyExternalPlaybackDestinations;
	_SBDirectToAirPlayPolicyState* _currentState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)directToAirPlayIsAvailable;
+(BOOL)_mediaControllerSaysWeHaveAWiredRoute;
-(id)init;
-(void)controlCenterWillPresent;
-(void)controlCenterDidDismiss;
-(void)sceneManager:(id)arg1 didAddExternalForegroundApplicationSceneHandle:(id)arg2 ;
-(void)sceneManager:(id)arg1 didRemoveExternalForegroundApplicationSceneHandle:(id)arg2 ;
-(void)externalAirPlayVideoActiveDidChange:(id)arg1 ;
-(void)externalAirPlayVideoPlayingDidChange:(id)arg1 ;
-(void)currentExternalDestinationDidChange:(id)arg1 ;
-(void)likelyExternalDestinationsDidChange:(id)arg1 ;
-(void)lockStateChanged:(id)arg1 ;
-(void)externalDisplayChanged:(id)arg1 ;
-(void)_main_evaluatePolicyForDirectToAirplayAlert;
-(void)_updateRouteNamesForPlayingAndReadyApps;
-(void)_evaluatePolicyForDirectToAirplayAlert;
-(id)_currentExternalRouteNames;
-(id)_captureCurrentPolicyState;
-(void)_acquireDirectToAirPlayStatusBarStyleOverrideForApplicationWithBundleID:(id)arg1 playing:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_rollBannerActionForReadyBundleID:(id)arg1 sceneHandle:(id)arg2 ;
-(void)_clearDirectToAirPlayStatusBarAssertion;
-(id)_externalRouteNamesForDestination:(id)arg1 ;
-(void)_evaluateDirectToAirPlayImplicationsOfAppBecomingForeground:(id)arg1 ;
-(void)_evaluateDirectToAirPlayImplicationsOfAppBecomingBackground:(id)arg1 ;
@end

