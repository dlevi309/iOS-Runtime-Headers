/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CSScrollViewDelegate.h>
#import <libobjc.A.dylib/CSCoverSheetViewTransitionSource.h>
#import <libobjc.A.dylib/CSScrollableView.h>

@protocol CSCoverSheetViewDelegate, CSWallpaperView;
@class UIScrollView, SBUIBackgroundView, SBFPagedScrollView, UIView, UIVisualEffectView, SBFStatusBarLegibilityView, CSScrollModifier, CSLayoutStrategy, SBFLockScreenDateView, CSFixedFooterView, CSTeachableMomentsContainerView, CSQuickActionsView, UIGestureRecognizer, UITapGestureRecognizer, UIColor, _UILegibilitySettings, CSRegionsDebugView, NSArray, NSString;

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
	SCD_Struct_CS7 _transitionContext;
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
	UIView* _poseidonContainerView;
	CSTeachableMomentsContainerView* _teachableMomentsContainerView;
	CSQuickActionsView* _quickActionsView;
	long long _dateViewPageAlignment;
	UIView* _fakeStatusBar;
	unsigned long long _fakeStatusBarLevel;
	UIVisualEffectView* _statusBarBackgroundView;
	long long _statusBarBackgroundPageAlignment;
	UIGestureRecognizer* _wallpaperGestureRecognizer;
	UITapGestureRecognizer* _quickNoteGestureRecognizer;
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
@property (nonatomic,retain) UIView * poseidonContainerView;                                               //@synthesize poseidonContainerView=_poseidonContainerView - In the implementation block
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
@property (getter=isTransitioning,nonatomic,readonly) BOOL transitioning; 
@property (nonatomic,readonly) SCD_Struct_CS8 transitionContext; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
-(void)setStatusBarBackgroundView:(UIVisualEffectView *)arg1 ;
-(void)setWallpaperGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(UIVisualEffectView *)statusBarBackgroundView;
-(void)cancelTransition;
-(SBFLockScreenDateView *)dateView;
-(UIGestureRecognizer *)wallpaperGestureRecognizer;
-(void)_layoutTeachableMomentsContainerView;
-(UIView *)mainPageView;
-(void)updateBackgroundStyleTransitionProgress:(double)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 withContext:(SCD_Struct_CS10)arg2 ;
-(void)setFakeStatusBarLevel:(unsigned long long)arg1 ;
-(UIView *)tintingView;
-(void)setProudLockContainerView:(UIView *)arg1 ;
-(unsigned long long)_indexOfMainPage;
-(void)setDateView:(SBFLockScreenDateView *)arg1 ;
-(void)setMainPageView:(UIView *)arg1 ;
-(void)setStatusBarBackgroundPageAlignment:(long long)arg1 ;
-(CGPoint)foregroundViewPositionOffset;
-(void)completeTransitionToBackgroundStyle:(long long)arg1 ;
-(void)_orderSubviews;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)_addHigherSlideableContentView;
-(void)setPageViews:(NSArray *)arg1 ;
-(void)_setDateView:(id)arg1 forTesting:(BOOL)arg2 ;
-(void)setBedtimeGreetingViewBackgroundView:(SBUIBackgroundView *)arg1 ;
-(void)setTintingView:(UIView *)arg1 ;
-(BOOL)statusBarLegibilityEnabled;
-(UIView *)referenceViewForBelowPresentationContext;
-(void)_setupWallpaperGestureOnScrollView:(BOOL)arg1 ;
-(void)_layoutFullScreenViews;
-(CSLayoutStrategy *)layoutStrategy;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)dateViewPageAlignment;
-(BOOL)scrollToPageAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(UIView *)bottomPage;
-(UIView *)proudLockContainerView;
-(void)viewControllerWillAppear;
-(id<CSCoverSheetViewDelegate>)delegate;
-(CGPoint)_scrollView:(id)arg1 adjustedOffsetForOffset:(CGPoint)arg2 translation:(CGPoint)arg3 startPoint:(CGPoint)arg4 locationInView:(CGPoint)arg5 horizontalVelocity:(inout double*)arg6 verticalVelocity:(inout double*)arg7 ;
-(void)_addBackgroundView;
-(SCD_Struct_CS8)transitionContext;
-(void)setBackgroundView:(SBUIBackgroundView *)arg1 ;
-(long long)backgroundStyle;
-(UIView *)modalPresentationView;
-(void)setForceDateViewCentered:(BOOL)arg1 ;
-(void)_layoutDateView;
-(void)setTeachableMomentsContainerView:(CSTeachableMomentsContainerView *)arg1 ;
-(SBUIBackgroundView *)backgroundView;
-(void)viewControllerDidDisappear;
-(void)setWallpaperEffectView:(UIView*<CSWallpaperView>)arg1 ;
-(unsigned long long)fakeStatusBarLevel;
-(void)_layoutTintingView;
-(void)setFakeStatusBar:(UIView *)arg1 ;
-(UIView *)fakeStatusBar;
-(UIView*<CSWallpaperView>)wallpaperEffectView;
-(void)setLayoutStrategy:(CSLayoutStrategy *)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(CGRect)_overlayClippingFrame;
-(void)setReduceTransparencyBackingColor:(UIColor *)arg1 ;
-(void)_layoutHigherSlideableContentView;
-(void)addScalableContentView;
-(void)_addDateTimeContainer;
-(void)addScalableContentViewWithCustomContentView:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(BOOL)legibilitySettingsOverrideVibrancy;
-(CGRect)_dateViewFrameForPageAlignment:(long long)arg1 pageRelativeScrollOffset:(double)arg2 outAlignmentPercent:(double*)arg3 ;
-(CGRect)dateViewPresentationExtentForPageRelativeScrollOffset:(double)arg1 ;
-(UITapGestureRecognizer *)quickNoteGestureRecognizer;
-(void)setRegionsDebugView:(CSRegionsDebugView *)arg1 ;
-(unsigned long long)targetPageIndexForDraggingEnded;
-(void)scrollViewDidEndScrolling:(id)arg1 ;
-(CGPoint)proudLockIconViewOffset;
-(void)setPoseidonContainerView:(UIView *)arg1 ;
-(SCD_Struct_CS8)_completedTransitionContextForPreviousTransitionContext:(SCD_Struct_CS8)arg1 newTransitionContext:(SCD_Struct_CS8)arg2 ;
-(NSString *)coverSheetIdentifier;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)_addStatusBarLegibilityView;
-(void)setDelegate:(id<CSCoverSheetViewDelegate>)arg1 ;
-(void)setIgnoresOverscrollOnMainPage:(BOOL)arg1 ;
-(CSQuickActionsView *)quickActionsView;
-(UIView *)slideableContentView;
-(void)_addSlideableContentView;
-(void)_layoutDateTimeViewClippingView;
-(void)setForegroundViewPositionOffset:(CGPoint)arg1 ;
-(void)_layoutProudLockView;
-(void)layoutSubviews;
-(BOOL)forceDateViewCentered;
-(SBUIBackgroundView *)bedtimeGreetingViewBackgroundView;
-(void)setLegibilitySettingsOverrideVibrancy:(BOOL)arg1 ;
-(void)setScalableContentView:(UIView *)arg1 ;
-(void)setProudLockIconViewOffset:(CGPoint)arg1 ;
-(BOOL)ignoresOverscrollOnMainPage;
-(void)scrollViewWillBeginScrolling:(id)arg1 ;
-(void)setBackgroundStyle:(long long)arg1 ;
-(UIView *)scalableContentView;
-(BOOL)resetScrollViewToMainPageAnimated:(BOOL)arg1 withAnimationSettings:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setScrollView:(SBFPagedScrollView *)arg1 ;
-(void)setDateViewIsVibrant:(BOOL)arg1 ;
-(UIView *)poseidonContainerView;
-(void)_layoutWallpaperEffectView;
-(CSTeachableMomentsContainerView *)teachableMomentsContainerView;
-(void)_addScalableContentViewWithContentView:(id)arg1 ;
-(BOOL)dateViewIsVibrant;
-(void)setCameraCoveredView:(UIView *)arg1 ;
-(void)setModalPresentationView:(UIView *)arg1 ;
-(long long)participantState;
-(CSFixedFooterView *)fixedFooterView;
-(BOOL)isTransitioning;
-(void)_layoutStatusBarLegibilityView;
-(long long)statusBarBackgroundPageAlignment;
-(void)updateScalableContentTransformWithScale:(double)arg1 ;
-(CSRegionsDebugView *)regionsDebugView;
-(void)setFixedFooterView:(CSFixedFooterView *)arg1 ;
-(void)_addAuthIndicator;
-(void)_layoutQuickActionsView;
-(void)updateStatusBarLegibilityForForceLegibilityGradientHidden:(BOOL)arg1 ;
-(void)_layoutStatusBarBackgroundView;
-(SCD_Struct_CS8)_currentTransitionContext;
-(void)_removeScalableContentView;
-(void)_addScrollView;
-(void)setTargetPageIndexForDraggingEnded:(unsigned long long)arg1 ;
-(UIColor *)reduceTransparencyBackingColor;
-(void)removeScalableContentView;
-(void)updateUIForAuthenticated:(BOOL)arg1 ;
-(UIView *)wakeEffectView;
-(void)setDateViewOffset:(CGPoint)arg1 ;
-(NSArray *)pageViews;
-(void)didAddSubview:(id)arg1 ;
-(void)setWakeEffectView:(UIView *)arg1 ;
-(void)_addTintingView;
-(void)setQuickActionsView:(CSQuickActionsView *)arg1 ;
-(void)setQuickNoteGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)_layoutBottomPage;
-(CGPoint)dateViewOffset;
-(void)_setupQuickNoteGestureOnScrollView:(BOOL)arg1 ;
-(void)_updateLegibility;
-(void)setReferenceViewForBelowPresentationContext:(UIView *)arg1 ;
-(void)setStatusBarLegibilityEnabled:(BOOL)arg1 ;
-(void)beginTransitionToBackgroundStyle:(long long)arg1 ;
-(SBFPagedScrollView *)scrollView;
-(void)_addScalableContentView;
-(BOOL)isTransitioningBackgroundStyle;
-(BOOL)resetScrollViewToMainPageAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setBottomPage:(UIView *)arg1 ;
-(void)_layoutFakeStatusBar;
-(void)_layoutAuthIndicator;
-(UIView *)cameraCoveredView;
-(BOOL)coverSheetScrollView:(id)arg1 shouldSetContentOffset:(CGPoint)arg2 animated:(BOOL)arg3 ;
-(void)setDateViewPageAlignment:(long long)arg1 ;
@end

