/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPMediaPlaybackItemMetadata.h>

@protocol OS_dispatch_queue;
@class NSObject, MPMediaItem, NSDictionary;

@interface MPMediaLibraryPlaybackItemMetadata : MPMediaPlaybackItemMetadata {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _hasValidMediaItemValuesForProperties;
	BOOL _hasEvaluatedOfflineHLS;
	BOOL _isOfflineHLS;
	MPMediaItem* _mediaItem;
	NSDictionary* _mediaItemValuesForProperties;
	NSDictionary* _playbackKeys;
	NSObject*<OS_dispatch_queue> _writeQueue;

}

@property (getter=_writeQueue,nonatomic,retain) NSObject*<OS_dispatch_queue> writeQueue;              //@synthesize writeQueue=_writeQueue - In the implementation block
@property (nonatomic,retain) MPMediaItem * mediaItem; 
+(id)streamingPlaybackAssetDestinationFilePathForMediaLibraryPersistentID:(long long)arg1 storeAdamID:(long long)arg2 storeSagaID:(unsigned long long)arg3 assetQuality:(unsigned long long)arg4 assetFlavor:(id)arg5 protectionType:(unsigned long long)arg6 pathExtension:(id)arg7 ;
+(id)_highQualityCachedAssetDestinationDirectory;
+(id)_lowQualityCachedAssetDestinationDirectory;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)contentType;
-(long long)downloadIdentifier;
-(id)_writeQueue;
-(long long)endpointType;
-(MPMediaItem *)mediaItem;
-(void)setMediaItem:(MPMediaItem *)arg1 ;
-(id)artistName;
-(double)bookmarkTime;
-(BOOL)isExplicitTrack;
-(id)copyrightText;
-(long long)storeSubscriptionAdamID;
-(id)modelGenericObject;
-(unsigned long long)storeAccountID;
-(id)composerName;
-(BOOL)showComposer;
-(id)albumArtistName;
-(long long)albumStoreAdamID;
-(id)albumTitle;
-(BOOL)allowsInitiatingPlayWhileDownload;
-(long long)artistStoreAdamID;
-(id)artworkCatalogForPlaybackTime:(double)arg1 ;
-(id)contentTitle;
-(double)expectedDuration;
-(long long)storeAdamID;
-(unsigned long long)storeSagaID;
-(id)buyParameters;
-(void)_mediaLibraryDidChangeNotification:(id)arg1 ;
-(id)_mediaItemValuesForProperties;
-(id)initWithMediaItem:(id)arg1 ;
-(id)cachedLocalPlaybackAssetFilePathReturningAssetQuality:(unsigned long long*)arg1 protectionType:(unsigned long long*)arg2 usesPurchaseBundle:(BOOL*)arg3 ;
-(BOOL)prefersStoreContentInfo;
-(id)hlsPlaylistURLString;
-(id)hlsOfflinePlaybackKeys;
-(BOOL)isOfflineHLS;
-(BOOL)isSubscriptionRequired;
-(id)iTunesStoreContentID;
-(id)iTunesStoreContentDSID;
-(id)localNetworkContentURL;
-(long long)mediaLibraryPersistentID;
-(id)protectedContentSupportStorageURL;
-(void)setCachedLocalPlaybackAssetFilePath:(id)arg1 protectionType:(unsigned long long)arg2 assetQuality:(unsigned long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)clearLocalPlaybackAssetFilePathWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)shouldRememberBookmarkTime;
-(BOOL)shouldReportPlayEventsToStore;
-(id)storeUbiquitousIdentifier;
-(id)streamingPlaybackAssetDestinationFilePathForAssetQuality:(unsigned long long)arg1 assetFlavor:(id)arg2 protectionType:(unsigned long long)arg3 pathExtension:(id)arg4 ;
-(float)volumeNormalization;
-(void)_persistURI:(id)arg1 persistentContentKey:(id)arg2 ;
-(id)_cachedLocalPlaybackAssetFilePathWithIntegrityCheck:(BOOL)arg1 returningAssetQuality:(unsigned long long*)arg2 protectionType:(unsigned long long*)arg3 usesPurchaseBundle:(BOOL*)arg4 ;
-(void)_invalidateMediaItemProperties;
-(id)_onqueue_mediaItemValuesForProperties;
-(void)setWriteQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

