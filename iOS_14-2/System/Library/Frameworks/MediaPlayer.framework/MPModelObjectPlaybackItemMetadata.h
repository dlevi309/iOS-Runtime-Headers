/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)requiredHomeSharingAssetProperties;
+(id)requiredLocalFileAssetProperties;
+(id)requiredPlaybackPositionProperties;
+(id)requiredStoreAssetProperties;
+(id)requiredProperties;
+(BOOL)_shouldRespectStoreCellularDataSetting;
+(BOOL)_shouldRespectMusicCellularDataSetting;
-(id)_cachedLocalPlaybackAssetFilePathWithIntegrityCheck:(BOOL)arg1 returningAssetQuality:(unsigned long long*)arg2 protectionType:(unsigned long long*)arg3 usesPurchaseBundle:(BOOL*)arg4 ;
-(MPModelHomeSharingAsset *)homeSharingAsset;
-(id)cachedLocalPlaybackAssetFilePathReturningAssetQuality:(unsigned long long*)arg1 protectionType:(unsigned long long*)arg2 usesPurchaseBundle:(BOOL*)arg3 ;
-(BOOL)isSubscriptionRequired;
-(id)iTunesStoreContentID;
-(id)iTunesStoreContentDSID;
-(id)localNetworkContentURL;
-(long long)mediaLibraryPersistentID;
-(BOOL)shouldReportPlayEventsToStore;
-(void)setCachedLocalPlaybackAssetFilePath:(id)arg1 protectionType:(unsigned long long)arg2 assetQuality:(unsigned long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)clearLocalPlaybackAssetFilePathWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)shouldRememberBookmarkTime;
-(id)storeUbiquitousIdentifier;
-(id)streamingPlaybackAssetDestinationFilePathForAssetQuality:(unsigned long long)arg1 assetFlavor:(id)arg2 protectionType:(unsigned long long)arg3 pathExtension:(id)arg4 ;
-(long long)downloadIdentifier;
-(id)init;
-(id<MPModelObjectPlaybackItemMetadataDelegate>)modelObjectDelegate;
-(void)setModelObjectDelegate:(id<MPModelObjectPlaybackItemMetadataDelegate>)arg1 ;
-(unsigned long long)storeAccountID;
-(id)buyParameters;
-(double)bookmarkTime;
-(long long)endpointType;
-(MPModelFileAsset *)localFileAsset;
-(MPModelPlaybackPosition *)playbackPosition;
-(MPModelStoreAsset *)storeAsset;
-(void)_invalidateModelObjectPlaybackItemMetadata;
-(id)protectedContentSupportStorageURL;
-(BOOL)allowsAssetCaching;
-(void)loadMediaItemWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

