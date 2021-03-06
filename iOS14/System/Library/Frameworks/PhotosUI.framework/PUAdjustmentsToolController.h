/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUPhotoEditToolController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PUAdjustmentsDataSourceDelegate.h>
#import <libobjc.A.dylib/PUAdjustmentViewControllerDelegate.h>
#import <libobjc.A.dylib/PUAdjustmentsToolControllerPPT.h>

@class PUAdjustmentsViewController, UIView, _UIBackdropView, PUAutoAdjustmentController, PXUISnappingController, PUAdjustmentsDataSource, CEKBadgeTextView, PUAdjustmentsToolControllerSpec, NSString;

@interface PUAdjustmentsToolController : PUPhotoEditToolController <UIGestureRecognizerDelegate, PUAdjustmentsDataSourceDelegate, PUAdjustmentViewControllerDelegate, PUAdjustmentsToolControllerPPT> {

	PUAdjustmentsViewController* _adjustmentsViewController;
	UIView* _adjustmentPickerView;
	_UIBackdropView* _backdropBackgroundView;
	UIView* _solidBackgroundView;
	BOOL _useTranslucentBackground;
	BOOL _ppt_EverAdjusted;
	double _ppt_scrollDelta;
	long long _viewLoadingStartTime;
	PUAutoAdjustmentController* _autoAdjustmentController;
	PXUISnappingController* __snappingController;
	PUAdjustmentsDataSource* _dataSource;
	CEKBadgeTextView* _badgeView;

}

@property (setter=_setSnappingController:,nonatomic,retain) PXUISnappingController * _snappingController;              //@synthesize _snappingController=__snappingController - In the implementation block
@property (nonatomic,retain) PUAdjustmentsDataSource * dataSource;                                                     //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) CEKBadgeTextView * badgeView;                                                             //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,retain) PUAutoAdjustmentController * autoAdjustmentController;                                    //@synthesize autoAdjustmentController=_autoAdjustmentController - In the implementation block
@property (nonatomic,readonly) PUAdjustmentsToolControllerSpec * toolControllerSpec; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)localizedName;
-(CEKBadgeTextView *)badgeView;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)autoEnhanceActionStateChanged;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)adjustmentsDataChanged:(id)arg1 ;
-(id)adjustmentsRenderer:(id)arg1 ;
-(void)ppt_selectLightSlider:(/*^block*/id)arg1 ;
-(void)ppt_selectColorSlider:(/*^block*/id)arg1 ;
-(void)ppt_selectBWSlider:(/*^block*/id)arg1 ;
-(void)ppt_scrollSelectedSliderByDelta;
-(void)ppt_setSteps:(long long)arg1 ;
-(id)toolbarIcon;
-(void)adjustmentsViewControllerDidUpdateSelectedControl:(id)arg1 ;
-(void)setupWithAsset:(id)arg1 compositionController:(id)arg2 editSource:(id)arg3 overcaptureEditSource:(id)arg4 valuesCalculator:(id)arg5 ;
-(void)mediaViewIsReady;
-(void)updateAdjustmentControls;
-(void)_updateBackgroundAnimated:(BOOL)arg1 ;
-(void)setUseGradientBackground:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateBadgeTextWithInfo:(id)arg1 ;
-(id)centerToolbarView;
-(BOOL)canResetToDefaultValue;
-(id)localizedResetToolActionTitle;
-(void)willBecomeActiveTool;
-(void)resetToDefaultValueAnimated:(BOOL)arg1 ;
-(BOOL)wantsZoomAndPanEnabled;
-(BOOL)installTogglePreviewGestureRecognizer:(id)arg1 ;
-(BOOL)installLivePhotoPlaybackGestureRecognizer:(id)arg1 ;
-(void)didBecomeActiveTool;
-(long long)toolControllerTag;
-(void)specDidChange;
-(double)_sliderLength;
-(void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)compositionControllerDidChangeForAdjustments:(id)arg1 ;
-(void)_ppt_scrollAfterDelay:(/*^block*/id)arg1 ;
-(PUAutoAdjustmentController *)autoAdjustmentController;
-(void)setAutoAdjustmentController:(PUAutoAdjustmentController *)arg1 ;
-(PXUISnappingController *)_snappingController;
-(void)_setSnappingController:(id)arg1 ;
-(void)setBadgeView:(CEKBadgeTextView *)arg1 ;
-(PUAdjustmentsDataSource *)dataSource;
-(void)setDataSource:(PUAdjustmentsDataSource *)arg1 ;
-(void)viewDidLoad;
-(void)setBackdropViewGroupName:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

