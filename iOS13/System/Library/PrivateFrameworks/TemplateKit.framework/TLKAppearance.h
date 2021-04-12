/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) UIColor * primaryButtonColor; 
@property (readonly) UIColor * secondaryButtonColor; 
@property (readonly) UIColor * tertiaryButtonColor; 
@property (readonly) UIColor * quaternaryButtonColor; 
@property (readonly) UIColor * backgroundColor; 
@property (readonly) UIColor * groupedBackgroundColor; 
@property (readonly) UIColor * platterColor; 
+(id)colorWithRed:(unsigned long long)arg1 green:(unsigned long long)arg2 blue:(unsigned long long)arg3 ;
+(id)bestAppearanceForView:(id)arg1 ;
+(id)appearanceWithStyle:(unsigned long long)arg1 ;
+(id)bestAppearanceForTraitCollection:(id)arg1 ;
+(id)allAppearances;
+(id)bestAppearanceForSystem;
+(BOOL)viewHasOverriddenAppearance:(id)arg1 ;
+(void)disableAppearanceOverrideForView:(id)arg1 ;
-(NSString *)name;
-(unsigned long long)style;
-(UIColor *)backgroundColor;
-(id)compositingFilter;
-(UIColor *)primaryColor;
-(UIColor *)secondaryColor;
-(UIColor *)groupedBackgroundColor;
-(BOOL)isVibrant;
-(BOOL)isDark;
-(void)enableAppearanceForView:(id)arg1 ;
-(void)disableAppearanceForView:(id)arg1 ;
-(UIColor *)tertiaryColor;
-(id)buttonColorForProminence:(unsigned long long)arg1 ;
-(id)colorForProminence:(unsigned long long)arg1 ;
-(UIColor *)quaternaryColor;
-(UIColor *)primaryButtonColor;
-(UIColor *)secondaryButtonColor;
-(UIColor *)tertiaryButtonColor;
-(UIColor *)quaternaryButtonColor;
-(void)enableAppearanceForContainer:(id)arg1 ;
-(double)accessibilityContrastColorBoost;
-(id)colorWithWhite:(unsigned long long)arg1 highContrastWhite:(unsigned long long)arg2 ;
-(UIColor *)platterColor;
-(void)overrideAppearanceForView:(id)arg1 ;
-(id)textColorForColor:(long long)arg1 ;
-(id)colorWithWhite:(unsigned long long)arg1 ;
@end

