/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/


@class NSString, UIColor;

@interface TLKAppearance : NSObject {

	BOOL _isDark;
	BOOL _isVibrant;
	unsigned long long _style;
	NSString* _name;
	id _compositingFilter;
	double _accessibilityContrastColorBoost;

}

@property (readonly) id compositingFilter;                                //@synthesize compositingFilter=_compositingFilter - In the implementation block
@property (readonly) double accessibilityContrastColorBoost;              //@synthesize accessibilityContrastColorBoost=_accessibilityContrastColorBoost - In the implementation block
@property (readonly) unsigned long long style;                            //@synthesize style=_style - In the implementation block
@property (readonly) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (readonly) BOOL isDark;                                         //@synthesize isDark=_isDark - In the implementation block
@property (readonly) BOOL isVibrant;                                      //@synthesize isVibrant=_isVibrant - In the implementation block
@property (readonly) UIColor * primaryColor; 
@property (readonly) UIColor * secondaryColor; 
@property (readonly) UIColor * tertiaryColor; 
@property (readonly) UIColor * quaternaryColor; 
@property (readonly) UIColor * quinaryColor; 
@property (readonly) UIColor * primaryButtonColor; 
@property (readonly) UIColor * secondaryButtonColor; 
@property (readonly) UIColor * tertiaryButtonColor; 
@property (readonly) UIColor * quaternaryButtonColor; 
@property (readonly) UIColor * backgroundColor; 
@property (readonly) UIColor * groupedBackgroundColor; 
@property (readonly) UIColor * platterColor; 
+(id)bestAppearanceForSystem;
+(BOOL)viewHasOverriddenAppearance:(id)arg1 ;
+(void)disableAppearanceOverrideForView:(id)arg1 ;
+(id)bestAppearanceForView:(id)arg1 ;
+(id)colorWithRed:(unsigned long long)arg1 green:(unsigned long long)arg2 blue:(unsigned long long)arg3 ;
+(id)appearanceWithStyle:(unsigned long long)arg1 ;
+(id)bestAppearanceForTraitCollection:(id)arg1 ;
+(id)allAppearances;
-(BOOL)isVibrant;
-(UIColor *)quaternaryButtonColor;
-(void)enableAppearanceForContainer:(id)arg1 ;
-(id)colorWithWhite:(unsigned long long)arg1 highContrastWhite:(unsigned long long)arg2 ;
-(void)overrideAppearanceForView:(id)arg1 ;
-(id)colorWithWhite:(unsigned long long)arg1 ;
-(id)textColorForColor:(long long)arg1 ;
-(double)accessibilityContrastColorBoost;
-(UIColor *)secondaryColor;
-(UIColor *)quaternaryColor;
-(UIColor *)groupedBackgroundColor;
-(UIColor *)backgroundColor;
-(id)compositingFilter;
-(NSString *)name;
-(void)enableAppearanceForView:(id)arg1 ;
-(id)colorForProminence:(unsigned long long)arg1 ;
-(BOOL)isDark;
-(void)disableAppearanceForView:(id)arg1 ;
-(id)buttonColorForProminence:(unsigned long long)arg1 ;
-(UIColor *)platterColor;
-(UIColor *)primaryColor;
-(UIColor *)tertiaryColor;
-(unsigned long long)style;
-(UIColor *)quinaryColor;
-(UIColor *)primaryButtonColor;
-(UIColor *)secondaryButtonColor;
-(UIColor *)tertiaryButtonColor;
@end

