/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStatusBar_Base.h>

@class _UIStatusBar;

@interface UIStatusBar_Modern : UIStatusBar_Base {

	_UIStatusBar* _statusBar;

}

@property (nonatomic,retain) _UIStatusBar * statusBar;              //@synthesize statusBar=_statusBar - In the implementation block
+(double)_heightForStyle:(long long)arg1 orientation:(long long)arg2 forStatusBarFrame:(BOOL)arg3 ;
+(Class)_implementationClass;
+(long long)_defaultStyleForRequestedStyle:(long long)arg1 styleOverrides:(int)arg2 activeStyleOverride:(int*)arg3 ;
-(void)setMode:(long long)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(void)setAvoidanceFrame:(CGRect)arg1 ;
-(_UIStatusBar *)statusBar;
-(void)setForegroundAlpha:(double)arg1 animationParameters:(id)arg2 ;
-(void)setEnabledPartIdentifiers:(id)arg1 ;
-(long long)currentStyle;
-(double)defaultDoubleHeight;
-(void)setStatusBar:(_UIStatusBar *)arg1 ;
-(void)forceUpdate:(BOOL)arg1 ;
-(long long)_effectiveStyleFromStyle:(long long)arg1 ;
-(void)setAction:(id)arg1 forPartWithIdentifier:(id)arg2 ;
-(id)actionForPartWithIdentifier:(id)arg1 ;
-(void)setOffset:(UIOffset)arg1 forPartWithIdentifier:(id)arg2 ;
-(UIOffset)offsetForPartWithIdentifier:(id)arg1 ;
-(void)setAlpha:(double)arg1 forPartWithIdentifier:(id)arg2 ;
-(double)alphaForPartWithIdentifier:(id)arg1 ;
-(CGRect)frameForPartWithIdentifier:(id)arg1 ;
-(id)enabledPartIdentifiers;
-(void)statusBarServer:(id)arg1 didReceiveStatusBarData:(const SCD_Struct_UI110*)arg2 withActions:(int)arg3 ;
-(void)statusBarServer:(id)arg1 didReceiveStyleOverrides:(int)arg2 ;
-(void)statusBarServer:(id)arg1 didReceiveDoubleHeightStatusString:(id)arg2 forStyle:(long long)arg3 ;
-(id)_initWithFrame:(CGRect)arg1 showForegroundView:(BOOL)arg2 wantsServer:(BOOL)arg3 inProcessStateProvider:(id)arg4 ;
-(void)jiggleLockIcon;
-(void)setForegroundColor:(id)arg1 animationParameters:(id)arg2 ;
-(void)setLegibilityStyle:(long long)arg1 animationParameters:(id)arg2 ;
-(void)setStyleRequest:(id)arg1 animationParameters:(id)arg2 ;
-(void)forceUpdateData:(BOOL)arg1 ;
-(void)_requestStyle:(long long)arg1 partStyles:(id)arg2 animationParameters:(id)arg3 forced:(BOOL)arg4 ;
-(void)statusBarStateProvider:(id)arg1 didPostStatusBarData:(const SCD_Struct_UI110*)arg2 withActions:(int)arg3 ;
-(int)_implicitStyleOverrideForStyle:(long long)arg1 ;
-(id)_effectiveDataFromData:(id)arg1 activeOverride:(int)arg2 canUpdateBackgroundActivity:(BOOL)arg3 ;
-(void)_updateWithData:(id)arg1 force:(BOOL)arg2 ;
-(void)_requestStyle:(long long)arg1 partStyles:(id)arg2 legibilityStyle:(long long)arg3 foregroundColor:(id)arg4 animationParameters:(id)arg5 forced:(BOOL)arg6 ;
-(void)_updateSemanticContentAttributeFromLegacyData:(const SCD_Struct_UI110*)arg1 ;
-(id)_dataFromLegacyData:(const SCD_Struct_UI110*)arg1 ;
@end

