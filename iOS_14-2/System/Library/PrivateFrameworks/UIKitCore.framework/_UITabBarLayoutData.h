/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIBarAppearanceData.h>

@class UIColor, UIImage;

@interface _UITabBarLayoutData : _UIBarAppearanceData {

	UIColor* _selectionIndicatorTintColor;
	UIImage* _selectionIndicatorImage;
	long long _itemPositioning;
	double _itemWidth;
	double _itemSpacing;

}

@property (nonatomic,copy) UIColor * selectionIndicatorTintColor;              //@synthesize selectionIndicatorTintColor=_selectionIndicatorTintColor - In the implementation block
@property (nonatomic,retain) UIImage * selectionIndicatorImage;                //@synthesize selectionIndicatorImage=_selectionIndicatorImage - In the implementation block
@property (assign,nonatomic) long long itemPositioning;                        //@synthesize itemPositioning=_itemPositioning - In the implementation block
@property (assign,nonatomic) double itemWidth;                                 //@synthesize itemWidth=_itemWidth - In the implementation block
@property (assign,nonatomic) double itemSpacing;                               //@synthesize itemSpacing=_itemSpacing - In the implementation block
+(id)standardLayoutData;
+(id)decodeFromCoder:(id)arg1 prefix:(id)arg2 ;
-(BOOL)checkEqualTo:(id)arg1 ;
-(id)replicate;
-(void)encodeToCoder:(id)arg1 prefix:(id)arg2 ;
-(UIImage *)selectionIndicatorImage;
-(void)setSelectionIndicatorTintColor:(UIColor *)arg1 ;
-(long long)hashInto:(long long)arg1 ;
-(void)setSelectionIndicatorImage:(UIImage *)arg1 ;
-(void)describeInto:(id)arg1 ;
-(double)itemWidth;
-(UIColor *)selectionIndicatorTintColor;
-(double)itemSpacing;
-(void)setItemPositioning:(long long)arg1 ;
-(long long)positioningForTraitCollection:(id)arg1 ;
-(void)setItemWidth:(double)arg1 ;
-(long long)itemPositioning;
-(void)setItemSpacing:(double)arg1 ;
@end

