/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/MPNowPlayingPlaybackQueueDataSourcePrivate.h>
#import <libobjc.A.dylib/MPCPlaybackEngineEventObserving.h>

@class MPLibraryAddStatusObserver, NSString, NSArray, NSUserDefaults, MPCPlaybackEngine, MPNowPlayingInfoCenter, MPRemoteCommandCenter, MPCPlayerPath;

@interface _MPCMediaRemotePublisher : NSObject <MPNowPlayingPlaybackQueueDataSourcePrivate, MPCPlaybackEngineEventObserving> {

	MPLibraryAddStatusObserver* _libraryAddStatusObserver;
	NSString* _lastContextID;
	NSArray* _accounts;
	BOOL _activeAccountAllowsSubscriptionPlayback;
	NSString* _activeAccountStoreFrontIdentifier;
	NSUserDefaults* _ipodDefaults;
	BOOL _hasBeganFastForward;
	BOOL _hasBeganRewind;
	BOOL _initializedSupportedCommands;
	BOOL _engineRestoringState;
	BOOL _mediaServerAvailable;
	MPCPlaybackEngine* _playbackEngine;
	MPNowPlayingInfoCenter* _infoCenter;
	MPRemoteCommandCenter* _commandCenter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=hasInitializedSupportedCommands,nonatomic) BOOL initializedSupportedCommands;              //@synthesize initializedSupportedCommands=_initializedSupportedCommands - In the implementation block
@property (assign,getter=isEngineRestoringState,nonatomic) BOOL engineRestoringState;                               //@synthesize engineRestoringState=_engineRestoringState - In the implementation block
@property (assign,getter=isMediaServerAvailable,nonatomic) BOOL mediaServerAvailable;                               //@synthesize mediaServerAvailable=_mediaServerAvailable - In the implementation block
@property (nonatomic,readonly) MPCPlayerPath * playerPath; 
@property (nonatomic,__weak,readonly) MPCPlaybackEngine * playbackEngine;                                           //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (nonatomic,readonly) MPNowPlayingInfoCenter * infoCenter;                                                 //@synthesize infoCenter=_infoCenter - In the implementation block
@property (nonatomic,readonly) MPRemoteCommandCenter * commandCenter;                                               //@synthesize commandCenter=_commandCenter - In the implementation block
-(void)engine:(id)arg1 didChangeRepeatType:(long long)arg2 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)setInitializedSupportedCommands:(BOOL)arg1 ;
-(id)initWithPlaybackEngine:(id)arg1 ;
-(id)nowPlayingInfoCenter:(id)arg1 artworkCatalogForContentItem:(id)arg2 ;
-(void)nowPlayingInfoCenter:(id)arg1 getTransportablePlaybackSessionRepresentationForRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)engineDidLoseMediaServices:(id)arg1 ;
-(void)nowPlayingInfoCenter:(id)arg1 willBeginSessionMigrationWithIdentifier:(id)arg2 ;
-(BOOL)hasInitializedSupportedCommands;
-(void)engineWillBeginStateRestoration:(id)arg1 ;
-(void)_enqueueFallbackIntentIfNeededForCommandEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)engine:(id)arg1 didChangeAccounts:(id)arg2 ;
-(void)setEngineRestoringState:(BOOL)arg1 ;
-(void)_updateSupportedCommands;
-(void)nowPlayingInfoCenter:(id)arg1 didEndMigrationWithIdentifier:(id)arg2 error:(id)arg3 ;
-(void)becomeActive;
-(void)_durationAvailableNotification:(id)arg1 ;
-(void)engineDidEndStateRestoration:(id)arg1 ;
-(id)_supportedSessionTypes;
-(MPNowPlayingInfoCenter *)infoCenter;
-(BOOL)isMediaServerAvailable;
-(void)engine:(id)arg1 didChangeToState:(unsigned long long)arg2 ;
-(id)nowPlayingInfoCenter:(id)arg1 contentItemIDsFromOffset:(long long)arg2 toOffset:(long long)arg3 nowPlayingIndex:(long long*)arg4 ;
-(void)_likedStateChangedNotification:(id)arg1 ;
-(void)_disableQueueModificationsChangedNotification:(id)arg1 ;
-(BOOL)_playbackStateIsIdle:(long long)arg1 ;
-(void)nowPlayingInfoCenter:(id)arg1 didBeginLyricsEvent:(id)arg2 ;
-(id)nowPlayingInfoCenter:(id)arg1 artworkForContentItem:(id)arg2 size:(CGSize)arg3 completion:(/*^block*/id)arg4 ;
-(void)setMediaServerAvailable:(BOOL)arg1 ;
-(MPCPlayerPath *)playerPath;
-(void)_updateLaunchCommands;
-(void)_becomeActiveIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(id)playbackQueueIdentifierForNowPlayingInfoCenter:(id)arg1 ;
-(BOOL)isEngineRestoringState;
-(id)_exportableSessionTypes;
-(void)getShouldRestoreStateWithCompletion:(/*^block*/id)arg1 ;
-(void)engine:(id)arg1 didChangeQueueWithReason:(id)arg2 ;
-(MPRemoteCommandCenter *)commandCenter;
-(void)engineDidResetMediaServices:(id)arg1 ;
-(void)nowPlayingInfoCenter:(id)arg1 didEndLyricsEvent:(id)arg2 ;
-(void)reportUserBackgroundedApplication;
-(void)engine:(id)arg1 didChangeActionAtQueueEnd:(long long)arg2 ;
-(MPCPlaybackEngine *)playbackEngine;
-(id)nowPlayingInfoCenter:(id)arg1 contentItemIDForOffset:(long long)arg2 ;
-(id)nowPlayingInfoCenter:(id)arg1 lyricsForContentItem:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)nowPlayingInfoCenter:(id)arg1 contentItemForID:(id)arg2 ;
-(void)engine:(id)arg1 didChangeShuffleType:(long long)arg2 ;
-(void)engine:(id)arg1 didChangeToItem:(id)arg2 ;
-(void)_performCommandEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)publishIfNeeded;
@end

