/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUPhotoKitActionPerformer.h>

@interface PUPhotoKitFavoriteActionPerformer : PUPhotoKitActionPerformer {

	BOOL _favorite;

}

@property (assign,nonatomic) BOOL favorite;              //@synthesize favorite=_favorite - In the implementation block
+(BOOL)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 ;
-(void)setFavorite:(BOOL)arg1 ;
-(BOOL)favorite;
-(void)performBackgroundTask;
@end

