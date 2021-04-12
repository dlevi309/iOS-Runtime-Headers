/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@optional
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
-(void)removeChildViewController:(id)arg1;

@required
-(void)encodeWithCoder:(id)arg1;
-(id<UISplitViewControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)_initWithCoder:(id)arg1;
-(void)_commonInit;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1;
-(BOOL)shouldUpdateFocusInContext:(id)arg1;
-(id)preferredFocusEnvironments;
-(id)preferredFocusedView;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewWillDisappear:(BOOL)arg1;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1;
-(void)viewDidDisappear:(BOOL)arg1;
-(void)_getRotationContentSettings:(SCD_Struct_UI47*)arg1;
-(id)_traitCollectionForChildEnvironment:(id)arg1;
-(BOOL)isCollapsed;
-(void)_updateLayoutForStatusBarAndInterfaceOrientation;
-(long long)preferredLeadingStatusBarStyle;
-(long long)preferredTrailingStatusBarStyle;
-(void)encodeRestorableStateWithCoder:(id)arg1;
-(void)decodeRestorableStateWithCoder:(id)arg1;
-(void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
-(BOOL)_optsOutOfPopoverControllerHierarchyCheck;
-(CGRect*)_frameForChildContentContainer:(id)arg1;
-(CGSize*)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2;
-(BOOL)_handlesCounterRotationForPresentation;
-(NSArray *)viewControllers;
-(void)setViewControllers:(id)arg1;
-(long long)preferredInterfaceOrientationForPresentation;
-(BOOL)_hasPreferredInterfaceOrientationForPresentation;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
-(void)didRotateFromInterfaceOrientation:(long long)arg1;
-(BOOL)_shouldPersistViewWhenCoding;
-(id)childViewControllerForStatusBarStyle;
-(UIEdgeInsets*)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2;
-(id)_allContainedViewControllers;
-(id)_additionalViewControllersToCheckForUserActivity;
-(BOOL)_disableAutomaticKeyboardBehavior;
-(void)_updateChildContentMargins;
-(void)showViewController:(id)arg1 sender:(id)arg2;
-(id)_childViewControllersToSendViewWillTransitionToSize;
-(void)_marginInfoForChild:(id)arg1 leftMargin:(double*)arg2 rightMargin:(double*)arg3;
-(id)detailViewController;
-(void)_popoverController:(id)arg1 willChangeToVisible:(BOOL)arg2;
-(void)_popoverController:(id)arg1 didChangeFromVisible:(BOOL)arg2;
-(CGSize*)_contentSizeForChildViewController:(id)arg1 inPopoverController:(id)arg2;
-(BOOL)_isRotating;
-(id)masterViewController;
-(BOOL)_iPhoneShouldUseOverlayInCurrentEnvironment;
-(BOOL)_isCollapsed;
-(BOOL)_layoutPrimaryOnRight;
-(id)initWithSplitViewController:(id)arg1;
-(BOOL)presentsWithGesture;
-(void)setPresentsWithGesture:(BOOL)arg1;
-(long long)preferredDisplayMode;
-(void)setPreferredDisplayMode:(long long)arg1;
-(long long)displayMode;
-(id)displayModeButtonItem;
-(double)preferredPrimaryColumnWidthFraction;
-(void)setPreferredPrimaryColumnWidthFraction:(double)arg1;
-(double)minimumPrimaryColumnWidth;
-(void)setMinimumPrimaryColumnWidth:(double)arg1;
-(double)maximumPrimaryColumnWidth;
-(void)setMaximumPrimaryColumnWidth:(double)arg1;
-(double)primaryColumnWidth;
-(void)showDetailViewController:(id)arg1 sender:(id)arg2;
-(void)setPrimaryEdge:(long long)arg1;
-(long long)primaryEdge;
-(float)gutterWidth;
-(void)setGutterWidth:(float)arg1;
-(BOOL)hidesMasterViewInPortrait;
-(void)setHidesMasterViewInPortrait:(BOOL)arg1;
-(NSString *)_displayModeButtonItemTitle;
-(void)_setDisplayModeButtonItemTitle:(id)arg1;
-(id)_primaryDimmingView;
-(void)setPrefersOverlayInRegularWidthPhone:(BOOL)arg1;
-(BOOL)prefersOverlayInRegularWidthPhone;
-(void)setUsesDeviceOverlayPreferences:(BOOL)arg1;
-(BOOL)usesDeviceOverlayPreferences;
-(BOOL)_usesExtraWidePrimaryColumn;
-(void)_setUsesExtraWidePrimaryColumn:(BOOL)arg1;
-(void)_descendantWillPresentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animated:(BOOL)arg4;
-(void)_willShowCollapsedDetailViewController:(id)arg1 inTargetController:(id)arg2;
-(void)_willBeginSnapshotSession;
-(void)_didEndSnapshotSession;
-(void)toggleMasterVisible:(id)arg1;
-(void)setPrimaryBackgroundStyle:(long long)arg1;
-(long long)primaryBackgroundStyle;
-(void)unloadViewForced:(BOOL)arg1;
-(double)_contentMarginForChildViewController:(id)arg1;
-(void)_didChangeToFirstResponder:(id)arg1;
-(id)_primaryContentResponder;
-(void)_displayModeBarButtonItemWasUsedForFirstTime:(id)arg1;

@end

