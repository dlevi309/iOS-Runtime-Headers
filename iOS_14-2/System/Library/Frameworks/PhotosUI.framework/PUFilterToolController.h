/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUPhotoEditToolController.h>
#import <libobjc.A.dylib/CEKWheelScrubberViewDelegate.h>
#import <libobjc.A.dylib/CEKSliderDelegate.h>

@class CEKBadgeTextView, CEKWheelScrubberView, CEKSlider, CIImage, NSMutableDictionary, NSMutableArray, NSLayoutConstraint, NSNumberFormatter, CIContext, NSString;

@interface PUFilterToolController : PUPhotoEditToolController <CEKWheelScrubberViewDelegate, CEKSliderDelegate> {

	CEKBadgeTextView* _filterBadgeView;
	CEKWheelScrubberView* _scrubberView;
	CEKSlider* _slider;
	BOOL _isSliderTouchDown;
	CIImage* _inputImage;
	BOOL _monitorAdjustmentsForCache;
	NSMutableDictionary* _filterThumbnailCache;
	NSMutableDictionary* _filterIntensityCache;
	NSMutableArray* _toolConstraints;
	NSMutableArray* _scrubberViewConstraints;
	NSMutableArray* _filterBadgeViewConstraints;
	NSLayoutConstraint* _filterBadgeWidthConstraint;
	NSLayoutConstraint* _filterBadgeHeightConstraint;
	NSNumberFormatter* _formatter;
	CIContext* _context;
	SCD_Struct_PH4 _thumbnailTime;
	/*^block*/id _willLoadFilterThumbnails;
	/*^block*/id _didFinishLoadingFilterThumbnails;

}

@property (nonatomic,copy) id willLoadFilterThumbnails;                      //@synthesize willLoadFilterThumbnails=_willLoadFilterThumbnails - In the implementation block
@property (nonatomic,copy) id didFinishLoadingFilterThumbnails;              //@synthesize didFinishLoadingFilterThumbnails=_didFinishLoadingFilterThumbnails - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)updateViewConstraints;
-(void)wheelScrubberViewDidChangeSelectedIndex:(id)arg1 ;
-(id)localizedName;
-(void)setDidFinishLoadingFilterThumbnails:(id)arg1 ;
-(void)setWillLoadFilterThumbnails:(id)arg1 ;
-(void)wheelScrubberView:(id)arg1 updateCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3 ;
-(void)didResignActiveTool;
-(id)toolbarIcon;
-(id)centerToolbarView;
-(void)willBecomeActiveTool;
-(BOOL)wantsZoomAndPanEnabled;
-(BOOL)installTogglePreviewGestureRecognizer:(id)arg1 ;
-(BOOL)installLivePhotoPlaybackGestureRecognizer:(id)arg1 ;
-(long long)toolControllerTag;
-(void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)compositionControllerDidChangeForAdjustments:(id)arg1 ;
-(void)sliderWillBeginScrolling:(id)arg1 ;
-(void)sliderDidScroll:(id)arg1 ;
-(void)sliderDidEndScrolling:(id)arg1 ;
-(void)sliderWillEndScrolling:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)_sliderDidEndScrolling;
-(void)_updateToolConstraints;
-(void)wheelScrubberViewWillBeginScrolling:(id)arg1 ;
-(void)wheelScrubberViewDidEndScrolling:(id)arg1 ;
-(void)_setupScrubber;
-(void)_setupFilters;
-(void)_setupSlider;
-(void)_updateWithCompositionController:(id)arg1 ;
-(void)_prepareThumbnailImagesIfNeeded;
-(void)_updateCacheWithCIImage:(id)arg1 ;
-(void)_setThumbnail:(id)arg1 forKey:(id)arg2 ;
-(void)_updateBadgeConstraints;
-(void)_updateScrubberLayout;
-(long long)_adjustedFilterIndex;
-(id)_effectAdjustment;
-(id)_adjustedFilterName;
-(double)_adjustedFilterIntensity;
-(id)_effectForIndex:(long long)arg1 ;
-(long long)_indexForFilterId:(id)arg1 ;
-(void)_updateBadgeAndSliderWithEffect:(id)arg1 ;
-(void)_setShowSlider:(BOOL)arg1 animate:(BOOL)arg2 ;
-(void)_updateFilterIntensityCache;
-(void)_updateIntensityForEffect:(id)arg1 ;
-(void)_updateSelectionTextAnimate:(BOOL)arg1 ;
-(id)willLoadFilterThumbnails;
-(id)didFinishLoadingFilterThumbnails;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

