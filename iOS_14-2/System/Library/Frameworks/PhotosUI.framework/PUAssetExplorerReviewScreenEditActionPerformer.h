/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUAssetExplorerReviewScreenActionPerformer.h>

@protocol PUReviewAssetProvider, PUPhotoEditViewControllerSessionDelegate;
@interface PUAssetExplorerReviewScreenEditActionPerformer : PUAssetExplorerReviewScreenActionPerformer {

	id<PUReviewAssetProvider> _reviewAssetProvider;
	id<PUPhotoEditViewControllerSessionDelegate> _photoDelegate;

}

@property (nonatomic,retain) id<PUReviewAssetProvider> reviewAssetProvider;                                  //@synthesize reviewAssetProvider=_reviewAssetProvider - In the implementation block
@property (assign,nonatomic,__weak) id<PUPhotoEditViewControllerSessionDelegate> photoDelegate;              //@synthesize photoDelegate=_photoDelegate - In the implementation block
+(BOOL)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 ;
+(BOOL)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2 ;
-(void)_presentEditViewControllerForReviewAsset:(id)arg1 ;
-(void)performUserInteractionTask;
-(id<PUReviewAssetProvider>)reviewAssetProvider;
-(void)setReviewAssetProvider:(id<PUReviewAssetProvider>)arg1 ;
-(void)setPhotoDelegate:(id<PUPhotoEditViewControllerSessionDelegate>)arg1 ;
-(id<PUPhotoEditViewControllerSessionDelegate>)photoDelegate;
@end

