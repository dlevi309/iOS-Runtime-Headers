/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CSScrollViewDelegate.h>
#import <libobjc.A.dylib/CSCoverSheetViewTransitionSource.h>
#import <libobjc.A.dylib/CSScrollableView.h>

@protocol CSCoverSheetViewDelegate, CSWallpaperView;
@class UIScrollView, SBUIBackgroundView, SBFPagedScrollView, UIView, UIVisualEffectView, SBFStatusBarLegibilityView, CSScrollModifier, CSLayoutStrategy, SBFLockScreenDateView, CSFixedFooterView, CSTeachableMomentsContainerView, CSQuickActionsView, UIGestureRecognizer, UITapGestureRecognizer, CSLocketForcePressGestureRecognizer, UIColor, _UILegibilitySettings, CSRegionsDebugView, NSArray, NSString;

@interface CSCoverSheetView : UIView <CSScrollViewDelegate, CSCoverSheetViewTransitionSource, CSScrollableView> {

	SBUIBackgroundView* _backgroundView;
	SBFPagedScrollView* _scrollView;
	UIView* _dateTimeClippingView;
	UIView* _authIndicator;
	UIView* _slideableContentView;
	UIView* _higherSlideableContentView;
	UIVisualEffectView* _dateEffectView;
	SBFStatusBarLegibilityView* _statusBarLegibilityView;
	BOOL _viewControllerAppearingOrAppeared;
	SCD_Struct_CS6 _transitionContext;
	double _scrollViewStartingXOffset;
	CSScrollModifier* _scrollModifier;
	unsigned long long _initialPageIndex;
	BOOL _shouldModifyPageScrolling;
	BOOL _ignoresOverscrollOnMainPage;
	BOOL _forceDateViewCentered;
	BOOL _dateViewIsVibrant;
	BOOL _legibilitySettingsOverrideVibrancy;
	BOOL _statusBarLegibilityEnabled;
	UIView* _bottomPage;
	id<CSCoverSheetViewDelegate> _delegate;
	CSLayoutStrategy* _layoutStrategy;
	UIView* _mainPageView;
	SBFLockScreenDateView* _dateView;
	CSFixedFooterView* _fixedFooterView;
	UIView* _proudLockContainerView;
	UIView* _cameraCoveredView;
	CSTeachableMomentsContainerView* _teachableMomentsContainerView;
	CSQuickActionsView* _quickActionsView;
	long long _dateViewPageAlignment;
	UIView* _fakeStatusBar;
	unsigned long long _fakeStatusBarLevel;
	UIVisualEffectView* _statusBarBackgroundView;
	long long _statusBarBackgroundPageAlignment;
	UIGestureRecognizer* _wallpaperGestureRecognizer;
	UITapGestureRecognizer* _quickNoteGestureRecognizer;
	CSLocketForcePressGestureRecognizer* _locketGestureRecognizer;
	UIView* _scalableContentView;
	UIView* _modalPresentationView;
	UIView* _wakeEffectView;
	UIView*<CSWallpaperView> _wallpaperEffectView;
	UIView* _tintingView;
	SBUIBackgroundView* _bedtimeGreetingViewBackgroundView;
	UIColor* _reduceTransparencyBackingColor;
	UIView* _referenceViewForBelowPresentationContext;
	_UILegibilitySettings* _legibilitySettings;
	unsigned long long _targetPageIndexForDraggingEnded;
	CSRegionsDebugView* _regionsDebugView;
	CGPoint _dateViewOffset;
	CGPoint _proudLockIconViewOffset;
	CGPoint _foregroundViewPositionOffset;

}

@property (nonatomic,retain) CSRegionsDebugView * regionsDebugView;                                        //@synthesize regionsDebugView=_regionsDebugView - In the implementation block
@property (assign,nonatomic,__weak) id<CSCoverSheetViewDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) CSLayoutStrategy * layoutStrategy;                                     //@synthesize layoutStrategy=_layoutStrategy - In the implementation block
@property (nonatomic,retain) SBFPagedScrollView * scrollView;                                              //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) NSArray * pageViews; 
@property (nonatomic,retain) UIView * mainPageView;                                                        //@synthesize mainPageView=_mainPageView - In the implementation block
@property (assign,nonatomic) BOOL ignoresOverscrollOnMainPage;                                             //@synthesize ignoresOverscrollOnMainPage=_ignoresOverscrollOnMainPage - In the implementation block
@property (nonatomic,retain) SBFLockScreenDateView * dateView;                                             //@synthesize dateView=_dateView - In the implementation block
@property (nonatomic,retain) CSFixedFooterView * fixedFooterView;                                          //@synthesize fixedFooterView=_fixedFooterView - In the implementation block
@property (nonatomic,retain) UIView * proudLockContainerView;                                              //@synthesize proudLockContainerView=_proudLockContainerView - In the implementation block
@property (nonatomic,retain) UIView * cameraCoveredView;                                                   //@synthesize cameraCoveredView=_cameraCoveredView - In the implementation block
@property (nonatomic,retain) CSTeachableMomentsContainerView * teachableMomentsContainerView;              //@synthesize teachableMomentsContainerView=_teachableMomentsContainerView - In the implementation block
@property (nonatomic,retain) CSQuickActionsView * quickActionsView;                                        //@synthesize quickActionsView=_quickActionsView - In the implementation block
@property (assign,nonatomic) CGPoint dateViewOffset;                                                       //@synthesize dateViewOffset=_dateViewOffset - In the implementation block
@property (assign,nonatomic) CGPoint proudLockIconViewOffset;                                              //@synthesize proudLockIconViewOffset=_proudLockIconViewOffset - In the implementation block
@property (assign,nonatomic) long long dateViewPageAlignment;                                              //@synthesize dateViewPageAlignment=_dateViewPageAlignment - In the implementation block
@property (assign,nonatomic) BOOL forceDateViewCentered;                                                   //@synthesize forceDateViewCentered=_forceDateViewCentered - In the implementation block
@property (assign,nonatomic) BOOL dateViewIsVibrant;                                                       //@synthesize dateViewIsVibrant=_dateViewIsVibrant - In the implementation block
@property (nonatomic,retain) UIView * fakeStatusBar;                                                       //@synthesize fakeStatusBar=_fakeStatusBar - In the implementation block
@property (assign,nonatomic) unsigned long long fakeStatusBarLevel;                                        //@synthesize fakeStatusBarLevel=_fakeStatusBarLevel - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * statusBarBackgroundView;                                 //@synthesize statusBarBackgroundView=_statusBarBackgroundView - In the implementation block
@property (assign,nonatomic) long long statusBarBackgroundPageAlignment;                                   //@synthesize statusBarBackgroundPageAlignment=_statusBarBackgroundPageAlignment - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * wallpaperGestureRecognizer;                             //@synthesize wallpaperGestureRecognizer=_wallpaperGestureRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * quickNoteGestureRecognizer;                          //@synthesize quickNoteGestureRecognizer=_quickNoteGestureRecognizer - In the implementation block
@property (nonatomic,retain) CSLocketForcePressGestureRecognizer * locketGestureRecognizer;                //@synthesize locketGestureRecognizer=_locketGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIView * bottomPage;                                                          //@synthesize bottomPage=_bottomPage - In the implementation block
@property (nonatomic,retain) UIView * scalableContentView;                                                 //@synthesize scalableContentView=_scalableContentView - In the implementation block
@property (nonatomic,readonly) UIView * slideableContentView;                                              //@synthesize slideableContentView=_slideableContentView - In the implementation block
@property (nonatomic,retain) UIView * modalPresentationView;                                               //@synthesize modalPresentationView=_modalPresentationView - In the implementation block
@property (nonatomic,retain) UIView * wakeEffectView;                                                      //@synthesize wakeEffectView=_wakeEffectView - In the implementation block
@property (nonatomic,retain) UIView*<CSWallpaperView> wallpaperEffectView;                                 //@synthesize wallpaperEffectView=_wallpaperEffectView - In the implementation block
@property (nonatomic,retain) UIView * tintingView;                                                         //@synthesize tintingView=_tintingView - In the implementation block
@property (nonatomic,retain) SBUIBackgroundView * backgroundView;                                          //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) SBUIBackgroundView * bedtimeGreetingViewBackgroundView;                       //@synthesize bedtimeGreetingViewBackgroundView=_bedtimeGreetingViewBackgroundView - In the implementation block
@property (nonatomic,retain) UIColor * reduceTransparencyBackingColor;                                     //@synthesize reduceTransparencyBackingColor=_reduceTransparencyBackingColor - In the implementation block
@property (assign,nonatomic) CGPoint foregroundViewPositionOffset;                                         //@synthesize foregroundViewPositionOffset=_foregroundViewPositionOffset - In the implementation block
@property (assign,nonatomic,__weak) UIView * referenceViewForBelowPresentationContext;                     //@synthesize referenceViewForBelowPresentationContext=_referenceViewForBelowPresentationContext - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                   //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic) BOOL legibilitySettingsOverrideVibrancy;                                      //@synthesize legibilitySettingsOverrideVibrancy=_legibilitySettingsOverrideVibrancy - In the implementation block
@property (assign,nonatomic) BOOL statusBarLegibilityEnabled;                                              //@synthesize statusBarLegibilityEnabled=_statusBarLegibilityEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long targetPageIndexForDraggingEnded;                           //@synthesize targetPageIndexForDraggingEnded=_targetPageIndexForDraggingEnded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
@property (getter=isTransitioning,nonatomic,readonly) BOOL transitioning; 
@property (nonatomic,readonly) SCD_Struct_CS7 transitionContext; 
-(id<CSCoverSheetViewDelegate>)delegate;
-(void)setDelegate:(id<CSCoverSheetViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(SBUIBackgroundView *)backgroundView;
-(void)layoutSubviews;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(SCD_Struct_CS7)transitionContext;
-(void)didAddSubview:(id)arg1 ;
-(void)_orderSubviews;
-(void)setBackgroundView:(SBUIBackgroundView *)arg1 ;
-(void)setBackgroundStyle:(long long)arg1 ;
-(SBFPagedScrollView *)scrollView;
-(void)setScrollView:(SBFPagedScrollView *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(BOOL)isTransitioning;
-(long long)backgroundStyle;
-(NSArray *)pageViews;
-(void)setPageViews:(NSArray *)arg1 ;
-(SCD_Struct_CS7)_currentTransitionContext;
-(void)cancelTransition;
-(SBFLockScreenDateView *)dateView;
-(void)setDateView:(SBFLockScreenDateView *)arg1 ;
-(CGPoint)_scrollView:(id)arg1 adjustedOffsetForOffset:(CGPoint)arg2 translation:(CGPoint)arg3 startPoint:(CGPoint)arg4 locationInView:(CGPoint)arg5 horizontalVelocity:(inout double*)arg6 verticalVelocity:(inout double*)arg7 ;
-(void)scrollViewDidScroll:(id)arg1 withContext:(SCD_Struct_CS9)arg2 ;
-(void)scrollViewWillBeginScrolling:(id)arg1 ;
-(void)scrollViewDidEndScrolling:(id)arg1 ;
-(void)setStatusBarBackgroundView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)statusBarBackgroundView;
-(BOOL)scrollToPageAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setWakeEffectView:(UIView *)arg1 ;
-(UIView *)wakeEffectView;
-(UIView *)cameraCoveredView;
-(void)_layoutDateView;
-(void)setReduceTransparencyBackingColor:(UIColor *)arg1 ;
-(void)beginTransitionToBackgroundStyle:(long long)arg1 ;
-(void)completeTransitionToBackgroundStyle:(long long)arg1 ;
-(void)updateBackgroundStyleTransitionProgress:(double)arg1 ;
-(BOOL)isTransitioningBackgroundStyle;
-(UIView *)fakeStatusBar;
-(void)setFakeStatusBar:(UIView *)arg1 ;
-(void)_updateLegibility;
-(long long)participantState;
-(void)viewControllerDidDisappear;
-(void)_layoutWallpaperEffectView;
-(void)setWallpaperEffectView:(UIView*<CSWallpaperView>)arg1 ;
-(UIView*<CSWallpaperView>)wallpaperEffectView;
-(CSQuickActionsView *)quickActionsView;
-(NSString *)coverSheetIdentifier;
-(CSLayoutStrategy *)layoutStrategy;
-(void)setLayoutStrategy:(CSLayoutStrategy *)arg1 ;
-(unsigned long long)_indexOfMainPage;
-(void)setIgnoresOverscrollOnMainPage:(BOOL)arg1 ;
-(CSFixedFooterView *)fixedFooterView;
-(void)setFixedFooterView:(CSFixedFooterView *)arg1 ;
-(CSTeachableMomentsContainerView *)teachableMomentsContainerView;
-(void)setTeachableMomentsContainerView:(CSTeachableMomentsContainerView *)arg1 ;
-(void)setProudLockContainerView:(UIView *)arg1 ;
-(void)setCameraCoveredView:(UIView *)arg1 ;
-(BOOL)resetScrollViewToMainPageAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setQuickActionsView:(CSQuickActionsView *)arg1 ;
-(void)viewControllerWillAppear;
-(void)updateUIForAuthenticated:(BOOL)arg1 ;
-(SBUIBackgroundView *)bedtimeGreetingViewBackgroundView;
-(void)setBedtimeGreetingViewBackgroundView:(SBUIBackgroundView *)arg1 ;
-(void)setWallpaperGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(void)setRegionsDebugView:(CSRegionsDebugView *)arg1 ;
-(void)setTargetPageIndexForDraggingEnded:(unsigned long long)arg1 ;
-(void)setReferenceViewForBelowPresentationContext:(UIView *)arg1 ;
-(void)setMainPageView:(UIView *)arg1 ;
-(CGRect)dateViewPresentationExtentForPageRelativeScrollOffset:(double)arg1 ;
-(CSRegionsDebugView *)regionsDebugView;
-(void)setForegroundViewPositionOffset:(CGPoint)arg1 ;
-(void)setDateViewIsVibrant:(BOOL)arg1 ;
-(void)setForceDateViewCentered:(BOOL)arg1 ;
-(void)setDateViewPageAlignment:(long long)arg1 ;
-(void)setDateViewOffset:(CGPoint)arg1 ;
-(CGPoint)dateViewOffset;
-(void)setProudLockIconViewOffset:(CGPoint)arg1 ;
-(void)setFakeStatusBarLevel:(unsigned long long)arg1 ;
-(void)setStatusBarBackgroundPageAlignment:(long long)arg1 ;
-(void)updateScalableContentTransformWithScale:(double)arg1 ;
-(UIView *)tintingView;
-(void)updateStatusBarLegibilityForForceLegibilityGradientHidden:(BOOL)arg1 ;
-(UITapGestureRecognizer *)quickNoteGestureRecognizer;
-(void)setQuickNoteGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setLocketGestureRecognizer:(CSLocketForcePressGestureRecognizer *)arg1 ;
-(void)addScalableContentView;
-(UIView *)scalableContentView;
-(void)removeScalableContentView;
-(void)setModalPresentationView:(UIView *)arg1 ;
-(BOOL)resetScrollViewToMainPageAnimated:(BOOL)arg1 withAnimationSettings:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(UIGestureRecognizer *)wallpaperGestureRecognizer;
-(void)_addBackgroundView;
-(void)_addSlideableContentView;
-(void)_addHigherSlideableContentView;
-(void)_addDateTimeContainer;
-(void)_addScrollView;
-(void)_addAuthIndicator;
-(void)_addTintingView;
-(void)_addStatusBarLegibilityView;
-(void)_layoutFakeStatusBar;
-(void)_layoutStatusBarBackgroundView;
-(void)_setupWallpaperGestureOnScrollView:(BOOL)arg1 ;
-(void)_setupQuickNoteGestureOnScrollView:(BOOL)arg1 ;
-(void)_setupLocketGestureOnScrollView:(BOOL)arg1 ;
-(void)_layoutProudLockView;
-(void)_layoutBottomPage;
-(void)_setDateView:(id)arg1 forTesting:(BOOL)arg2 ;
-(void)_layoutHigherSlideableContentView;
-(CGRect)_dateViewFrameForPageAlignment:(long long)arg1 pageRelativeScrollOffset:(double)arg2 outAlignmentPercent:(double*)arg3 ;
-(void)_addScalableContentView;
-(void)_removeScalableContentView;
-(void)_layoutFullScreenViews;
-(void)_layoutDateTimeViewClippingView;
-(void)_layoutAuthIndicator;
-(void)_layoutTintingView;
-(void)_layoutTeachableMomentsContainerView;
-(void)_layoutQuickActionsView;
-(void)_layoutStatusBarLegibilityView;
-(SCD_Struct_CS7)_completedTransitionContextForPreviousTransitionContext:(SCD_Struct_CS7)arg1 newTransitionContext:(SCD_Struct_CS7)arg2 ;
-(BOOL)ignoresOverscrollOnMainPage;
-(CGRect)_overlayClippingFrame;
-(UIView *)mainPageView;
-(UIView *)bottomPage;
-(UIView *)referenceViewForBelowPresentationContext;
-(BOOL)coverSheetScrollView:(id)arg1 shouldSetContentOffset:(CGPoint)arg2 animated:(BOOL)arg3 ;
-(void)setBottomPage:(UIView *)arg1 ;
-(UIView *)proudLockContainerView;
-(CGPoint)proudLockIconViewOffset;
-(long long)dateViewPageAlignment;
-(BOOL)forceDateViewCentered;
-(BOOL)dateViewIsVibrant;
-(unsigned long long)fakeStatusBarLevel;
-(long long)statusBarBackgroundPageAlignment;
-(CSLocketForcePressGestureRecognizer *)locketGestureRecognizer;
-(void)setScalableContentView:(UIView *)arg1 ;
-(UIView *)slideableContentView;
-(UIView *)modalPresentationView;
-(void)setTintingView:(UIView *)arg1 ;
-(UIColor *)reduceTransparencyBackingColor;
-(CGPoint)foregroundViewPositionOffset;
-(BOOL)legibilitySettingsOverrideVibrancy;
-(void)setLegibilitySettingsOverrideVibrancy:(BOOL)arg1 ;
-(BOOL)statusBarLegibilityEnabled;
-(void)setStatusBarLegibilityEnabled:(BOOL)arg1 ;
-(unsigned long long)targetPageIndexForDraggingEnded;
@end

