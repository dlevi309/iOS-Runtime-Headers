/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPMediaPlaybackItemMetadata.h>

@protocol OS_dispatch_queue, MPModelObjectPlaybackItemMetadataDelegate;
@class NSObject, MPModelPlaybackPosition, MPModelFileAsset, MPModelHomeSharingAsset, MPModelStoreAsset;

@interface MPModelObjectPlaybackItemMetadata : MPMediaPlaybackItemMetadata {

	NSObject*<OS_dispatch_queue> _writeQueue;
	id<MPModelObjectPlaybackItemMetadataDelegate> _modelObjectDelegate;
	MPModelPlaybackPosition* _playbackPosition;

}

@property (nonatomic,readonly) MPModelFileAsset * localFileAsset; 
@property (nonatomic,readonly) MPModelHomeSharingAsset * homeSharingAsset; 
@property (nonatomic,readonly) MPModelPlaybackPosition * playbackPosition;                                          //@synthesize playbackPosition=_playbackPosition - In the implementation block
@property (nonatomic,readonly) MPModelStoreAsset * storeAsset; 
@property (assign,nonatomic,__weak) id<MPModelObjectPlaybackItemMetadataDelegate> modelObjectDelegate;              //@synthesize modelObjectDelegate=_modelObjectDelegate - In the implementation block
+(id)requiredProperties;
+(BOOL)_shouldRespectStoreCellularDataSetting;
+(BOOL)_shouldRespectMusicCellularDataSetting;
+(id)requiredHomeSharingAssetProperties;
+(id)requiredLocalFileAssetProperties;
+(id)requiredPlaybackPositionProperties;
+(id)requiredStoreAssetProperties;
-(id)init;
-(void)dealloc;
-(long long)downloadIdentifier;
-(long long)endpointType;
-(double)bookmarkTime;
-(unsigned long long)storeAccountID;
-(MPModelFileAsset *)localFileAsset;
-(MPModelPlaybackPosition *)playbackPosition;
-(MPModelStoreAsset *)storeAsset;
-(void)_invalidateModelObjectPlaybackItemMetadata;
-(id)buyParameters;
-(id)cachedLocalPlaybackAssetFilePathReturningAssetQuality:(unsigned long long*)arg1 protectionType:(unsigned long long*)arg2 usesPurchaseBundle:(BOOL*)arg3 ;
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
-(id)_cachedLocalPlaybackAssetFilePathWithIntegrityCheck:(BOOL)arg1 returningAssetQuality:(unsigned long long*)arg2 protectionType:(unsigned long long*)arg3 usesPurchaseBundle:(BOOL*)arg4 ;
-(BOOL)allowsAssetCaching;
-(void)loadMediaItemWithCompletionHandler:(/*^block*/id)arg1 ;
-(MPModelHomeSharingAsset *)homeSharingAsset;
-(id<MPModelObjectPlaybackItemMetadataDelegate>)modelObjectDelegate;
-(void)setModelObjectDelegate:(id<MPModelObjectPlaybackItemMetadataDelegate>)arg1 ;
@end

