/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUAssetExplorerReviewScreenActionPerformer.h>

@protocol PUReviewAssetProvider, PUPhotoMarkupViewControllerObserver;
@interface PUAssetExplorerReviewScreenMarkupActionPerformer : PUAssetExplorerReviewScreenActionPerformer {

	id<PUReviewAssetProvider> _reviewAssetProvider;
	id<PUPhotoMarkupViewControllerObserver> _markupObserver;

}

@property (nonatomic,retain) id<PUReviewAssetProvider> reviewAssetProvider;                              //@synthesize reviewAssetProvider=_reviewAssetProvider - In the implementation block
@property (assign,nonatomic,__weak) id<PUPhotoMarkupViewControllerObserver> markupObserver;              //@synthesize markupObserver=_markupObserver - In the implementation block
+(BOOL)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 ;
+(BOOL)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2 ;
-(void)_presentMarkupViewControllerForReviewAsset:(id)arg1 ;
-(id<PUPhotoMarkupViewControllerObserver>)markupObserver;
-(void)performUserInteractionTask;
-(id<PUReviewAssetProvider>)reviewAssetProvider;
-(void)setReviewAssetProvider:(id<PUReviewAssetProvider>)arg1 ;
-(void)setMarkupObserver:(id<PUPhotoMarkupViewControllerObserver>)arg1 ;
@end

