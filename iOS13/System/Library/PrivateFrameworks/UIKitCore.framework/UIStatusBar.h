/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_UI110 _currentRawData;
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
+(double)_viewControllerAdjustmentForOrientation:(long long)arg1 ;
+(double)_heightForStyle:(long long)arg1 orientation:(long long)arg2 forStatusBarFrame:(BOOL)arg3 ;
+(long long)lowBatteryLevel;
+(long long)_deviceUserInterfaceLayoutDirection;
+(NSDirectionalEdgeInsets)_roundedPadEdgeInsets;
+(NSDirectionalEdgeInsets)_regularPadEdgeInsets;
+(double)_roundedPadBaselineOffset;
+(double)_regularPadBaselineOffset;
+(void)getData:(SCD_Struct_UI110*)arg1 forRequestedData:(const SCD_Struct_UI110*)arg2 withOverrides:(const SCD_Struct_UI113*)arg3 ;
+(long long)defaultStyleForRequestedStyle:(long long)arg1 styleOverrides:(int)arg2 ;
+(id)_styleAttributesForStatusBarStyle:(long long)arg1 ;
+(void)_setDeviceUserInterfaceLayoutDirection:(long long)arg1 ;
+(BOOL)_shouldForwardToImplementationClassForStyle:(long long)arg1 ;
+(id)_styleAttributesForRequest:(id)arg1 ;
+(BOOL)_isLightContentStyle:(long long)arg1 ;
+(id)_newStyleAttributesForRequest:(id)arg1 ;
+(void)enumerateStatusBarStyleOverridesWithBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setOrientation:(long long)arg1 ;
-(void)setRegistered:(BOOL)arg1 ;
-(id)_backgroundView;
-(void)layoutSubviews;
-(void)setTintColor:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_shouldReverseLayoutDirection;
-(void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3 ;
-(double)defaultHeight;
-(BOOL)isTranslucent;
-(void)_setVisualAltitude:(double)arg1 ;
-(void)_setVisualAltitudeBias:(CGSize)arg1 ;
-(id)statusBarWindow;
-(void)setForegroundAlpha:(double)arg1 animationParameters:(id)arg2 ;
-(void)setEnabledPartIdentifiers:(id)arg1 ;
-(long long)currentStyle;
-(double)defaultDoubleHeight;
-(void)forceUpdateDoubleHeightStatus;
-(void)forceUpdate:(BOOL)arg1 ;
-(void)_performBlockWhileIgnoringForegroundViewChanges:(/*^block*/id)arg1 ;
-(double)heightForOrientation:(long long)arg1 ;
-(void)setPersistentAnimationsEnabled:(BOOL)arg1 ;
-(void)_dateTimePreferencesUpdated;
-(void)setAction:(id)arg1 forPartWithIdentifier:(id)arg2 ;
-(id)actionForPartWithIdentifier:(id)arg1 ;
-(CGRect)frameForPartWithIdentifier:(id)arg1 ;
-(id)enabledPartIdentifiers;
-(id)_doubleHeightStatusStringForStyle:(long long)arg1 ;
-(void)statusBarServer:(id)arg1 didReceiveStatusBarData:(const SCD_Struct_UI110*)arg2 withActions:(int)arg3 ;
-(void)statusBarServer:(id)arg1 didReceiveStyleOverrides:(int)arg2 ;
-(void)statusBarServer:(id)arg1 didReceiveGlowAnimationState:(BOOL)arg2 forStyle:(long long)arg3 ;
-(void)statusBarServer:(id)arg1 didReceiveDoubleHeightStatusString:(id)arg2 forStyle:(long long)arg3 ;
-(BOOL)isDoubleHeight;
-(id)_initWithFrame:(CGRect)arg1 showForegroundView:(BOOL)arg2 wantsServer:(BOOL)arg3 inProcessStateProvider:(id)arg4 ;
-(void)_itemViewPerformButtonAction:(id)arg1 ;
-(void)_itemViewShouldBeginDisablingRasterization:(id)arg1 ;
-(void)_itemViewShouldEndDisablingRasterization:(id)arg1 ;
-(void)_updateShouldRasterize;
-(void)forceUpdateToData:(const SCD_Struct_UI110*)arg1 animated:(BOOL)arg2 ;
-(id)_currentComposedData;
-(void)_setDoubleHeightStatusString:(id)arg1 ;
-(void)_adjustDoubleHeightTextVisibility;
-(CGRect)frameForOrientation:(long long)arg1 ;
-(id)_currentStyleAttributes;
-(id)styleRequest;
-(id)_styleAttributesForRequest:(id)arg1 ;
-(id)currentStyleRequestForStyle:(long long)arg1 ;
-(void)_updateUIWithStyleAttributes:(id)arg1 animationParameters:(id)arg2 forced:(BOOL)arg3 ;
-(id)_prepareToSetStyle:(id)arg1 animation:(int)arg2 forced:(BOOL)arg3 ;
-(void)_endDisablingRasterizationForReason:(id)arg1 ;
-(void)_beginDisablingRasterizationForReason:(id)arg1 ;
-(void)_setStyle:(id)arg1 animation:(int)arg2 ;
-(void)_finishedSettingStyleWithOldHeight:(double)arg1 newHeight:(double)arg2 animation:(int)arg3 ;
-(BOOL)_shouldUseInProcessProviderDoubleHeightStatusString;
-(void)_updateBackgroundFrame;
-(CGRect)_backgroundFrameForAttributes:(id)arg1 ;
-(id)_prepareInterruptedAnimationCompositeViewIncludingForeground:(BOOL)arg1 ;
-(void)_updatePersistentAnimationsEnabledForForegroundView:(id)arg1 ;
-(id)_currentComposedDataForStyle:(id)arg1 ;
-(CGAffineTransform)_slideTransform;
-(void)_setFrameForStyle:(id)arg1 ;
-(void)_swapToNewBackgroundView;
-(void)_crossfadeToNewForegroundViewWithAlpha:(double)arg1 ;
-(void)_setStyle:(id)arg1 ;
-(void)_swapToNewForegroundView;
-(void)_crossfadeToNewBackgroundView;
-(void)setSuppressesHiddenSideEffects:(BOOL)arg1 ;
-(BOOL)_shouldSeekHigherPriorityTouchTarget;
-(BOOL)_touchShouldProduceReturnEvent;
-(void)animateUnlock;
-(void)jiggleLockIcon;
-(void)setForegroundColor:(id)arg1 animationParameters:(id)arg2 ;
-(void)_updateUIWithStyleAttributes:(id)arg1 animationParameters:(id)arg2 ;
-(void)setLegibilityStyle:(long long)arg1 animationParameters:(id)arg2 ;
-(void)setStyleRequest:(id)arg1 animationParameters:(id)arg2 ;
-(void)setEnabledCenterItems:(id)arg1 duration:(double)arg2 ;
-(void)forceUpdateData:(BOOL)arg1 ;
-(void)_noteStyleOverridesChangedLocally;
-(void)forgetEitherSideHistory;
-(void)setShowsOnlyCenterItems:(BOOL)arg1 ;
-(void)requestStyle:(long long)arg1 animation:(int)arg2 startTime:(double)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)_requestStyle:(long long)arg1 partStyles:(id)arg2 animationParameters:(id)arg3 forced:(BOOL)arg4 ;
-(void)setTintColor:(id)arg1 withDuration:(double)arg2 ;
-(void)_statusBarWillAnimateRotation;
-(void)_statusBarDidAnimateRotation;
-(void)_setDisablesRasterization:(BOOL)arg1 ;
-(void)statusBarStateProvider:(id)arg1 didPostStatusBarData:(const SCD_Struct_UI110*)arg2 withActions:(int)arg3 ;
-(void)statusBarStateProvider:(id)arg1 didChangeDoubleHeightStatusStringForStyle:(long long)arg2 ;
-(BOOL)_isTransparent;
-(void)_setOverrideHeight:(double)arg1 ;
-(void)_clearOverrideHeight;
-(BOOL)_rectIntersectsTimeItem:(CGRect)arg1 ;
-(BOOL)disablesRasterization;
-(BOOL)isTimeHidden;
-(void)setTimeHidden:(BOOL)arg1 ;
@end

