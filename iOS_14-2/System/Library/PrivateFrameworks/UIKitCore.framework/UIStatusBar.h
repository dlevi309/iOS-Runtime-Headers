/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStatusBar_Base.h>
#import <UIKit/UIStatusBarServerClient.h>

@class UIStatusBarBackgroundView, UIStatusBarForegroundView, UILabel, UIView, NSString, NSMutableArray, UIStatusBarStyleAttributes, UIColor, UIStatusBarStyleAnimationParameters, NSNumber, NSMutableSet, NSMutableDictionary;

@interface UIStatusBar : UIStatusBar_Base <UIStatusBarServerClient> {

	BOOL _showsForeground;
	BOOL _observingDefaults;
	UIStatusBarBackgroundView* _backgroundView;
	UIStatusBarForegroundView* _foregroundView;
	UILabel* _doubleHeightLabel;
	UIView* _doubleHeightLabelContainer;
	NSString* _currentDoubleHeightText;
	SCD_Struct_UI121 _currentRawData;
	NSMutableArray* _interruptedAnimationCompositeViews;
	UIStatusBarBackgroundView* _newStyleBackgroundView;
	UIStatusBarForegroundView* _newStyleForegroundView;
	UIStatusBar* _slidingStatusBar;
	UIStatusBarStyleAttributes* _styleAttributes;
	BOOL _waitingOnCallbackAfterChangingStyleOverridesLocally;
	BOOL _showOnlyCenterItems;
	BOOL _foregroundViewShouldIgnoreStatusBarDataDuringAnimation;
	UIColor* _tintColor;
	UIColor* _lastUsedBackgroundColor;
	UIStatusBarStyleAnimationParameters* _nextTintTransition;
	NSNumber* _overrideHeight;
	NSMutableSet* _disableRasterizationReasons;
	NSMutableDictionary* _actions;
	BOOL _disablesRasterization;
	BOOL _timeHidden;

}

@property (assign,getter=isTimeHidden,nonatomic) BOOL timeHidden;              //@synthesize timeHidden=_timeHidden - In the implementation block
+(BOOL)_isLightContentStyle:(long long)arg1 ;
+(id)_newStyleAttributesForRequest:(id)arg1 ;
+(NSDirectionalEdgeInsets)_roundedPadEdgeInsets;
+(void)enumerateStatusBarStyleOverridesWithBlock:(/*^block*/id)arg1 ;
+(double)_roundedPadBaselineOffset;
+(long long)lowBatteryLevel;
+(double)_heightForStyle:(long long)arg1 orientation:(long long)arg2 forStatusBarFrame:(BOOL)arg3 inWindow:(id)arg4 isAzulBLinked:(BOOL)arg5 ;
+(long long)defaultStyleForRequestedStyle:(long long)arg1 styleOverrides:(int)arg2 ;
+(double)_regularPadBaselineOffset;
+(void)getData:(SCD_Struct_UI121*)arg1 forRequestedData:(const SCD_Struct_UI121*)arg2 withOverrides:(const SCD_Struct_UI124*)arg3 ;
+(NSDirectionalEdgeInsets)_regularPadEdgeInsets;
+(double)_viewControllerAdjustmentForOrientation:(long long)arg1 inWindow:(id)arg2 ;
+(long long)_deviceUserInterfaceLayoutDirection;
+(void)_setDeviceUserInterfaceLayoutDirection:(long long)arg1 ;
+(BOOL)_shouldForwardToImplementationClassForStyle:(long long)arg1 ;
+(id)_styleAttributesForStatusBarStyle:(long long)arg1 ;
+(id)_styleAttributesForRequest:(id)arg1 ;
-(void)setRegistered:(BOOL)arg1 ;
-(void)_setStyle:(id)arg1 ;
-(void)_performBlockWhileIgnoringForegroundViewChanges:(/*^block*/id)arg1 ;
-(id)_prepareInterruptedAnimationCompositeViewIncludingForeground:(BOOL)arg1 ;
-(void)_setVisualAltitudeBias:(CGSize)arg1 ;
-(double)defaultHeight;
-(void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3 ;
-(void)_finishedSettingStyleWithOldHeight:(double)arg1 newHeight:(double)arg2 animation:(int)arg3 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isDoubleHeight;
-(void)setTintColor:(id)arg1 ;
-(void)_setOverrideHeight:(double)arg1 ;
-(void)_statusBarDidAnimateRotation;
-(BOOL)isTranslucent;
-(void)setTimeHidden:(BOOL)arg1 ;
-(id)_currentStyleAttributes;
-(void)setPersistentAnimationsEnabled:(BOOL)arg1 ;
-(CGRect)frameForPartWithIdentifier:(id)arg1 ;
-(void)statusBarServer:(id)arg1 didReceiveDoubleHeightStatusString:(id)arg2 forStyle:(long long)arg3 ;
-(CGAffineTransform)_slideTransform;
-(void)_beginDisablingRasterizationForReason:(id)arg1 ;
-(void)forceUpdate:(BOOL)arg1 ;
-(void)statusBarServer:(id)arg1 didReceiveStyleOverrides:(int)arg2 ;
-(void)setForegroundColor:(id)arg1 animationParameters:(id)arg2 ;
-(void)_adjustDoubleHeightTextVisibility;
-(id)_backgroundView;
-(void)_swapToNewBackgroundView;
-(void)setForegroundAlpha:(double)arg1 animationParameters:(id)arg2 ;
-(void)_setDoubleHeightStatusString:(id)arg1 ;
-(BOOL)_shouldSeekHigherPriorityTouchTarget;
-(id)_currentComposedData;
-(void)setTintColor:(id)arg1 withDuration:(double)arg2 ;
-(void)forceUpdateToData:(const SCD_Struct_UI121*)arg1 animated:(BOOL)arg2 ;
-(void)_itemViewShouldBeginDisablingRasterization:(id)arg1 ;
-(BOOL)_touchShouldProduceReturnEvent;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_rectIntersectsTimeItem:(CGRect)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_setStyle:(id)arg1 animation:(int)arg2 ;
-(void)_crossfadeToNewForegroundViewWithAlpha:(double)arg1 ;
-(BOOL)isTimeHidden;
-(void)_noteStyleOverridesChangedLocally;
-(void)forceUpdateDoubleHeightStatus;
-(void)_itemViewShouldEndDisablingRasterization:(id)arg1 ;
-(void)_crossfadeToNewBackgroundView;
-(void)_itemViewPerformButtonAction:(id)arg1 ;
-(void)_endDisablingRasterizationForReason:(id)arg1 ;
-(void)_updateBackgroundFrame;
-(long long)currentStyle;
-(id)_doubleHeightStatusStringForStyle:(long long)arg1 ;
-(void)layoutSubviews;
-(void)requestStyle:(long long)arg1 animation:(int)arg2 startTime:(double)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(id)enabledPartIdentifiers;
-(BOOL)_shouldUseInProcessProviderDoubleHeightStatusString;
-(BOOL)disablesRasterization;
-(void)_updateUIWithStyleAttributes:(id)arg1 animationParameters:(id)arg2 ;
-(void)_swapToNewForegroundView;
-(CGRect)frameForOrientation:(long long)arg1 ;
-(void)setEnabledCenterItems:(id)arg1 duration:(double)arg2 ;
-(void)_dateTimePreferencesUpdated;
-(void)_clearOverrideHeight;
-(void)statusBarStateProvider:(id)arg1 didPostStatusBarData:(const SCD_Struct_UI121*)arg2 withActions:(int)arg3 ;
-(void)statusBarStateProvider:(id)arg1 didChangeDoubleHeightStatusStringForStyle:(long long)arg2 ;
-(void)setShowsOnlyCenterItems:(BOOL)arg1 ;
-(void)setEnabledPartIdentifiers:(id)arg1 ;
-(CGRect)_backgroundFrameForAttributes:(id)arg1 ;
-(id)_currentComposedDataForStyle:(id)arg1 ;
-(id)actionForPartWithIdentifier:(id)arg1 ;
-(void)_statusBarWillAnimateRotation;
-(void)setSuppressesHiddenSideEffects:(BOOL)arg1 ;
-(void)_setFrameForStyle:(id)arg1 ;
-(BOOL)_isTransparent;
-(id)statusBarWindow;
-(void)_updateUIWithStyleAttributes:(id)arg1 animationParameters:(id)arg2 forced:(BOOL)arg3 ;
-(void)forceUpdateData:(BOOL)arg1 ;
-(id)_initWithFrame:(CGRect)arg1 showForegroundView:(BOOL)arg2 wantsServer:(BOOL)arg3 inProcessStateProvider:(id)arg4 ;
-(double)defaultDoubleHeight;
-(double)heightForOrientation:(long long)arg1 ;
-(BOOL)_shouldReverseLayoutDirection;
-(void)forgetEitherSideHistory;
-(void)_updatePersistentAnimationsEnabledForForegroundView:(id)arg1 ;
-(void)statusBarServer:(id)arg1 didReceiveGlowAnimationState:(BOOL)arg2 forStyle:(long long)arg3 ;
-(void)animateUnlock;
-(void)setStyleRequest:(id)arg1 animationParameters:(id)arg2 ;
-(void)_requestStyle:(long long)arg1 partStyles:(id)arg2 animationParameters:(id)arg3 forced:(BOOL)arg4 ;
-(id)_prepareToSetStyle:(id)arg1 animation:(int)arg2 forced:(BOOL)arg3 ;
-(void)_setVisualAltitude:(double)arg1 ;
-(id)styleRequest;
-(void)_setDisablesRasterization:(BOOL)arg1 ;
-(void)setAction:(id)arg1 forPartWithIdentifier:(id)arg2 ;
-(void)setLegibilityStyle:(long long)arg1 animationParameters:(id)arg2 ;
-(id)_styleAttributesForRequest:(id)arg1 ;
-(id)currentStyleRequestForStyle:(long long)arg1 ;
-(void)statusBarServer:(id)arg1 didReceiveStatusBarData:(const SCD_Struct_UI121*)arg2 withActions:(int)arg3 ;
-(void)dealloc;
-(void)setOrientation:(long long)arg1 ;
-(void)_updateShouldRasterize;
-(void)jiggleLockIcon;
@end

