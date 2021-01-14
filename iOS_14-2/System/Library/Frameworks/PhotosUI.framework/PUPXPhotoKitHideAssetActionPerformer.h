/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXPhotoKitAssetActionPerformer.h>

@class PUAssetHidingHelper;

@interface PUPXPhotoKitHideAssetActionPerformer : PXPhotoKitAssetActionPerformer {

	BOOL _isHiding;
	PUAssetHidingHelper* _assetHidingHelper;

}

@property (nonatomic,retain) PUAssetHidingHelper * assetHidingHelper;              //@synthesize assetHidingHelper=_assetHidingHelper - In the implementation block
@property (assign,nonatomic) BOOL isHiding;                                        //@synthesize isHiding=_isHiding - In the implementation block
+(BOOL)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3 ;
-(void)performUserInteractionTask;
-(BOOL)isHiding;
-(void)setIsHiding:(BOOL)arg1 ;
-(PUAssetHidingHelper *)assetHidingHelper;
-(void)setAssetHidingHelper:(PUAssetHidingHelper *)arg1 ;
-(void)performBackgroundTask;
@end

