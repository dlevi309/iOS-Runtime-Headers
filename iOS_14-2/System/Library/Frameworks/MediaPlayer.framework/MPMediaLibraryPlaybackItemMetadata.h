/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_highQualityCachedAssetDestinationDirectory;
+(id)_lowQualityCachedAssetDestinationDirectory;
+(id)streamingPlaybackAssetDestinationFilePathForMediaLibraryPersistentID:(long long)arg1 storeAdamID:(long long)arg2 storeSagaID:(unsigned long long)arg3 assetQuality:(unsigned long long)arg4 assetFlavor:(id)arg5 protectionType:(unsigned long long)arg6 pathExtension:(id)arg7 ;
-(id)albumArtistName;
-(id)_writeQueue;
-(id)_cachedLocalPlaybackAssetFilePathWithIntegrityCheck:(BOOL)arg1 returningAssetQuality:(unsigned long long*)arg2 protectionType:(unsigned long long*)arg3 usesPurchaseBundle:(BOOL*)arg4 ;
-(id)_mediaItemValuesForProperties;
-(id)initWithMediaItem:(id)arg1 ;
-(BOOL)prefersStoreContentInfo;
-(id)hlsPlaylistURLString;
-(id)cachedLocalPlaybackAssetFilePathReturningAssetQuality:(unsigned long long*)arg1 protectionType:(unsigned long long*)arg2 usesPurchaseBundle:(BOOL*)arg3 ;
-(id)hlsOfflinePlaybackKeys;
-(BOOL)isSubscriptionRequired;
-(id)iTunesStoreContentID;
-(id)iTunesStoreContentDSID;
-(id)localNetworkContentURL;
-(long long)mediaLibraryPersistentID;
-(BOOL)shouldReportPlayEventsToStore;
-(float)volumeNormalization;
-(void)setCachedLocalPlaybackAssetFilePath:(id)arg1 protectionType:(unsigned long long)arg2 assetQuality:(unsigned long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)clearLocalPlaybackAssetFilePathWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)shouldRememberBookmarkTime;
-(void)setMediaItem:(MPMediaItem *)arg1 ;
-(id)storeUbiquitousIdentifier;
-(void)_persistURI:(id)arg1 persistentContentKey:(id)arg2 ;
-(void)_invalidateMediaItemProperties;
-(id)streamingPlaybackAssetDestinationFilePathForAssetQuality:(unsigned long long)arg1 assetFlavor:(id)arg2 protectionType:(unsigned long long)arg3 pathExtension:(id)arg4 ;
-(id)_onqueue_mediaItemValuesForProperties;
-(void)setWriteQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(long long)downloadIdentifier;
-(id)init;
-(id)composerName;
-(unsigned long long)contentType;
-(id)artistName;
-(long long)storeSubscriptionAdamID;
-(unsigned long long)storeAccountID;
-(id)buyParameters;
-(long long)storeAdamID;
-(MPMediaItem *)mediaItem;
-(double)bookmarkTime;
-(BOOL)isExplicitTrack;
-(long long)endpointType;
-(id)modelGenericObject;
-(BOOL)showComposer;
-(long long)albumStoreAdamID;
-(id)albumTitle;
-(BOOL)allowsInitiatingPlayWhileDownload;
-(id)artworkCatalogForPlaybackTime:(double)arg1 ;
-(id)contentTitle;
-(double)expectedDuration;
-(unsigned long long)storeSagaID;
-(long long)artistStoreAdamID;
-(id)protectedContentSupportStorageURL;
-(unsigned long long)hash;
-(id)copyrightText;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)_mediaLibraryDidChangeNotification:(id)arg1 ;
-(BOOL)isOfflineHLS;
@end

