/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/PUPhotoEditViewControllerPresentationDelegate.h>
#import <libobjc.A.dylib/PUSlideshowViewControllerDelegate.h>
#import <libobjc.A.dylib/PUAvalancheReviewControllerDelegate.h>
#import <libobjc.A.dylib/PXActivitySharingControllerDelegate.h>
#import <libobjc.A.dylib/PUOneUpPhotosSharingTransitionDelegate.h>
#import <libobjc.A.dylib/PUCollectionViewLayoutProvider.h>
#import <libobjc.A.dylib/PXForcedDismissableViewController.h>
#import <libobjc.A.dylib/PUPhotoMarkupViewControllerObserver.h>
#import <libobjc.A.dylib/PUFunEffectsViewControllerObserver.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <libobjc.A.dylib/PUOneUpSharingAnimationControllerDelegate.h>

@protocol PUOverOneUpPresentationSessionDelegate, PUOverOneUpPresentationSessionBarsDelegate, PXActivitySharingControllerDelegate;
@class PUAvalancheReviewController, PUSlideshowViewController, PUEditViewController, PUPhotoMarkupViewController, PUFunEffectsViewController, PUAssetReference, NSHashTable, PUActivitySharingController, NSString;

@interface PUOverOneUpPresentationSession : NSObject <PUPhotoEditViewControllerPresentationDelegate, PUSlideshowViewControllerDelegate, PUAvalancheReviewControllerDelegate, PXActivitySharingControllerDelegate, PUOneUpPhotosSharingTransitionDelegate, PUCollectionViewLayoutProvider, PXForcedDismissableViewController, PUPhotoMarkupViewControllerObserver, PUFunEffectsViewControllerObserver, UIViewControllerTransitioningDelegate, PUOneUpSharingAnimationControllerDelegate> {

	SCD_Struct_PH7 _delegateFlags;
	struct {
		BOOL respondsToActivities;
		BOOL respondsToBarButtonItem;
		BOOL respondsToDidAppendReviewScreenAction;
	}  _barsDelegateFlags;
	BOOL __needsUpdatePresentedViewControllers;
	id<PUOverOneUpPresentationSessionDelegate> _delegate;
	id<PUOverOneUpPresentationSessionBarsDelegate> _barsDelegate;
	PUAvalancheReviewController* __avalancheReviewController;
	PUSlideshowViewController* __slideshowViewController;
	PUEditViewController* __editViewController;
	PUPhotoMarkupViewController* __photoMarkupViewController;
	PUFunEffectsViewController* __funEffectsViewController;
	PUAssetReference* __stashedAssetReference;
	NSHashTable* __presentedViewControllers;
	PUActivitySharingController* _activitySharingController;
	id<PXActivitySharingControllerDelegate> _activitySharingControllerDelegate;

}

@property (setter=_setAvalancheReviewController:,nonatomic,retain) PUAvalancheReviewController * _avalancheReviewController;              //@synthesize _avalancheReviewController=__avalancheReviewController - In the implementation block
@property (setter=_setSlideshowViewController:,nonatomic,retain) PUSlideshowViewController * _slideshowViewController;                    //@synthesize _slideshowViewController=__slideshowViewController - In the implementation block
@property (setter=_setEditViewController:,nonatomic,retain) PUEditViewController * _editViewController;                                   //@synthesize _editViewController=__editViewController - In the implementation block
@property (setter=_setPhotoMarkupViewController:,nonatomic,retain) PUPhotoMarkupViewController * _photoMarkupViewController;              //@synthesize _photoMarkupViewController=__photoMarkupViewController - In the implementation block
@property (setter=_setFunEffectsViewController:,nonatomic,retain) PUFunEffectsViewController * _funEffectsViewController;                 //@synthesize _funEffectsViewController=__funEffectsViewController - In the implementation block
@property (setter=_setStashedAssetReference:,nonatomic,copy) PUAssetReference * _stashedAssetReference;                                   //@synthesize _stashedAssetReference=__stashedAssetReference - In the implementation block
@property (setter=_setPresentedViewControllers:,nonatomic,retain) NSHashTable * _presentedViewControllers;                                //@synthesize _presentedViewControllers=__presentedViewControllers - In the implementation block
@property (assign,setter=_setNeedsUpdatePresentedViewControllers:,nonatomic) BOOL _needsUpdatePresentedViewControllers;                   //@synthesize _needsUpdatePresentedViewControllers=__needsUpdatePresentedViewControllers - In the implementation block
@property (nonatomic,retain) PUActivitySharingController * activitySharingController;                                                     //@synthesize activitySharingController=_activitySharingController - In the implementation block
@property (assign,nonatomic,__weak) id<PXActivitySharingControllerDelegate> activitySharingControllerDelegate;                            //@synthesize activitySharingControllerDelegate=_activitySharingControllerDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<PUOverOneUpPresentationSessionDelegate> delegate;                                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<PUOverOneUpPresentationSessionBarsDelegate> barsDelegate;                                          //@synthesize barsDelegate=_barsDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(CGSize)collectionViewContentSize;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id<PUOverOneUpPresentationSessionBarsDelegate>)barsDelegate;
-(void)oneUpSharingAnimationController:(id)arg1 setVisibility:(BOOL)arg2 forAssetReference:(id)arg3 ;
-(void)funEffectsViewController:(id)arg1 didSaveAsset:(id)arg2 withCompletion:(unsigned long long)arg3 ;
-(void)photoMarkupController:(id)arg1 didFinishWithSavedAsset:(id)arg2 ;
-(id<PUOverOneUpPresentationSessionDelegate>)delegate;
-(void)editController:(id)arg1 didFinishPreparingForTransitionAfterEditingPhoto:(id)arg2 ;
-(void)editController:(id)arg1 didFinishPreparingForTransitionAfterEditingVideo:(id)arg2 modificationDate:(id)arg3 seekTime:(SCD_Struct_PH4)arg4 ;
-(BOOL)presentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)slideshowViewControllerDidFinish:(id)arg1 withVisibleAssets:(id)arg2 ;
-(void)photosSharingTransitionWillAnimateDismissal:(id)arg1 ;
-(void)_invalidatePresentedViewControllers;
-(id)_currentTileController;
-(void)_updatePresentedViewControllersIfNeeded;
-(BOOL)isPresentingAnOverOneUpViewController;
-(void)_finishOverOneUpPresentationSessionDismissForced:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_presentEditViewController:(id)arg1 ;
-(BOOL)_presentPhotoMarkupViewController:(id)arg1 ;
-(BOOL)_presentFunEffectsViewController:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_presentActivityViewController:(id)arg1 ;
-(BOOL)_presentAvalancheReviewController:(id)arg1 ;
-(BOOL)_presentSlideshowViewController:(id)arg1 ;
-(BOOL)_presentScreenRoutePickerViewController:(id)arg1 ;
-(CGRect)_frameForAssetReference:(id)arg1 ;
-(BOOL)_dismissSlideshowViewController:(id)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_dismissEditViewController:(id)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_dismissPhotoMarkupViewController:(id)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(long long)_globalIndexForAssetReference:(id)arg1 ;
-(BOOL)_dismissFunEffectsViewController:(id)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_dismissActivityViewController:(id)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_dismissAvalancheReviewController:(id)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(CGRect)_frameAtIndexPath:(id)arg1 ;
-(BOOL)_popToOneUpFromViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)_assetReferenceFromAsset:(id)arg1 hintIndexPath:(id)arg2 hintCollection:(id)arg3 ;
-(void)_performNavigationRequestForAssetDisplayDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_finalizeAvalancheReviewControllerDismiss;
-(void)avalancheReviewControllerDidComplete:(id)arg1 animated:(BOOL)arg2 ;
-(void)_prepareForActivitySharingControllerDismiss:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_activitySharingControllerWillDismissActivityViewController:(id)arg1 ;
-(void)_activitySharingControllerDidCancel:(id)arg1 ;
-(void)_activitySharingController:(id)arg1 didCompleteWithActivityType:(id)arg2 success:(BOOL)arg3 ;
-(CGRect)_frameForItemAtIndexPath:(id)arg1 inAssetCollectionsDataSource:(id)arg2 allowZoom:(BOOL)arg3 ;
-(id)_assetCollectionsDataSourceForCurrentModalViewController;
-(void)ppt_tapNextButton:(/*^block*/id)arg1 ;
-(long long)_tileCountForCurrentModalViewController;
-(id)_assetReferenceAtGlobalIndex:(long long)arg1 ;
-(void)ppt_presentShareSheetWithCompletion:(/*^block*/id)arg1 ;
-(id)ppt_activityViewController;
-(void)ppt_shareUsingActivityOfType:(id)arg1 ;
-(void)ppt_dismissShareSheetWithCompletion:(/*^block*/id)arg1 ;
-(PUAvalancheReviewController *)_avalancheReviewController;
-(void)_setAvalancheReviewController:(id)arg1 ;
-(PUSlideshowViewController *)_slideshowViewController;
-(void)_setSlideshowViewController:(id)arg1 ;
-(PUEditViewController *)_editViewController;
-(void)_setEditViewController:(id)arg1 ;
-(PUPhotoMarkupViewController *)_photoMarkupViewController;
-(PUFunEffectsViewController *)_funEffectsViewController;
-(void)_setPhotoMarkupViewController:(id)arg1 ;
-(void)_setFunEffectsViewController:(id)arg1 ;
-(PUAssetReference *)_stashedAssetReference;
-(void)_setStashedAssetReference:(id)arg1 ;
-(NSHashTable *)_presentedViewControllers;
-(void)_setPresentedViewControllers:(id)arg1 ;
-(BOOL)_needsUpdatePresentedViewControllers;
-(void)_setNeedsUpdatePresentedViewControllers:(BOOL)arg1 ;
-(id<PXActivitySharingControllerDelegate>)activitySharingControllerDelegate;
-(void)setActivitySharingControllerDelegate:(id<PXActivitySharingControllerDelegate>)arg1 ;
-(id)_tilingView;
-(void)avalancheReviewControllerDidComplete:(id)arg1 withAsset:(id)arg2 animated:(BOOL)arg3 ;
-(void)setDelegate:(id<PUOverOneUpPresentationSessionDelegate>)arg1 ;
-(long long)_globalIndexForIndexPath:(id)arg1 ;
-(id)viewController;
-(id)_assetsDataSource;
-(id)_indexPathForGlobalIndex:(long long)arg1 ;
-(BOOL)prepareForDismissingForced:(BOOL)arg1 ;
-(void)dismissViewController:(id)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setBarsDelegate:(id<PUOverOneUpPresentationSessionBarsDelegate>)arg1 ;
-(id)_viewModel;
-(id)photosSharingTransition:(id)arg1 layoutForAssetReference:(id)arg2 ;
-(void)photosSharingTransitionWillAnimatePresentation:(id)arg1 ;
-(void)photosSharingTransition:(id)arg1 setVisibility:(BOOL)arg2 forAssetReference:(id)arg3 ;
-(id)photosSharingTransitionTransitioningView:(id)arg1 ;
-(CGPoint)photosSharingTransition:(id)arg1 contentOffsetForAssetReference:(id)arg2 ;
-(void)ppt_presentPhotoEditor;
-(long long)_numberOfItems;
-(void)_removeViewController:(id)arg1 ;
-(void)activitySharingControllerDidCancel:(id)arg1 ;
-(void)activitySharingControllerWillDismissActivityViewController:(id)arg1 ;
-(void)activitySharingController:(id)arg1 didCompleteWithActivityType:(id)arg2 success:(BOOL)arg3 ;
-(void)setActivitySharingController:(PUActivitySharingController *)arg1 ;
-(void)ppt_cancelActivity;
-(PUActivitySharingController *)activitySharingController;
@end

