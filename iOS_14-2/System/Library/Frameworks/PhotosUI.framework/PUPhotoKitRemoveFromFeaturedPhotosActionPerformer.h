/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUPhotoKitActionPerformer.h>

@class NSDictionary;

@interface PUPhotoKitRemoveFromFeaturedPhotosActionPerformer : PUPhotoKitActionPerformer {

	NSDictionary* _assetToSuggestionMap;

}

@property (nonatomic,retain) NSDictionary * assetToSuggestionMap;              //@synthesize assetToSuggestionMap=_assetToSuggestionMap - In the implementation block
+(BOOL)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 ;
-(NSDictionary *)assetToSuggestionMap;
-(void)setAssetToSuggestionMap:(NSDictionary *)arg1 ;
-(void)performBackgroundTask;
@end

