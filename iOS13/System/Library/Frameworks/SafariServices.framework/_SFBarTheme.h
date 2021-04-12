/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class UIColor, UIBlurEffect, NSArray;

@interface _SFBarTheme : NSObject {

	UIColor* _preferredControlsTintColor;
	BOOL _backdropIsDark;
	BOOL _backdropIsTinted;
	unsigned long long _tintStyle;
	UIColor* _controlsTintColor;
	UIColor* _preferredBarTintColor;
	long long _overrideUserInterfaceStyle;
	UIBlurEffect* _backdropEffect;
	NSArray* _backdropAdjustmentEffects;

}

@property (nonatomic,readonly) BOOL backdropIsDark;                               //@synthesize backdropIsDark=_backdropIsDark - In the implementation block
@property (nonatomic,readonly) BOOL backdropIsTinted;                             //@synthesize backdropIsTinted=_backdropIsTinted - In the implementation block
@property (nonatomic,readonly) unsigned long long tintStyle;                      //@synthesize tintStyle=_tintStyle - In the implementation block
@property (nonatomic,readonly) UIColor * controlsTintColor;                       //@synthesize controlsTintColor=_controlsTintColor - In the implementation block
@property (nonatomic,readonly) UIColor * preferredBarTintColor;                   //@synthesize preferredBarTintColor=_preferredBarTintColor - In the implementation block
@property (nonatomic,readonly) long long overrideUserInterfaceStyle;              //@synthesize overrideUserInterfaceStyle=_overrideUserInterfaceStyle - In the implementation block
@property (nonatomic,readonly) UIBlurEffect * backdropEffect;                     //@synthesize backdropEffect=_backdropEffect - In the implementation block
@property (nonatomic,readonly) NSArray * backdropAdjustmentEffects;               //@synthesize backdropAdjustmentEffects=_backdropAdjustmentEffects - In the implementation block
@property (nonatomic,readonly) _SFBarTheme * fallbackTheme; 
+(id)themeWithBarTintStyle:(unsigned long long)arg1 ;
+(id)themeWithTheme:(id)arg1 ;
+(id)themeWithBarTintStyle:(unsigned long long)arg1 preferredBarTintColor:(id)arg2 controlsTintColor:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)overrideUserInterfaceStyle;
-(unsigned long long)tintStyle;
-(_SFBarTheme *)fallbackTheme;
-(UIColor *)controlsTintColor;
-(BOOL)backdropIsDark;
-(void)applyBackdropEffectsToView:(id)arg1 ;
-(UIBlurEffect *)backdropEffect;
-(BOOL)backdropIsTinted;
-(id)initWithBarTintStyle:(unsigned long long)arg1 preferredBarTintColor:(id)arg2 controlsTintColor:(id)arg3 ;
-(UIColor *)preferredBarTintColor;
-(NSArray *)backdropAdjustmentEffects;
@end

