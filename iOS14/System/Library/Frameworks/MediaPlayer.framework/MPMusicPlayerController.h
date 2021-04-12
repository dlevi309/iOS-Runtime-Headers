/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPArtworkDataSource.h>
#import <libobjc.A.dylib/MPVolumeControllerDelegate.h>
#import <libobjc.A.dylib/MPMusicPlayerControllerClient.h>
#import <libobjc.A.dylib/MPMediaPlayback.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSString, MPMusicPlayerControllerNowPlaying, MPMusicPlayerControllerNowPlayingTimeSnapshot, MPMusicPlayerQueueDescriptor, MPVolumeController, NSObject, MPMediaItem;

@interface MPMusicPlayerController : NSObject <MPArtworkDataSource, MPVolumeControllerDelegate, MPMusicPlayerControllerClient, MPMediaPlayback> {

	NSXPCConnection* _connection;
	os_unfair_lock_s _lock;
	BOOL _isPreparedToPlay;
	NSString* _clientIdentifier;
	MPMusicPlayerControllerNowPlaying* _serverNowPlaying;
	MPMusicPlayerControllerNowPlayingTimeSnapshot* _serverTimeSnapshot;
	MPMusicPlayerQueueDescriptor* _serverQueueDescriptor;
	MPMusicPlayerControllerNowPlayingTimeSnapshot* _lastServerTimeSnapshot;
	MPMusicPlayerControllerNowPlaying* _lastServerNowPlaying;
	MPMusicPlayerQueueDescriptor* _targetQueueDescriptor;
	long long _notificationsCounter;
	MPVolumeController* _volumeController;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy,readonly) NSString * clientIdentifier;                                                    //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * connection;                                                        //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) MPMusicPlayerControllerNowPlaying * serverNowPlaying;                                //@synthesize serverNowPlaying=_serverNowPlaying - In the implementation block
@property (nonatomic,readonly) MPMusicPlayerControllerNowPlayingTimeSnapshot * serverTimeSnapshot;                  //@synthesize serverTimeSnapshot=_serverTimeSnapshot - In the implementation block
@property (nonatomic,readonly) MPMusicPlayerQueueDescriptor * serverQueueDescriptor;                                //@synthesize serverQueueDescriptor=_serverQueueDescriptor - In the implementation block
@property (nonatomic,readonly) MPMusicPlayerControllerNowPlayingTimeSnapshot * lastServerTimeSnapshot;              //@synthesize lastServerTimeSnapshot=_lastServerTimeSnapshot - In the implementation block
@property (nonatomic,readonly) MPMusicPlayerControllerNowPlaying * lastServerNowPlaying;                            //@synthesize lastServerNowPlaying=_lastServerNowPlaying - In the implementation block
@property (nonatomic,readonly) MPMusicPlayerQueueDescriptor * targetQueueDescriptor;                                //@synthesize targetQueueDescriptor=_targetQueueDescriptor - In the implementation block
@property (nonatomic,readonly) long long notificationsCounter;                                                      //@synthesize notificationsCounter=_notificationsCounter - In the implementation block
@property (nonatomic,readonly) MPVolumeController * volumeController;                                               //@synthesize volumeController=_volumeController - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                                  //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) long long playbackSpeed; 
@property (nonatomic,readonly) BOOL isNowPlayingItemFromGeniusMix; 
@property (assign,nonatomic) unsigned long long currentChapterIndex; 
@property (nonatomic,readonly) long long playbackState; 
@property (assign,nonatomic) long long repeatMode; 
@property (assign,nonatomic) long long shuffleMode; 
@property (assign,nonatomic) float volume; 
@property (nonatomic,copy) MPMediaItem * nowPlayingItem; 
@property (nonatomic,readonly) unsigned long long indexOfNowPlayingItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isPreparedToPlay;                                                               //@synthesize isPreparedToPlay=_isPreparedToPlay - In the implementation block
@property (assign,nonatomic) double currentPlaybackTime; 
@property (assign,nonatomic) float currentPlaybackRate; 
+(id)alloc;
+(void)setRunLoopForNotifications:(id)arg1 ;
+(id)systemMusicPlayer;
+(id)applicationQueuePlayer;
+(id)applicationMusicPlayer;
+(id)iPodMusicPlayer;
-(void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2 ;
-(void)setVolume:(float)arg1 ;
-(void)setShuffleMode:(long long)arg1 ;
-(MPVolumeController *)volumeController;
-(unsigned long long)numberOfItems;
-(void)shuffle;
-(long long)playbackState;
-(id)_queueDescriptor;
-(void)pause;
-(id)initWithClientIdentifier:(id)arg1 ;
-(id)_nowPlaying;
-(void)setServerQueueDescriptor:(MPMusicPlayerQueueDescriptor *)arg1 ;
-(void)setServerNowPlaying:(MPMusicPlayerControllerNowPlaying *)arg1 ;
-(void)setServerTimeSnapshot:(MPMusicPlayerControllerNowPlayingTimeSnapshot *)arg1 ;
-(void)serverItemDidEnd;
-(void)serverPlaybackModeDidChangeAffectingQueue:(BOOL)arg1 ;
-(void)serverQueueDidEnd;
-(id)initWithClientIdentifier:(id)arg1 queue:(id)arg2 ;
-(MPMediaItem *)nowPlayingItem;
-(void)setNowPlayingItem:(MPMediaItem *)arg1 ;
-(unsigned long long)indexOfNowPlayingItem;
-(void)setQueueWithQuery:(id)arg1 ;
-(void)setQueueWithStoreIDs:(id)arg1 ;
-(void)setQueueWithItemCollection:(id)arg1 ;
-(void)setQueueWithDescriptor:(id)arg1 ;
-(void)prependQueueDescriptor:(id)arg1 ;
-(void)appendQueueDescriptor:(id)arg1 ;
-(void)prepareToPlayWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)skipToNextItem;
-(void)skipToBeginning;
-(void)skipToPreviousItem;
-(id)queueAsQuery;
-(void)beginGeneratingPlaybackNotifications;
-(void)endGeneratingPlaybackNotifications;
-(void)setQueueWithRadioStation:(id)arg1 ;
-(void)setQueueWithQuery:(id)arg1 firstItem:(id)arg2 ;
-(id)queueAsRadioStation;
-(id)nowPlayingAtIndex:(long long)arg1 ;
-(id)nowPlayingItemAtIndex:(unsigned long long)arg1 ;
-(void)pauseWithFadeoutDuration:(double)arg1 ;
-(void)skipToBeginningOrPreviousItem;
-(void)prepareQueueForPlayback;
-(void)setVolumePrivate:(float)arg1 ;
-(BOOL)userQueueModificationsDisabled;
-(long long)playbackSpeed;
-(void)setPlaybackSpeed:(long long)arg1 ;
-(BOOL)isNowPlayingItemFromGeniusMix;
-(unsigned long long)currentChapterIndex;
-(void)setCurrentChapterIndex:(unsigned long long)arg1 ;
-(BOOL)isGeniusAvailable;
-(BOOL)isGeniusAvailableForSeedItems:(id)arg1 ;
-(BOOL)setQueueWithSeedItems:(id)arg1 ;
-(void)setQueueWithGeniusMixPlaylist:(id)arg1 ;
-(void)_establishConnectionIfNeeded;
-(void)onServerAsync:(/*^block*/id)arg1 ;
-(void)adjustLoadedQueueRangeToReverseCount:(long long)arg1 forwardCount:(long long)arg2 ;
-(id)_mediaItemFromNowPlaying:(id)arg1 ;
-(MPMusicPlayerControllerNowPlaying *)serverNowPlaying;
-(MPMusicPlayerControllerNowPlayingTimeSnapshot *)serverTimeSnapshot;
-(MPMusicPlayerQueueDescriptor *)serverQueueDescriptor;
-(MPMusicPlayerControllerNowPlayingTimeSnapshot *)lastServerTimeSnapshot;
-(MPMusicPlayerControllerNowPlaying *)lastServerNowPlaying;
-(MPMusicPlayerQueueDescriptor *)targetQueueDescriptor;
-(long long)notificationsCounter;
-(void)play;
-(long long)repeatMode;
-(void)stop;
-(id)_snapshot;
-(void)prepareToPlay;
-(void)beginSeekingForward;
-(void)beginSeekingBackward;
-(void)endSeeking;
-(BOOL)isPreparedToPlay;
-(float)currentPlaybackRate;
-(void)setCurrentPlaybackRate:(float)arg1 ;
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg1 ;
-(void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1 ;
-(NSString *)description;
-(void)setRepeatMode:(long long)arg1 ;
-(NSXPCConnection *)connection;
-(void)setUserQueueModificationsDisabled:(BOOL)arg1 ;
-(id)existingRepresentationForArtworkCatalog:(id)arg1 ;
-(double)currentPlaybackTime;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_clearConnection;
-(void)onServer:(/*^block*/id)arg1 ;
-(void)setCurrentPlaybackTime:(double)arg1 ;
-(float)volume;
-(BOOL)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2 ;
-(NSString *)clientIdentifier;
-(void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)volumeController:(id)arg1 mutedStateDidChange:(BOOL)arg2 ;
-(long long)shuffleMode;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg1 ;
-(void)dealloc;
@end

