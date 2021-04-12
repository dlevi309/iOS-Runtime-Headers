/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@protocol OS_dispatch_queue;
@class NSObject, MSVMultiCallback, NSMutableDictionary, _MRNowPlayingPlayerPathProtobuf, NSArray;

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
	_MRNowPlayingPlayerPathProtobuf* _playerPath;

}

@property (nonatomic,readonly) _MRNowPlayingPlayerPathProtobuf * playerPath;                           //@synthesize playerPath=_playerPath - In the implementation block
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
-(unsigned long long)capabilities;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(void)setPlaybackSessionCallback:(id)arg1 ;
-(void)setPlaybackSessionMigrateBeginCallback:(id)arg1 ;
-(void)setPlaybackSessionMigrateEndCallback:(id)arg1 ;
-(void)setVideoThumbnailsCallback:(id)arg1 ;
-(void)setAudioAmplitudeSamplesCallback:(id)arg1 ;
-(void)removeCommandHandlerBlockForKey:(id)arg1 ;
-(void)addCommandHandlerBlock:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(void)setPlaybackSessionMigrateRequestCallback:(id)arg1 ;
-(BOOL)hasPlaybackQueueCallbacks;
-(MSVMultiCallback *)createPlaybackQueueForRequestCallbacks;
-(MSVMultiCallback *)createItemForOffsetCallbacks;
-(MSVMultiCallback *)createItemForIdentifierCallbacks;
-(MSVMultiCallback *)createChildItemCallbacks;
-(MSVMultiCallback *)metadataCallbacks;
-(MSVMultiCallback *)languageOptionsCallbacks;
-(MSVMultiCallback *)infoCallbacks;
-(MSVMultiCallback *)lyricsCallbacks;
-(MSVMultiCallback *)artworkCallbacks;
-(id)playbackSessionCallback;
-(id)playbackSessionMigrateBeginCallback;
-(id)playbackSessionMigrateEndCallback;
-(id)playbackSessionMigrateRequestCallback;
-(NSArray *)commandHandlerBlocks;
-(id)videoThumbnailsCallback;
-(id)audioAmplitudeSamplesCallback;
-(id)endLyricsEventCallback;
-(id)beginLyricsEventCallback;
-(unsigned long long)_onQueue_capabilities;
-(void)registerNowPlayingInfoCallbacks:(id)arg1 ;
-(void)registerNowPlayingInfoAssetCallbacks:(id)arg1 ;
-(void)registerNowPlayingInfoArtworkAssetCallback:(id)arg1 ;
-(id)initWithPlayerPath:(id)arg1 queue:(id)arg2 ;
-(void)setBeginLyricsEventCallback:(id)arg1 ;
-(void)setEndLyricsEventCallback:(id)arg1 ;
-(void)registerNowPlayingInfoBackedPlaybackQueueDataSourceCallbacks;
@end

