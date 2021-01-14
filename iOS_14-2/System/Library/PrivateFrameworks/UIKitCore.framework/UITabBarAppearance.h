/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIBarAppearance.h>

@class _UITabBarLayoutData, UITabBarItemAppearance, UIColor, UIImage;

@interface UITabBarAppearance : UIBarAppearance {

	_UITabBarLayoutData* _layoutData;
	UITabBarItemAppearance* _stackedLayoutAppearance;
	UITabBarItemAppearance* _inlineLayoutAppearance;
	UITabBarItemAppearance* _compactInlineLayoutAppearance;

}

@property (nonatomic,copy) UITabBarItemAppearance * stackedLayoutAppearance;                    //@synthesize stackedLayoutAppearance=_stackedLayoutAppearance - In the implementation block
@property (nonatomic,copy) UITabBarItemAppearance * inlineLayoutAppearance;                     //@synthesize inlineLayoutAppearance=_inlineLayoutAppearance - In the implementation block
@property (nonatomic,copy) UITabBarItemAppearance * compactInlineLayoutAppearance;              //@synthesize compactInlineLayoutAppearance=_compactInlineLayoutAppearance - In the implementation block
@property (nonatomic,copy) UIColor * selectionIndicatorTintColor; 
@property (nonatomic,retain) UIImage * selectionIndicatorImage; 
@property (assign,nonatomic) long long stackedItemPositioning; 
@property (assign,nonatomic) double stackedItemWidth; 
@property (assign,nonatomic) double stackedItemSpacing; 
+(BOOL)supportsSecureCoding;
-(UIImage *)selectionIndicatorImage;
-(void)setStackedItemWidth:(double)arg1 ;
-(void)setSelectionIndicatorTintColor:(UIColor *)arg1 ;
-(void)setSelectionIndicatorImage:(UIImage *)arg1 ;
-(UIColor *)selectionIndicatorTintColor;
-(UITabBarItemAppearance *)inlineLayoutAppearance;
-(id)_inlineTabButtonAppearanceData;
-(void)setInlineLayoutAppearance:(UITabBarItemAppearance *)arg1 ;
-(void)setStackedLayoutAppearance:(UITabBarItemAppearance *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_checkEqualTo:(id)arg1 ;
-(id)_dataForItemStyle:(long long)arg1 ;
-(id)_stackedTabButtonAppearanceData;
-(void)_tabBarItemDataChanged:(id)arg1 ;
-(id)_compactInlineTabButtonAppearanceData;
-(void)_describeInto:(id)arg1 ;
-(void)setCompactInlineLayoutAppearance:(UITabBarItemAppearance *)arg1 ;
-(void)setStackedItemSpacing:(double)arg1 ;
-(double)stackedItemSpacing;
-(void)setStackedItemPositioning:(long long)arg1 ;
-(unsigned long long)_hashInto:(unsigned long long)arg1 ;
-(UITabBarItemAppearance *)stackedLayoutAppearance;
-(id)_tabLayoutAppearanceData;
-(void)_completeInit;
-(double)stackedItemWidth;
-(void)_decodeFromCoder:(id)arg1 ;
-(void)_setupDefaults;
-(UITabBarItemAppearance *)compactInlineLayoutAppearance;
-(long long)stackedItemPositioning;
-(void)_copyFromAppearance:(id)arg1 ;
@end

