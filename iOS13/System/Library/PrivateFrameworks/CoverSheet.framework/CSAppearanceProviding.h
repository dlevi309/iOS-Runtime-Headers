/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSSet *)components;
-(UIColor *)backgroundColor;
-(_UILegibilitySettings *)legibilitySettings;
-(long long)backgroundStyle;
-(NSString *)appearanceIdentifier;

@end

