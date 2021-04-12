/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)applicationCanBeConsideredNowPlaying:(id)arg1 ;
+(void)sendResetPlaybackTimeoutCommand;
-(void)setNowPlayingInfo:(id)arg1 ;
-(int)nowPlayingProcessPID;
-(void)_registerForNotifications;
-(void)cache:(id)arg1 didUpdateAirplayDisplayActive:(BOOL)arg2 ;
-(BOOL)isPlaying;
-(void)_authenticationStateChanged:(id)arg1 ;
-(BOOL)changeTrack:(int)arg1 eventSource:(long long)arg2 ;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(id)_nowPlayingInfo;
-(BOOL)addTrackToWishListForEventSource:(long long)arg1 ;
-(void)_updateDisplayMonitorState;
-(id)init;
-(void)_unregisterForNotifications;
-(void)_nowPlayingAppDidExit:(id)arg1 ;
-(BOOL)setPlaybackSpeed:(int)arg1 eventSource:(long long)arg2 ;
-(BOOL)banTrackForEventSource:(long long)arg1 ;
-(void)setNowPlayingProcessPID:(int)arg1 ;
-(void)_updateLastRecentActivityDate;
-(BOOL)pauseForEventSource:(long long)arg1 ;
-(NSDate *)lastActivityDate;
-(BOOL)suppressHUD;
-(void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2 ;
-(void)_setNowPlayingApplication:(id)arg1 ;
-(void)_startVideoOutStatusBarStyleOverride;
-(void)updateScreenSharingStatusBarStyleOverride;
-(void)_mediaRemoteNowPlayingApplicationIsPlayingDidChange:(id)arg1 ;
-(BOOL)togglePlayPauseForEventSource:(long long)arg1 ;
-(BOOL)handsetRouteIsSelected;
-(BOOL)playForEventSource:(long long)arg1 ;
-(void)_applicationActivityStatusDidChange:(id)arg1 ;
-(BOOL)hasTrack;
-(void)_updateScreenSharingStatusBarStyleOverrideSuppressionPreference:(id)arg1 ;
-(BOOL)isApplicationActivityActive;
-(SBApplication *)nowPlayingApplication;
-(void)_updateAVRoutes;
-(BOOL)stopForEventSource:(long long)arg1 ;
-(void)_notifyThatScreenSharingChanged;
-(void)_mediaRemoteNowPlayingInfoDidChange:(id)arg1 ;
-(id)nameOfPickedRoute;
-(void)cancelVolumeEvent;
-(BOOL)_sendMediaCommand:(unsigned)arg1 options:(id)arg2 ;
-(BOOL)likeTrackForEventSource:(long long)arg1 ;
-(BOOL)wirelessDisplayRouteIsPicked;
-(void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3 ;
-(void)_clearVideoOutStatusBarStyleOverride;
-(void)_clearScreenSharingStatusBarStyleOverride;
-(BOOL)_displayMonitorHasAConnectedExternalIdentity;
-(BOOL)beginSeek:(int)arg1 eventSource:(long long)arg2 ;
-(BOOL)isLastTrack;
-(BOOL)endSeek:(int)arg1 eventSource:(long long)arg2 ;
-(BOOL)isFirstTrack;
-(BOOL)toggleShuffleForEventSource:(long long)arg1 ;
-(BOOL)toggleRepeatForEventSource:(long long)arg1 ;
-(BOOL)routeOtherThanHandsetIsAvailable;
-(void)setSuppressHUD:(BOOL)arg1 ;
-(void)_mediaRemoteNowPlayingApplicationDidChange:(id)arg1 ;
-(BOOL)volumeControlIsAvailable;
-(BOOL)isScreenSharing;
-(BOOL)isPaused;
-(void)cacheDidRebuildAfterServerDeath:(id)arg1 ;
-(void)dealloc;
@end

