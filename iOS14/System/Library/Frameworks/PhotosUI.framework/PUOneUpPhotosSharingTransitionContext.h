/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUPhotosSharingTransitionContext.h>

@class PUAssetReference;

@interface PUOneUpPhotosSharingTransitionContext : PUPhotosSharingTransitionContext {

	PUAssetReference* _currentAssetReference;

}

@property (nonatomic,retain) PUAssetReference * currentAssetReference;              //@synthesize currentAssetReference=_currentAssetReference - In the implementation block
-(void)setCurrentAssetReference:(PUAssetReference *)arg1 ;
-(PUAssetReference *)currentAssetReference;
-(id)keyAssetIndexPath;
@end

