/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStatusBar_Base.h>

@class _UIStatusBar;

@interface UIStatusBar_Modern : UIStatusBar_Base {

	_UIStatusBar* _statusBar;

}

@property (nonatomic,retain) _UIStatusBar * statusBar;              //@synthesize statusBar=_statusBar - In the implementation block
+(long long)_defaultStyleForRequestedStyle:(long long)arg1 styleOverrides:(int)arg2 activeStyleOverride:(int*)arg3 ;
+(id)sensorActivityIndicator;
+(double)_heightForStyle:(long long)arg1 orientation:(long long)arg2 forStatusBarFrame:(BOOL)arg3 inWindow:(id)arg4 isAzulBLinked:(BOOL)arg5 ;
+(void)setSensorActivityIndicator:(id)arg1 ;
+(Class)_implementationClass;
-(void)setStatusBar:(_UIStatusBar *)arg1 ;
-(CGSize)intrinsicContentSize;
-(_UIStatusBar *)statusBar;
-(void)setOffset:(UIOffset)arg1 forPartWithIdentifier:(id)arg2 ;
-(void)setAlpha:(double)arg1 forPartWithIdentifier:(id)arg2 ;
-(CGRect)frameForPartWithIdentifier:(id)arg1 ;
-(void)statusBarServer:(id)arg1 didReceiveDoubleHeightStatusString:(id)arg2 forStyle:(long long)arg3 ;
-(void)forceUpdate:(BOOL)arg1 ;
-(void)statusBarServer:(id)arg1 didReceiveStyleOverrides:(int)arg2 ;
-(void)setForegroundColor:(id)arg1 animationParameters:(id)arg2 ;
-(void)_requestStyle:(long long)arg1 partStyles:(id)arg2 legibilityStyle:(long long)arg3 foregroundColor:(id)arg4 animationParameters:(id)arg5 forced:(BOOL)arg6 ;
-(void)setForegroundAlpha:(double)arg1 animationParameters:(id)arg2 ;
-(UIOffset)offsetForPartWithIdentifier:(id)arg1 ;
-(void)setMode:(long long)arg1 ;
-(long long)currentStyle;
-(void)layoutSubviews;
-(id)enabledPartIdentifiers;
-(void)setAvoidanceFrame:(CGRect)arg1 ;
-(void)statusBarStateProvider:(id)arg1 didPostStatusBarData:(const SCD_Struct_UI121*)arg2 withActions:(int)arg3 ;
-(void)setEnabledPartIdentifiers:(id)arg1 ;
-(id)actionForPartWithIdentifier:(id)arg1 ;
-(void)_updateWithData:(id)arg1 force:(BOOL)arg2 ;
-(int)_implicitStyleOverrideForStyle:(long long)arg1 ;
-(id)_effectiveDataFromData:(id)arg1 activeOverride:(int)arg2 canUpdateBackgroundActivity:(BOOL)arg3 ;
-(void)_updateSemanticContentAttributeFromLegacyData:(const SCD_Struct_UI121*)arg1 ;
-(id)_dataFromLegacyData:(const SCD_Struct_UI121*)arg1 ;
-(void)forceUpdateData:(BOOL)arg1 ;
-(id)_initWithFrame:(CGRect)arg1 showForegroundView:(BOOL)arg2 wantsServer:(BOOL)arg3 inProcessStateProvider:(id)arg4 ;
-(double)defaultDoubleHeight;
-(void)setStyleRequest:(id)arg1 animationParameters:(id)arg2 ;
-(void)_requestStyle:(long long)arg1 partStyles:(id)arg2 animationParameters:(id)arg3 forced:(BOOL)arg4 ;
-(long long)_effectiveStyleFromStyle:(long long)arg1 ;
-(double)alphaForPartWithIdentifier:(id)arg1 ;
-(void)setAction:(id)arg1 forPartWithIdentifier:(id)arg2 ;
-(void)setLegibilityStyle:(long long)arg1 animationParameters:(id)arg2 ;
-(void)statusBarServer:(id)arg1 didReceiveStatusBarData:(const SCD_Struct_UI121*)arg2 withActions:(int)arg3 ;
-(void)setOrientation:(long long)arg1 ;
-(void)jiggleLockIcon;
@end

