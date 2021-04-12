/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIMediaItem.h>
#import <libobjc.A.dylib/VUISidebandMediaEntityImageLoadParamsCreating.h>

@class VUIVideoManagedObject, VUISidebandMediaItemAssetController;

@interface VUISidebandMediaItem : VUIMediaItem <VUISidebandMediaEntityImageLoadParamsCreating> {

	VUIVideoManagedObject* _videoManagedObject;
	VUISidebandMediaItemAssetController* _assetController;

}

@property (nonatomic,retain) VUIVideoManagedObject * videoManagedObject;                         //@synthesize videoManagedObject=_videoManagedObject - In the implementation block
@property (nonatomic,retain) VUISidebandMediaItemAssetController * assetController;              //@synthesize assetController=_assetController - In the implementation block
-(id)storeID;
-(id)isLocal;
-(id)episodeNumber;
-(id)seasonNumber;
-(id)isPlayable;
-(id)releaseDate;
-(id)canonicalID;
-(id)brandName;
-(id)showTitle;
-(id)genreTitle;
-(id)brandID;
-(id)addedDate;
-(id)duration;
-(id)title;
-(void)dealloc;
-(VUISidebandMediaItemAssetController *)assetController;
-(void)setAssetController:(VUISidebandMediaItemAssetController *)arg1 ;
-(id)HLSColorCapability;
-(id)colorCapability;
-(id)downloadExpirationDate;
-(BOOL)markedAsDeleted;
-(id)availabilityEndDate;
-(BOOL)renewsOfflineKeysAutomatically;
-(BOOL)allowsManualDownloadRenewal;
-(id)seasonCanonicalID;
-(id)showCanonicalID;
-(id)seasonIdentifier;
-(id)imageLoadParamsWithImageType:(unsigned long long)arg1 ;
-(id)showIdentifier;
-(id)episodeIndexInSeries;
-(id)seasonTitle;
-(id)initWithMediaLibrary:(id)arg1 videoManagedObject:(id)arg2 requestedProperties:(id)arg3 ;
-(void)_videoManagedObjectPlaybackExpirationWillChange:(id)arg1 ;
-(VUIVideoManagedObject *)videoManagedObject;
-(void)setVideoManagedObject:(VUIVideoManagedObject *)arg1 ;
@end

