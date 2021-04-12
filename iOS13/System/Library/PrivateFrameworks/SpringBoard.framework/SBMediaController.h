/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/MPAVRoutingControllerDelegate.h>
#import <libobjc.A.dylib/FBSDisplayObserving.h>
#import <libobjc.A.dylib/SBAVSystemControllerCacheObserver.h>

@class NSDictionary, NSTimer, SBApplication, MPAVRoutingController, SBAVSystemControllerCache, SBVolumeControl, NSNumber, NSDate, SBSStatusBarStyleOverridesAssertion, SBDirectToAirPlayController, NSString;

@interface SBMediaController : NSObject <MPAVRoutingControllerDelegate, FBSDisplayObserving, SBAVSystemControllerCacheObserver> {

	int _manualVolumeChangeCount;
	NSDictionary* _nowPlayingInfo;
	float _pendingVolumeChange;
	NSTimer* _volumeCommitTimer;
	BOOL _debounceVolumeRepeat;
	int _numberOfVolumeDecreasesSinceDownButtonDown;
	SBApplication* _lastNowPlayingApplication;
	BOOL _lastNowPlayingAppIsPlaying;
	int _lastMediaRemoteAppActivityStatus;
	BOOL _suppressHUD;
	BOOL _screenSharingViaAVSystemController;
	BOOL _screenSharingViaDisplayMonitor;
	BOOL _screenSharingSetsStatusBarOverride;
	NSTimer* _screenSharingStatusBarOverrideTimer;
	NSTimer* _videoOutStatusBarOverrideTimer;
	MPAVRoutingController* _routingController;
	SBAVSystemControllerCache* _avCache;
	SBVolumeControl* _volumeControl;
	NSNumber* _audioCategoryMusicVolume;
	NSDate* _lastActivityDate;
	SBSStatusBarStyleOverridesAssertion* _screenSharingStatusBarStyleOverrideAssertion;
	SBSStatusBarStyleOverridesAssertion* _videoOutStatusBarStyleOverrideAssertion;
	SBDirectToAirPlayController* _directToAirPlayController;
	IONotificationPortRef _arubaDisplayPortNotificationPort;
	int _nowPlayingProcessPID;

}

@property (assign,nonatomic) int nowPlayingProcessPID;                                    //@synthesize nowPlayingProcessPID=_nowPlayingProcessPID - In the implementation block
@property (nonatomic,__weak,readonly) SBApplication * nowPlayingApplication; 
@property (nonatomic,readonly) NSDate * lastActivityDate; 
@property (assign) BOOL suppressHUD; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)sendResetPlaybackTimeoutCommand;
+(BOOL)applicationCanBeConsideredNowPlaying:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isPaused;
-(BOOL)isPlaying;
-(void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3 ;
-(void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2 ;
-(void)_registerForNotifications;
-(void)_unregisterForNotifications;
-(NSDate *)lastActivityDate;
-(id)_nowPlayingInfo;
-(void)setNowPlayingInfo:(id)arg1 ;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(BOOL)volumeControlIsAvailable;
-(BOOL)wirelessDisplayRouteIsPicked;
-(void)cancelVolumeEvent;
-(void)_authenticationStateChanged:(id)arg1 ;
-(BOOL)endSeek:(int)arg1 eventSource:(long long)arg2 ;
-(BOOL)changeTrack:(int)arg1 eventSource:(long long)arg2 ;
-(BOOL)togglePlayPauseForEventSource:(long long)arg1 ;
-(BOOL)playForEventSource:(long long)arg1 ;
-(BOOL)pauseForEventSource:(long long)arg1 ;
-(BOOL)toggleRepeatForEventSource:(long long)arg1 ;
-(BOOL)toggleShuffleForEventSource:(long long)arg1 ;
-(BOOL)setPlaybackSpeed:(int)arg1 eventSource:(long long)arg2 ;
-(BOOL)likeTrackForEventSource:(long long)arg1 ;
-(BOOL)banTrackForEventSource:(long long)arg1 ;
-(BOOL)addTrackToWishListForEventSource:(long long)arg1 ;
-(BOOL)beginSeek:(int)arg1 eventSource:(long long)arg2 ;
-(int)nowPlayingProcessPID;
-(void)setNowPlayingProcessPID:(int)arg1 ;
-(void)cacheDidRebuildAfterServerDeath:(id)arg1 ;
-(void)cache:(id)arg1 didUpdateAirplayDisplayActive:(BOOL)arg2 ;
-(SBApplication *)nowPlayingApplication;
-(void)_updateAVRoutes;
-(void)_updateScreenSharingStatusBarStyleOverrideSuppressionPreference:(id)arg1 ;
-(void)_clearScreenSharingStatusBarStyleOverride;
-(void)_clearVideoOutStatusBarStyleOverride;
-(BOOL)_sendMediaCommand:(unsigned)arg1 options:(id)arg2 ;
-(BOOL)isScreenSharing;
-(void)updateScreenSharingStatusBarStyleOverride;
-(void)_notifyThatScreenSharingChanged;
-(BOOL)_displayMonitorHasAConnectedExternalIdentity;
-(void)_setNowPlayingApplication:(id)arg1 ;
-(void)_nowPlayingAppDidExit:(id)arg1 ;
-(void)_updateLastRecentActivityDate;
-(void)_updateDisplayMonitorState;
-(BOOL)hasTrack;
-(BOOL)isFirstTrack;
-(BOOL)isLastTrack;
-(BOOL)isApplicationActivityActive;
-(BOOL)suppressHUD;
-(void)setSuppressHUD:(BOOL)arg1 ;
-(void)_startVideoOutStatusBarStyleOverride;
-(BOOL)stopForEventSource:(long long)arg1 ;
-(BOOL)handsetRouteIsSelected;
-(BOOL)routeOtherThanHandsetIsAvailable;
-(id)nameOfPickedRoute;
-(void)_mediaRemoteNowPlayingInfoDidChange:(id)arg1 ;
-(void)_mediaRemoteNowPlayingApplicationDidChange:(id)arg1 ;
-(void)_mediaRemoteNowPlayingApplicationIsPlayingDidChange:(id)arg1 ;
-(void)_applicationActivityStatusDidChange:(id)arg1 ;
@end

