/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PUViewControllerSpecChangeObserver.h>
#import <libobjc.A.dylib/PUPhotoEditLayoutDynamicAdaptable.h>

@protocol PUEditableAsset, PUPhotoEditToolControllerDelegate;
@class NSString, CEKEdgeGradientView, _PUPhotoEditToolGradientView, PICompositionController, PLEditSource, PUPhotoEditValuesCalculator, PUPhotoEditToolControllerSpec, PUPhotoEditViewControllerSpec, PUPhotoEditAggregateSession, UIView, UIImage, UIButton, NSMutableArray, PFSlowMotionTimeRangeMapper, UIColor, NURenderPipelineFilter, NSArray;

@interface PUPhotoEditToolController : UIViewController <PUViewControllerSpecChangeObserver, PUPhotoEditLayoutDynamicAdaptable> {

	NSString* _backdropViewGroupName;
	CEKEdgeGradientView* _gradientMask;
	_PUPhotoEditToolGradientView* _gradientView;
	BOOL _performingLiveInteraction;
	long long _layoutOrientation;
	id<PUEditableAsset> _asset;
	PICompositionController* _compositionController;
	PLEditSource* _editSource;
	PLEditSource* _overcaptureEditSource;
	PUPhotoEditValuesCalculator* _valuesCalculator;
	PUPhotoEditToolControllerSpec* _toolControllerSpec;
	PUPhotoEditViewControllerSpec* _photoEditSpec;
	id<PUPhotoEditToolControllerDelegate> _delegate;
	PUPhotoEditAggregateSession* _aggregateSession;
	UIView* _toolContainerView;
	double _toolGradientDistance;
	NSString* _localizedName;
	UIImage* _toolbarIcon;
	UIImage* _selectedToolbarIcon;
	UIButton* _preferredAlternateToolbarButton;
	UIView* _leftToolbarView;
	NSMutableArray* _mutableEditActionActivites;
	PFSlowMotionTimeRangeMapper* _slowMotionTimeMapper;
	/*^block*/id _ppt_didBecomeActiveToolBlock;

}

@property (nonatomic,retain) NSMutableArray * mutableEditActionActivites;                                    //@synthesize mutableEditActionActivites=_mutableEditActionActivites - In the implementation block
@property (nonatomic,retain) PFSlowMotionTimeRangeMapper * slowMotionTimeMapper;                             //@synthesize slowMotionTimeMapper=_slowMotionTimeMapper - In the implementation block
@property (nonatomic,retain) PUPhotoEditToolControllerSpec * toolControllerSpec;                             //@synthesize toolControllerSpec=_toolControllerSpec - In the implementation block
@property (assign,getter=isPerformingLiveInteraction,nonatomic) BOOL performingLiveInteraction;              //@synthesize performingLiveInteraction=_performingLiveInteraction - In the implementation block
@property (nonatomic,retain) UIButton * preferredAlternateToolbarButton;                                     //@synthesize preferredAlternateToolbarButton=_preferredAlternateToolbarButton - In the implementation block
@property (nonatomic,retain) PUPhotoEditAggregateSession * aggregateSession;                                 //@synthesize aggregateSession=_aggregateSession - In the implementation block
@property (nonatomic,copy) id ppt_didBecomeActiveToolBlock;                                                  //@synthesize ppt_didBecomeActiveToolBlock=_ppt_didBecomeActiveToolBlock - In the implementation block
@property (nonatomic,readonly) id<PUEditableAsset> asset;                                                    //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) PICompositionController * compositionController;                              //@synthesize compositionController=_compositionController - In the implementation block
@property (nonatomic,readonly) PICompositionController * uneditedCompositionController; 
@property (nonatomic,readonly) PLEditSource * editSource;                                                    //@synthesize editSource=_editSource - In the implementation block
@property (nonatomic,readonly) PLEditSource * overcaptureEditSource;                                         //@synthesize overcaptureEditSource=_overcaptureEditSource - In the implementation block
@property (nonatomic,readonly) PUPhotoEditValuesCalculator * valuesCalculator;                               //@synthesize valuesCalculator=_valuesCalculator - In the implementation block
@property (nonatomic,retain) PUPhotoEditViewControllerSpec * photoEditSpec;                                  //@synthesize photoEditSpec=_photoEditSpec - In the implementation block
@property (assign,nonatomic,__weak) id<PUPhotoEditToolControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIView * toolContainerView;                                                   //@synthesize toolContainerView=_toolContainerView - In the implementation block
@property (assign,nonatomic) double toolGradientDistance;                                                    //@synthesize toolGradientDistance=_toolGradientDistance - In the implementation block
@property (nonatomic,readonly) NSString * localizedName;                                                     //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,readonly) UIImage * toolbarIcon;                                                        //@synthesize toolbarIcon=_toolbarIcon - In the implementation block
@property (nonatomic,readonly) UIImage * selectedToolbarIcon;                                                //@synthesize selectedToolbarIcon=_selectedToolbarIcon - In the implementation block
@property (nonatomic,readonly) BOOL canResetToDefaultValue; 
@property (nonatomic,readonly) NSString * localizedResetToolActionTitle; 
@property (nonatomic,readonly) UIEdgeInsets preferredPreviewViewInsets; 
@property (nonatomic,readonly) BOOL wantsDefaultPreviewView; 
@property (nonatomic,copy,readonly) UIColor * preferredPreviewBackgroundColor; 
@property (nonatomic,readonly) BOOL wantsZoomAndPanEnabled; 
@property (nonatomic,readonly) BOOL wantsSecondaryToolbarVisible; 
@property (nonatomic,readonly) BOOL suppressesEditUpdates; 
@property (nonatomic,readonly) BOOL handlesMediaViewInsets; 
@property (nonatomic,copy,readonly) NURenderPipelineFilter * filter; 
@property (nonatomic,copy) NSString * backdropViewGroupName;                                                 //@synthesize backdropViewGroupName=_backdropViewGroupName - In the implementation block
@property (nonatomic,readonly) UIView * leftToolbarView;                                                     //@synthesize leftToolbarView=_leftToolbarView - In the implementation block
@property (nonatomic,readonly) UIView * centerToolbarView; 
@property (nonatomic,readonly) long long toolControllerTag; 
@property (nonatomic,readonly) NSArray * editActionActivities; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long layoutOrientation;                                                    //@synthesize layoutOrientation=_layoutOrientation - In the implementation block
-(NSString *)localizedName;
-(long long)layoutOrientation;
-(NURenderPipelineFilter *)filter;
-(BOOL)wantsSecondaryToolbarVisible;
-(void)baseLivePhotoInvalidated;
-(PUPhotoEditValuesCalculator *)valuesCalculator;
-(void)basePhotoInvalidated;
-(id<PUPhotoEditToolControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)prepareForToolTransitionWithCompletion:(/*^block*/id)arg1 ;
-(UIEdgeInsets)preferredPreviewViewInsets;
-(BOOL)wantsDefaultPreviewView;
-(id<PUEditableAsset>)asset;
-(BOOL)suppressesEditUpdates;
-(BOOL)handlesMediaViewInsets;
-(BOOL)canBecomeActiveTool;
-(void)willResignActiveTool;
-(void)prepareForSave:(BOOL)arg1 ;
-(void)leavingEditWithCancel;
-(void)didResignActiveTool;
-(id)leadingToolbarViews;
-(id)trailingToolbarViews;
-(UIImage *)toolbarIcon;
-(void)setupWithAsset:(id)arg1 compositionController:(id)arg2 editSource:(id)arg3 overcaptureEditSource:(id)arg4 valuesCalculator:(id)arg5 ;
-(void)mediaViewIsReady;
-(void)setUseGradientBackground:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIView *)centerToolbarView;
-(BOOL)canResetToDefaultValue;
-(NSString *)localizedResetToolActionTitle;
-(void)willBecomeActiveTool;
-(void)resetToDefaultValueAnimated:(BOOL)arg1 ;
-(BOOL)wantsZoomAndPanEnabled;
-(BOOL)installTogglePreviewGestureRecognizer:(id)arg1 ;
-(BOOL)installLivePhotoPlaybackGestureRecognizer:(id)arg1 ;
-(void)didBecomeActiveTool;
-(long long)toolControllerTag;
-(void)specDidChange;
-(void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)compositionControllerDidChangeForAdjustments:(id)arg1 ;
-(PUPhotoEditToolControllerSpec *)toolControllerSpec;
-(UIView *)toolContainerView;
-(PUPhotoEditViewControllerSpec *)photoEditSpec;
-(void)setToolControllerSpec:(PUPhotoEditToolControllerSpec *)arg1 ;
-(SCD_Struct_PH4)displayedTimeForOriginalAssetTime:(SCD_Struct_PH4)arg1 ;
-(void)removeEditActionActivity:(id)arg1 ;
-(void)addEditActionActivity:(id)arg1 ;
-(id)accessibilityHUDItemForButton:(id)arg1 ;
-(void)setPhotoEditSpec:(PUPhotoEditViewControllerSpec *)arg1 ;
-(PUPhotoEditAggregateSession *)aggregateSession;
-(void)setToolGradientDistance:(double)arg1 ;
-(SCD_Struct_PH4)originalAssetTimeForDisplayedTime:(SCD_Struct_PH4)arg1 ;
-(void)setDelegate:(id<PUPhotoEditToolControllerDelegate>)arg1 ;
-(void)setLayoutOrientation:(long long)arg1 ;
-(void)setOriginalStillImageTime:(SCD_Struct_PH4)arg1 ;
-(void)updateForIncomingAnimation;
-(void)photoEditLivePhotoModelUpdated;
-(void)mediaViewWillBeginZooming:(id)arg1 ;
-(void)mediaViewDidEndZooming:(id)arg1 ;
-(void)reloadToolbarButtons:(BOOL)arg1 ;
-(void)updateToolbarButtonsAnimated:(BOOL)arg1 ;
-(CGRect)contentRectInCoordinateSpace:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)_newTimeMapper;
-(UIColor *)preferredPreviewBackgroundColor;
-(PICompositionController *)uneditedCompositionController;
-(void)_layoutToolGradient;
-(NSArray *)editActionActivities;
-(BOOL)canShowCommonTools;
-(void)_updateTraitCollectionAndLayoutReferenceSize:(CGSize)arg1 ;
-(void)_updateTraitCollectionAndLayoutReferenceSize;
-(void)setPerformingLiveInteraction:(BOOL)arg1 ;
-(void)setPreferredAlternateToolbarButton:(UIButton *)arg1 ;
-(void)setAggregateSession:(PUPhotoEditAggregateSession *)arg1 ;
-(double)toolGradientDistance;
-(UIImage *)selectedToolbarIcon;
-(BOOL)isPerformingLiveInteraction;
-(UIButton *)preferredAlternateToolbarButton;
-(UIView *)leftToolbarView;
-(NSMutableArray *)mutableEditActionActivites;
-(void)setMutableEditActionActivites:(NSMutableArray *)arg1 ;
-(PFSlowMotionTimeRangeMapper *)slowMotionTimeMapper;
-(void)setSlowMotionTimeMapper:(PFSlowMotionTimeRangeMapper *)arg1 ;
-(id)ppt_didBecomeActiveToolBlock;
-(void)setPpt_didBecomeActiveToolBlock:(id)arg1 ;
-(void)setBackdropViewGroupName:(NSString *)arg1 ;
-(void)setPlaceholderImage:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(NSString *)backdropViewGroupName;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(BOOL)prefersHomeIndicatorAutoHidden;
-(PICompositionController *)compositionController;
-(PLEditSource *)editSource;
-(PLEditSource *)overcaptureEditSource;
-(void)viewControllerSpec:(id)arg1 didChange:(id)arg2 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

