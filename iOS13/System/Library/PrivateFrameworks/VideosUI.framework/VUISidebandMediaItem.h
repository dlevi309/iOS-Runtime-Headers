/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)title;
-(id)duration;
-(id)isLocal;
-(id)storeID;
-(id)isPlayable;
-(id)addedDate;
-(id)showTitle;
-(id)releaseDate;
-(id)seasonNumber;
-(id)genreTitle;
-(id)episodeNumber;
-(id)canonicalID;
-(VUISidebandMediaItemAssetController *)assetController;
-(void)setAssetController:(VUISidebandMediaItemAssetController *)arg1 ;
-(id)HLSColorCapability;
-(id)colorCapability;
-(id)imageLoadParamsWithImageType:(unsigned long long)arg1 ;
-(id)showIdentifier;
-(id)seasonIdentifier;
-(id)episodeIndexInSeries;
-(id)seasonTitle;
-(id)initWithMediaLibrary:(id)arg1 videoManagedObject:(id)arg2 requestedProperties:(id)arg3 ;
-(id)downloadExpirationDate;
-(void)_videoManagedObjectPlaybackExpirationWillChange:(id)arg1 ;
-(VUIVideoManagedObject *)videoManagedObject;
-(void)setVideoManagedObject:(VUIVideoManagedObject *)arg1 ;
@end

