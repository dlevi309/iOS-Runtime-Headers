/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/MSVLRUDictionaryDelegate.h>
#import <libobjc.A.dylib/MPMediaRemoteEntityArtworkGenerator.h>

@protocol OS_dispatch_queue, MPArtworkDataSource;
@class NSObject, MPCFuture, NSString, NSMutableArray, MSVLRUDictionary, NSMutableDictionary, NSMapTable, MPCPlayerPath;

@interface MPCMediaRemoteController : NSObject <MSVLRUDictionaryDelegate, MPMediaRemoteEntityArtworkGenerator> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	MPCFuture* _playbackStateFuture;
	long long _playbackStateCacheState;
	MPCFuture* _supportedCommandsFuture;
	long long _supportedCommandsCacheState;
	MPCFuture* _playingItemIdentifierFuture;
	long long _playingIdentifierCacheState;
	NSString* _playingItemIdentifier;
	MPCFuture* _queueIdentifierFuture;
	long long _queueIdentifierCacheState;
	NSString* _queueIdentifier;
	MSVSignedRange _loadedContentItemsRange;
	MSVSignedRange _requestedContentItemsRange;
	NSMutableArray* _contentItemIDs;
	MSVLRUDictionary* _contentItems;
	NSMutableDictionary* _optimisticStateContentItems;
	NSMutableDictionary* _contentItemChanges;
	MSVLRUDictionary* _contentItemArtwork;
	NSMutableDictionary* _contentItemArtworkIdentifiers;
	NSMapTable* _contentItemIDsFutures;
	NSMapTable* _contentItemFutures;
	NSMutableDictionary* _contentItemArtworkFutures;
	unsigned long long _stateHandle;
	id<MPArtworkDataSource> _mediaRemoteArtworkDataSource;
	MPCPlayerPath* _resolvedPlayerPath;
	id _invalidationToken;

}

@property (nonatomic,retain) MPCPlayerPath * resolvedPlayerPath;                                   //@synthesize resolvedPlayerPath=_resolvedPlayerPath - In the implementation block
@property (nonatomic,readonly) id<MPArtworkDataSource> mediaRemoteArtworkDataSource;               //@synthesize mediaRemoteArtworkDataSource=_mediaRemoteArtworkDataSource - In the implementation block
@property (nonatomic,readonly) id<MPArtworkDataSource> remotePlayerArtworkDataSource; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;                             //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> calloutQueue;                            //@synthesize calloutQueue=_calloutQueue - In the implementation block
@property (nonatomic,retain) id invalidationToken;                                                 //@synthesize invalidationToken=_invalidationToken - In the implementation block
@property (nonatomic,readonly) long long playbackStateCacheState;                                  //@synthesize playbackStateCacheState=_playbackStateCacheState - In the implementation block
@property (nonatomic,readonly) MPCFuture * playbackState; 
@property (nonatomic,readonly) long long supportedCommandsCacheState;                              //@synthesize supportedCommandsCacheState=_supportedCommandsCacheState - In the implementation block
@property (nonatomic,readonly) MPCFuture * supportedCommands; 
@property (nonatomic,readonly) long long playingIdentifierCacheState;                              //@synthesize playingIdentifierCacheState=_playingIdentifierCacheState - In the implementation block
@property (nonatomic,readonly) MPCFuture * playingIdentifier; 
@property (nonatomic,readonly) long long queueIdentifierCacheState;                                //@synthesize queueIdentifierCacheState=_queueIdentifierCacheState - In the implementation block
@property (nonatomic,readonly) MPCFuture * queueIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldRegisterForNotifications;
+(void)sendCommand:(unsigned)arg1 options:(id)arg2 toPlayerPath:(id)arg3 completion:(/*^block*/id)arg4 ;
+(id)controllerForPlayerPath:(id)arg1 ;
+(void)_sendLocalCommand:(unsigned)arg1 playbackIntent:(id)arg2 options:(id)arg3 toPlayerPath:(id)arg4 completion:(/*^block*/id)arg5 ;
+(void)_sendRemoteCommand:(unsigned)arg1 playbackIntent:(id)arg2 options:(id)arg3 toPlayerPath:(id)arg4 completion:(/*^block*/id)arg5 ;
+(void)_sendCommand:(unsigned)arg1 options:(id)arg2 appOptions:(unsigned)arg3 toPlayerPath:(id)arg4 completion:(/*^block*/id)arg5 ;
+(id)mediaRemoteReplyQueue;
-(MPCPlayerPath *)resolvedPlayerPath;
-(id)contentItemForIdentifier:(id)arg1 ;
-(MPCFuture *)queueIdentifier;
-(long long)playingIdentifierCacheState;
-(void)_onQueue_mergeContentItems:(id)arg1 queueRange:(MSVSignedRange)arg2 requestRange:(MSVSignedRange)arg3 ;
-(void)setInvalidationToken:(id)arg1 ;
-(id<MPArtworkDataSource>)remotePlayerArtworkDataSource;
-(void)_contentItemArtworkChangedNotification:(id)arg1 ;
-(id<MPArtworkDataSource>)mediaRemoteArtworkDataSource;
-(MPCFuture *)playbackState;
-(void)setCalloutQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(MPCFuture *)playingIdentifier;
-(long long)contentItemCacheStateForIdentifier:(id)arg1 ;
-(long long)playbackStateCacheState;
-(long long)queueIdentifierCacheState;
-(MPCFuture *)supportedCommands;
-(long long)supportedCommandsCacheState;
-(id)contentItemArtworkForContentItemIdentifier:(id)arg1 artworkIdentifier:(id)arg2 size:(CGSize)arg3 ;
-(void)dictionary:(id)arg1 willRemoveObject:(id)arg2 forKey:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)calloutQueue;
-(long long)contentItemArtworkCacheStateForArtworkIdentifier:(id)arg1 size:(CGSize)arg2 ;
-(/*^block*/id)_onQueue_setOptimisticElapsedTimeForContentItem:(id)arg1 elapsedTime:(double)arg2 rate:(float)arg3 ;
-(id)playQueueIdentifiersForRange:(MSVSignedRange)arg1 ;
-(void)invalidateAllTokens;
-(id)_legacyCommands;
-(void)_onQueue_purgeArtworkForContentItemIdentifier:(id)arg1 ;
-(void)sendCommand:(unsigned)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)invalidationToken;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(/*^block*/id)_onQueue_setOptimisticPlayingItemIdentifier:(id)arg1 ;
-(id)_createExportableArtworkPropertiesForContentItem:(id)arg1 ;
-(id)_onQueue_identifiersForRange:(MSVSignedRange)arg1 ;
-(/*^block*/id)_onQueue_setOptimisticPlaybackState:(unsigned)arg1 withOptions:(id)arg2 ;
-(/*^block*/id)_onQueue_updateOptimisticStateForCommand:(unsigned)arg1 options:(id)arg2 ;
-(void)_onQueue_setOptimisticReorderedPlaybackQueueWithMovingContentItemIdentifier:(id)arg1 afterContentItemIdentifier:(id)arg2 ;
-(void)_onQueue_purgeArtworkForContentItemIdentifier:(id)arg1 artworkIdentifier:(id)arg2 ;
-(long long)playQueueIdentifiersCacheStateForRange:(MSVSignedRange)arg1 ;
-(id)_init;
-(/*^block*/id)artworkCatalogBlockForContentItem:(id)arg1 ;
-(void)_supportedCommandsDidChangedNotification:(id)arg1 ;
-(void)setResolvedPlayerPath:(MPCPlayerPath *)arg1 ;
-(void)_playbackStateDidChangeNotification:(id)arg1 ;
-(void)_playbackQueueContentItemsChangedNotification:(id)arg1 ;
-(void)_onQueue_setOptimisticReorderedPlaybackQueueWithMovingContentItemIdentifier:(id)arg1 beforeContentItemIdentifier:(id)arg2 ;
-(id)playQueueIdentifiersForRequest:(void*)arg1 ;
-(void)dealloc;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_playbackQueueChangedNotification:(id)arg1 ;
-(void)_onQueue_invalidateArtworkFuturesForContentItemID:(id)arg1 ;
@end

