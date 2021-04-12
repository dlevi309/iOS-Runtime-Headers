/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)overrideUserInterfaceStyle;
-(UIBlurEffect *)backdropEffect;
-(NSArray *)backdropAdjustmentEffects;
-(UIColor *)preferredBarTintColor;
-(unsigned long long)tintStyle;
-(id)initWithBarTintStyle:(unsigned long long)arg1 preferredBarTintColor:(id)arg2 controlsTintColor:(id)arg3 ;
-(BOOL)backdropIsTinted;
-(void)applyBackdropEffectsToView:(id)arg1 ;
-(_SFBarTheme *)fallbackTheme;
-(id)description;
-(UIColor *)controlsTintColor;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)backdropIsDark;
@end

