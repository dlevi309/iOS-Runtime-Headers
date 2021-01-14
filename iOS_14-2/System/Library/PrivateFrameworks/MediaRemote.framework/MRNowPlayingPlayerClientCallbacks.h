/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@protocol OS_dispatch_queue;
@class NSObject, MSVMultiCallback, NSMutableDictionary, MRPlayerPath, NSArray;

@interface MRNowPlayingPlayerClientCallbacks : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	MSVMultiCallback* _createPlaybackQueueForRequestCallbacks;
	MSVMultiCallback* _createItemForOffsetCallbacks;
	MSVMultiCallback* _createItemForIdentifierCallbacks;
	MSVMultiCallback* _createChildItemCallbacks;
	MSVMultiCallback* _metadataCallbacks;
	MSVMultiCallback* _languageOptionsCallbacks;
	MSVMultiCallback* _infoCallbacks;
	MSVMultiCallback* _lyricsCallbacks;
	MSVMultiCallback* _artworkCallbacks;
	/*^block*/id _playbackSessionCallback;
	/*^block*/id _playbackSessionMigrateBeginCallback;
	/*^block*/id _playbackSessionMigrateEndCallback;
	/*^block*/id _playbackSessionMigrateRequestCallback;
	/*^block*/id _beginLyricsEventCallback;
	/*^block*/id _endLyricsEventCallback;
	/*^block*/id _videoThumbnailsCallback;
	/*^block*/id _audioAmplitudeSamplesCallback;
	NSMutableDictionary* _commandHandlerBlocks;
	MSVMultiCallback* _createItemToken;
	MSVMultiCallback* _createItemForIdentifierToken;
	MSVMultiCallback* _metadataToken;
	MSVMultiCallback* _languageToken;
	MSVMultiCallback* _artworkToken;
	MRPlayerPath* _playerPath;

}

@property (nonatomic,readonly) MRPlayerPath * playerPath;                                              //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaybackQueueCallbacks; 
@property (nonatomic,readonly) unsigned long long capabilities; 
@property (nonatomic,readonly) MSVMultiCallback * createPlaybackQueueForRequestCallbacks;              //@synthesize createPlaybackQueueForRequestCallbacks=_createPlaybackQueueForRequestCallbacks - In the implementation block
@property (nonatomic,readonly) MSVMultiCallback * createItemForOffsetCallbacks;                        //@synthesize createItemForOffsetCallbacks=_createItemForOffsetCallbacks - In the implementation block
@property (nonatomic,readonly) MSVMultiCallback * createItemForIdentifierCallbacks;                    //@synthesize createItemForIdentifierCallbacks=_createItemForIdentifierCallbacks - In the implementation block
@property (nonatomic,readonly) MSVMultiCallback * createChildItemCallbacks;                            //@synthesize createChildItemCallbacks=_createChildItemCallbacks - In the implementation block
@property (nonatomic,readonly) MSVMultiCallback * metadataCallbacks;                                   //@synthesize metadataCallbacks=_metadataCallbacks - In the implementation block
@property (nonatomic,readonly) MSVMultiCallback * languageOptionsCallbacks;                            //@synthesize languageOptionsCallbacks=_languageOptionsCallbacks - In the implementation block
@property (nonatomic,readonly) MSVMultiCallback * infoCallbacks;                                       //@synthesize infoCallbacks=_infoCallbacks - In the implementation block
@property (nonatomic,readonly) MSVMultiCallback * lyricsCallbacks;                                     //@synthesize lyricsCallbacks=_lyricsCallbacks - In the implementation block
@property (nonatomic,readonly) MSVMultiCallback * artworkCallbacks;                                    //@synthesize artworkCallbacks=_artworkCallbacks - In the implementation block
@property (nonatomic,copy) id playbackSessionCallback; 
@property (nonatomic,copy) id playbackSessionMigrateBeginCallback; 
@property (nonatomic,copy) id playbackSessionMigrateEndCallback; 
@property (nonatomic,copy) id playbackSessionMigrateRequestCallback; 
@property (nonatomic,copy) id beginLyricsEventCallback; 
@property (nonatomic,copy) id endLyricsEventCallback; 
@property (nonatomic,copy) id videoThumbnailsCallback; 
@property (nonatomic,copy) id audioAmplitudeSamplesCallback; 
@property (nonatomic,copy,readonly) NSArray * commandHandlerBlocks; 
-(id)endLyricsEventCallback;
-(void)setEndLyricsEventCallback:(id)arg1 ;
-(id)playbackSessionMigrateEndCallback;
-(void)registerNowPlayingInfoAssetCallbacks:(id)arg1 ;
-(id)initWithPlayerPath:(id)arg1 queue:(id)arg2 ;
-(MSVMultiCallback *)createChildItemCallbacks;
-(unsigned long long)capabilities;
-(void)setAudioAmplitudeSamplesCallback:(id)arg1 ;
-(MSVMultiCallback *)createItemForIdentifierCallbacks;
-(void)registerNowPlayingInfoCallbacks:(id)arg1 ;
-(MSVMultiCallback *)createPlaybackQueueForRequestCallbacks;
-(MSVMultiCallback *)metadataCallbacks;
-(id)videoThumbnailsCallback;
-(void)removeCommandHandlerBlockForKey:(id)arg1 ;
-(BOOL)hasPlaybackQueueCallbacks;
-(MSVMultiCallback *)lyricsCallbacks;
-(void)setBeginLyricsEventCallback:(id)arg1 ;
-(id)playbackSessionCallback;
-(void)setPlaybackSessionMigrateEndCallback:(id)arg1 ;
-(id)playbackSessionMigrateRequestCallback;
-(MSVMultiCallback *)languageOptionsCallbacks;
-(void)setPlaybackSessionMigrateBeginCallback:(id)arg1 ;
-(MSVMultiCallback *)artworkCallbacks;
-(MSVMultiCallback *)infoCallbacks;
-(void)setPlaybackSessionCallback:(id)arg1 ;
-(MRPlayerPath *)playerPath;
-(id)beginLyricsEventCallback;
-(unsigned long long)_onQueue_capabilities;
-(void)registerNowPlayingInfoArtworkAssetCallback:(id)arg1 ;
-(id)playbackSessionMigrateBeginCallback;
-(void)registerNowPlayingInfoBackedPlaybackQueueDataSourceCallbacks;
-(void)setVideoThumbnailsCallback:(id)arg1 ;
-(BOOL)removePlaybackQueueDataSourceCallback:(id)arg1 ;
-(MSVMultiCallback *)createItemForOffsetCallbacks;
-(void)setPlaybackSessionMigrateRequestCallback:(id)arg1 ;
-(void)addCommandHandlerBlock:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(id)audioAmplitudeSamplesCallback;
-(NSArray *)commandHandlerBlocks;
@end

