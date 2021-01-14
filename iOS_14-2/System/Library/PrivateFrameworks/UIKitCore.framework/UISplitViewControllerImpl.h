/*
* Generated on Thursday, January 14, 2021 at 2:20:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class NSArray, NSString;


@protocol UISplitViewControllerImpl <NSObject>
@property (nonatomic,copy) NSArray * viewControllers; 
@property (assign,nonatomic,__weak) id<UISplitViewControllerDelegate> delegate; 
@property (assign,nonatomic) BOOL presentsWithGesture; 
@property (getter=isCollapsed,nonatomic,readonly) BOOL collapsed; 
@property (assign,nonatomic) long long preferredDisplayMode; 
@property (assign,nonatomic) double preferredPrimaryColumnWidthFraction; 
@property (assign,nonatomic) double minimumPrimaryColumnWidth; 
@property (assign,nonatomic) double maximumPrimaryColumnWidth; 
@property (assign,nonatomic) long long primaryEdge; 
@property (assign,nonatomic) float gutterWidth; 
@property (assign,nonatomic) BOOL hidesMasterViewInPortrait; 
@property (assign,nonatomic) BOOL prefersOverlayInRegularWidthPhone; 
@property (assign,nonatomic) BOOL usesDeviceOverlayPreferences; 
@property (setter=_setDisplayModeButtonItemTitle:,nonatomic,copy) NSString * _displayModeButtonItemTitle; 
@property (assign,setter=_setUsesExtraWidePrimaryColumn:,getter=_usesExtraWidePrimaryColumn,nonatomic) BOOL usesExtraWidePrimaryColumn; 
@property (assign,nonatomic) long long primaryBackgroundStyle; 
@property (nonatomic,readonly) long long style; 
@property (nonatomic,readonly) BOOL lockedForDelegateCallback; 
@property (nonatomic,readonly) BOOL inCollapsingToProposedTopColumnCallback; 
@optional
-(void)removeChildViewController:(id)arg1;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;

@required
-(void)setPrefersOverlayInRegularWidthPhone:(BOOL)arg1;
-(void)viewDidAppear:(BOOL)arg1;
-(CGSize*)_contentSizeForChildViewController:(id)arg1 inPopoverController:(id)arg2;
-(BOOL)_iPhoneShouldUseOverlayInCurrentEnvironment;
-(double)minimumPrimaryColumnWidth;
-(void)setPreferredPrimaryColumnWidthFraction:(double)arg1;
-(void)_willShowCollapsedDetailViewController:(id)arg1 inTargetController:(id)arg2;
-(BOOL)_usesExtraWidePrimaryColumn;
-(void)setGutterWidth:(float)arg1;
-(BOOL)isCollapsed;
-(id)masterViewController;
-(double)maximumPrimaryColumnWidth;
-(BOOL)shouldUpdateFocusInContext:(id)arg1;
-(BOOL)_layoutPrimaryOnRight;
-(long long)primaryEdge;
-(void)setPresentsWithGesture:(BOOL)arg1;
-(void)_popoverController:(id)arg1 willChangeToVisible:(BOOL)arg2;
-(void)setPrimaryBackgroundStyle:(long long)arg1;
-(id)_traitCollectionForChildEnvironment:(id)arg1;
-(void)unloadViewForced:(BOOL)arg1;
-(void)setPrimaryEdge:(long long)arg1;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
-(id)_allContainedViewControllers;
-(double)preferredPrimaryColumnWidthFraction;
-(void)_didEndSnapshotSession;
-(void)showViewController:(id)arg1 sender:(id)arg2;
-(id)preferredFocusedView;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
-(BOOL)_isAnimating;
-(BOOL)inCollapsingToProposedTopColumnCallback;
-(void)_setDisplayModeButtonItemTitle:(id)arg1;
-(void)_willBeginSnapshotSession;
-(id)_deepestActionResponder;
-(void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
-(id)_nextVisibleViewControllerForResponderAfterChildViewController:(id)arg1;
-(double)_contentMarginForChildViewController:(id)arg1;
-(id)initWithSplitViewController:(id)arg1;
-(BOOL)_shouldPersistViewWhenCoding;
-(BOOL)usesDeviceOverlayPreferences;
-(id)_primaryContentResponder;
-(double)_primaryDividerPosition;
-(float)gutterWidth;
-(void)decodeRestorableStateWithCoder:(id)arg1;
-(void)_popoverController:(id)arg1 didChangeFromVisible:(BOOL)arg2;
-(void)_updateChildContentMargins;
-(NSString *)_displayModeButtonItemTitle;
-(void)setViewControllers:(id)arg1;
-(BOOL)presentsWithGesture;
-(id)preferredFocusEnvironments;
-(void)didRotateFromInterfaceOrientation:(long long)arg1;
-(BOOL)prefersOverlayInRegularWidthPhone;
-(id)detailViewController;
-(long long)primaryBackgroundStyle;
-(long long)preferredDisplayMode;
-(CGRect*)_frameForChildContentContainer:(id)arg1;
-(BOOL)_disableAutomaticKeyboardBehavior;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
-(UIEdgeInsets*)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2;
-(BOOL)_isCollapsed;
-(id)displayModeButtonItem;
-(void)_descendantWillPresentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animated:(BOOL)arg4;
-(void)_displayModeBarButtonItemWasUsedForFirstTime:(id)arg1;
-(void)toggleMasterVisible:(id)arg1;
-(long long)preferredTrailingStatusBarStyle;
-(void)setUsesDeviceOverlayPreferences:(BOOL)arg1;
-(BOOL)_hasPreferredInterfaceOrientationForPresentation;
-(void)setMaximumPrimaryColumnWidth:(double)arg1;
-(void)_didChangeToFirstResponder:(id)arg1;
-(void)_marginInfoForChild:(id)arg1 leftMargin:(double*)arg2 rightMargin:(double*)arg3;
-(double)primaryColumnWidth;
-(BOOL)_handlesCounterRotationForPresentation;
-(BOOL)hidesMasterViewInPortrait;
-(void)setHidesMasterViewInPortrait:(BOOL)arg1;
-(id)_additionalViewControllersToCheckForUserActivity;
-(void)encodeRestorableStateWithCoder:(id)arg1;
-(BOOL)_isRotating;
-(void)setPreferredDisplayMode:(long long)arg1;
-(void)_getRotationContentSettings:(SCD_Struct_UI53*)arg1;
-(long long)preferredLeadingStatusBarStyle;
-(BOOL)_optsOutOfPopoverControllerHierarchyCheck;
-(BOOL)lockedForDelegateCallback;
-(NSArray *)viewControllers;
-(void)_setUsesExtraWidePrimaryColumn:(BOOL)arg1;
-(id)_multitaskingDragExclusionRects;
-(void)_updateLayoutForStatusBarAndInterfaceOrientation;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
-(double)_supplementaryDividerPosition;
-(id)_primaryDimmingView;
-(void)setMinimumPrimaryColumnWidth:(double)arg1;
-(void)showDetailViewController:(id)arg1 sender:(id)arg2;
-(long long)preferredInterfaceOrientationForPresentation;
-(id)_childViewControllersToSendViewWillTransitionToSize;
-(id<UISplitViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1;
-(void)viewWillAppear:(BOOL)arg1;
-(void)encodeWithCoder:(id)arg1;
-(void)_initWithCoder:(id)arg1;
-(long long)displayMode;
-(unsigned long long)supportedInterfaceOrientations;
-(CGSize*)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2;
-(void)setDelegate:(id)arg1;
-(id)childViewControllerForStatusBarStyle;
-(void)viewDidDisappear:(BOOL)arg1;
-(void)_commonInit;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1;
-(void)viewDidLayoutSubviews;
-(long long)style;

@end

