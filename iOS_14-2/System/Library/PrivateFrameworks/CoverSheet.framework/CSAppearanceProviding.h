/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

@class NSString, NSSet, _UILegibilitySettings, UIColor;


@protocol CSAppearanceProviding <NSObject>
@property (nonatomic,copy,readonly) NSString * appearanceIdentifier; 
@property (nonatomic,readonly) long long backgroundStyle; 
@property (nonatomic,copy,readonly) NSSet * components; 
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@required
-(long long)backgroundStyle;
-(NSString *)appearanceIdentifier;
-(UIColor *)backgroundColor;
-(NSSet *)components;
-(void)conformsToCSAppearanceProviding;
-(_UILegibilitySettings *)legibilitySettings;

@end

