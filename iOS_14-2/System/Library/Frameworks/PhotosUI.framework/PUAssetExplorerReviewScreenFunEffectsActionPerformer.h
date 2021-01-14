/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUAssetExplorerReviewScreenActionPerformer.h>

@protocol PUReviewAssetProvider, PUFunEffectsViewControllerObserver;
@class PUReviewScreenBarsModel;

@interface PUAssetExplorerReviewScreenFunEffectsActionPerformer : PUAssetExplorerReviewScreenActionPerformer {

	id<PUReviewAssetProvider> _reviewAssetProvider;
	id<PUFunEffectsViewControllerObserver> _funEffectsObserver;
	PUReviewScreenBarsModel* _reviewBarsModel;

}

@property (nonatomic,retain) id<PUReviewAssetProvider> reviewAssetProvider;                                 //@synthesize reviewAssetProvider=_reviewAssetProvider - In the implementation block
@property (assign,nonatomic,__weak) id<PUFunEffectsViewControllerObserver> funEffectsObserver;              //@synthesize funEffectsObserver=_funEffectsObserver - In the implementation block
@property (nonatomic,retain) PUReviewScreenBarsModel * reviewBarsModel;                                     //@synthesize reviewBarsModel=_reviewBarsModel - In the implementation block
+(BOOL)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 ;
+(BOOL)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2 ;
-(id<PUFunEffectsViewControllerObserver>)funEffectsObserver;
-(PUReviewScreenBarsModel *)reviewBarsModel;
-(void)_presentFunEffectsViewControllerForAsset:(id)arg1 ;
-(void)performUserInteractionTask;
-(id<PUReviewAssetProvider>)reviewAssetProvider;
-(void)setReviewAssetProvider:(id<PUReviewAssetProvider>)arg1 ;
-(void)setReviewBarsModel:(PUReviewScreenBarsModel *)arg1 ;
-(void)setFunEffectsObserver:(id<PUFunEffectsViewControllerObserver>)arg1 ;
@end

