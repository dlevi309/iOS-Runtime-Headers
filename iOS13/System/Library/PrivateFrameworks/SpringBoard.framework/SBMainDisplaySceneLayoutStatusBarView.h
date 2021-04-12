/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <UIKit/UIStatusBarStyleDelegate_SpringBoardOnly.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneStatusBarStateObserver.h>

@protocol SBMainDisplaySceneLayoutStatusBarViewDataSource, UIStatusBarStyleDelegate_SpringBoardOnly;
@class SBOrientationTransformWrapperView, UIView, UIStatusBar, _UIStatusBar, NSMutableSet, NSMutableDictionary, SBDeviceApplicationSceneHandle, SBMedusaSettings, UIColor, NSString;

@interface SBMainDisplaySceneLayoutStatusBarView : UIView <PTSettingsKeyObserver, UIStatusBarStyleDelegate_SpringBoardOnly, SBDeviceApplicationSceneStatusBarStateObserver> {

	SBOrientationTransformWrapperView* _statusBarContainerView;
	UIView* _statusBarWrapperView;
	UIStatusBar* _statusBar;
	_UIStatusBar* _statusBarUnderlyingViewAccessor;
	NSMutableSet* _statusBarRequiringReasons;
	NSMutableDictionary* _partIdentifiersDefaultStyles;
	NSMutableDictionary* _partIdentifiersCustomStyles;
	NSMutableDictionary* _hitTestLayers;
	SBDeviceApplicationSceneHandle* _statusBarBreadcrumbSceneHandle;
	BOOL _statusBarLaidOutForClassic;
	SBMedusaSettings* _medusaSettings;
	BOOL _debugBackgroundColorEnabled;
	BOOL _debugOffsetEnabled;
	unsigned long long _debugOffsetIndex;
	UIColor* _debugBackgroundColor;
	struct {
		unsigned styleDelegateWants_statusBar_styleForRequestedStyle_overrides : 1;
		unsigned styleDelegateWants_statusBar_willAnimateFromHeight_toHeight_duration_animation : 1;
		unsigned styleDelegateWants_statusBar_didAnimateFromHeight_toHeight_animation : 1;
		unsigned styleDelegateWants_statusBarSystemNavigationAction : 1;
		unsigned styleDelegateWants_statusBar_didTriggerButtonType_withAction : 1;
		unsigned styleDelegateWants_statusBar_didTriggerButtonType_withAction_context : 1;
		unsigned styleDelegateWants_statusBar_effectiveStyleOverridesForRequestedStyle_overrides : 1;
		unsigned styleDelegateWants_overriddenRequestedStyleFromStyle : 1;
		unsigned dataSourceWants_statusBarPartsForSceneWithIdentifier : 1;
		unsigned dataSourceWants_currentlyValidStatusBarPartIdentifiers : 1;
		unsigned dataSourceWants_statusBarDescriberAtPoint_inView_pointInSceneLayoutSpace : 1;
		unsigned dataSourceWants_frameForSceneIdentifier_inView : 1;
		unsigned dataSourceWants_statusBarAvoidanceFrame : 1;
	}  _conformanceFlags;
	id<SBMainDisplaySceneLayoutStatusBarViewDataSource> _dataSource;
	id<UIStatusBarStyleDelegate_SpringBoardOnly> _realStyleDelegate;

}

@property (assign,nonatomic,__weak) id<UIStatusBarStyleDelegate_SpringBoardOnly> realStyleDelegate;              //@synthesize realStyleDelegate=_realStyleDelegate - In the implementation block
@property (getter=isRequiringStatusBar,nonatomic,readonly) BOOL requiringStatusBar; 
@property (getter=isStatusBarEffectivelyHidden,nonatomic,readonly) BOOL statusBarEffectivelyHidden; 
@property (assign,nonatomic,__weak) id<SBMainDisplaySceneLayoutStatusBarViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) long long containerOrientation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SBMainDisplaySceneLayoutStatusBarViewDataSource>)dataSource;
-(void)setDataSource:(id<SBMainDisplaySceneLayoutStatusBarViewDataSource>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(long long)statusBar:(id)arg1 styleForRequestedStyle:(long long)arg2 overrides:(int)arg3 ;
-(void)statusBar:(id)arg1 willAnimateFromHeight:(double)arg2 toHeight:(double)arg3 duration:(double)arg4 animation:(int)arg5 ;
-(void)statusBar:(id)arg1 didAnimateFromHeight:(double)arg2 toHeight:(double)arg3 animation:(int)arg4 ;
-(id)statusBarSystemNavigationAction:(id)arg1 ;
-(void)statusBar:(id)arg1 didTriggerButtonType:(long long)arg2 withAction:(long long)arg3 ;
-(void)statusBar:(id)arg1 didTriggerButtonType:(long long)arg2 withAction:(long long)arg3 context:(id)arg4 ;
-(int)statusBar:(id)arg1 effectiveStyleOverridesForRequestedStyle:(long long)arg2 overrides:(int)arg3 ;
-(long long)overriddenRequestedStyleFromStyle:(long long)arg1 ;
-(CGRect)_statusBarFrameForOrientation:(long long)arg1 ;
-(void)setContainerOrientation:(long long)arg1 ;
-(long long)containerOrientation;
-(void)didInvalidateStatusBarDescriptionForSceneWithIdentifier:(id)arg1 ;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarStyleTo:(long long)arg2 ;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarStyleTo:(long long)arg2 forPartWithIdentifier:(id)arg3 ;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarAlphaTo:(double)arg2 ;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarHiddenTo:(BOOL)arg2 withAnimation:(long long)arg3 ;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarOrientationTo:(long long)arg2 ;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarStyleOverridesToSuppressTo:(int)arg2 ;
-(void)sceneWithIdentifier:(id)arg1 didChangeStatusBarAvoidanceFrameTo:(CGRect)arg2 ;
-(void)_setupDebugging;
-(void)setRealStyleDelegate:(id<UIStatusBarStyleDelegate_SpringBoardOnly>)arg1 ;
-(void)_addStatusBarIfNeeded;
-(void)_tearDownStatusBar;
-(id)_defaultStatusBarStyleRequest;
-(id)createStatusBarWithFrame:(CGRect)arg1 interfaceOrientation:(long long)arg2 reason:(id)arg3 ;
-(BOOL)_allowChangingIndividualStatusBarParts;
-(void)applyStatusBarStylesForDescriber:(id)arg1 ;
-(void)_statusBarScrollToTop:(id)arg1 ;
-(void)_statusBarShowDebug:(id)arg1 ;
-(void)_updateHitTestLayers;
-(void)_updateDebugBackgroundColor;
-(void)_statusBarTapped:(id)arg1 type:(long long)arg2 ;
-(id)_sceneHandleForPrimaryApplicationIfAny;
-(id)_anyAppViewControllerOwningInterfaceOrientation;
-(void)_layoutStatusBarForOrientation:(long long)arg1 ;
-(id)_sceneHandleForClassicApplicationIfAny;
-(BOOL)_statusBarNeedsSpecialLayoutForClassic;
-(CGRect)_statusBarAvoidanceFrame;
-(id)allValidStatusBarPartIdentifiers;
-(long long)_effectiveStyleForPartIdentifier:(id)arg1 ;
-(void)_applyStatusBarHidden:(BOOL)arg1 withAnimation:(long long)arg2 toSceneWithIdentifier:(id)arg3 ;
-(void)_applyStatusBarStyleOverridesToSuppress:(int)arg1 toSceneWithIdentifier:(id)arg2 ;
-(void)_applyStatusBarAlpha:(double)arg1 toSceneWithIdentifier:(id)arg2 ;
-(void)_applyStatusBarStyle:(long long)arg1 toSceneWithIdentifier:(id)arg2 ;
-(void)_applyStatusBarAvoidanceFrame:(CGRect)arg1 toSceneWithIdentifier:(id)arg2 ;
-(void)_applyStatusBarStyle:(long long)arg1 toPartIdentifier:(id)arg2 ofSceneWithIdentifier:(id)arg3 ;
-(void)_enumerateValidStatusBarPartIdentifiersForSceneWithIdentifier:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)_validStatusBarPartIdentifiersForSceneWithIdentifier:(id)arg1 ;
-(void)_animateHidden:(BOOL)arg1 withAnimation:(long long)arg2 transitionHandler:(/*^block*/id)arg3 applyHandler:(/*^block*/id)arg4 ;
-(id)_currentlyValidStatusBarPartIdentifiers;
-(int)_effectiveStatusBarStyleOverridesToSuppress;
-(id)statusBarStyleRequestForStatusBarPart:(id)arg1 ;
-(CGAffineTransform)_hiddenTransformForAnimation:(long long)arg1 ;
-(double)_hiddenAlphaForAnimation:(long long)arg1 ;
-(void)_updateDebugOffset;
-(void)beginRequiringStatusBarForReason:(id)arg1 ;
-(void)endRequiringStatusBarForReason:(id)arg1 ;
-(void)layoutStatusBarForSpringBoardRotationToOrientation:(long long)arg1 ;
-(void)updateStatusBarOrientationForLegacyApp;
-(BOOL)isRequiringStatusBar;
-(BOOL)isStatusBarEffectivelyHidden;
-(void)updateBreadcrumbActionIfNecessary;
-(void)_setDebugBackgroundColor:(id)arg1 ;
-(void)_setDebugOffsetIndex:(unsigned long long)arg1 ;
-(id<UIStatusBarStyleDelegate_SpringBoardOnly>)realStyleDelegate;
@end

