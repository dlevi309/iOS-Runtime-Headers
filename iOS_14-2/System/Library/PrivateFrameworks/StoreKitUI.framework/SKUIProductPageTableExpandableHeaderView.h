/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class UILabel, UIView, SKUIColorScheme, NSString, UIColor;

@interface SKUIProductPageTableExpandableHeaderView : UIControl {

	UILabel* _actionLabel;
	UIView* _bottomBorderView;
	UILabel* _titleLabel;
	UIView* _topBorderView;
	SKUIColorScheme* _colorScheme;

}

@property (nonatomic,copy) NSString * actionString; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) SKUIColorScheme * colorScheme;              //@synthesize colorScheme=_colorScheme - In the implementation block
@property (nonatomic,copy) UIColor * bottomBorderColor; 
@property (nonatomic,copy) UIColor * topBorderColor; 
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)actionString;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(void)setTopBorderColor:(UIColor *)arg1 ;
-(UIColor *)topBorderColor;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(void)setBottomBorderColor:(UIColor *)arg1 ;
-(UIColor *)bottomBorderColor;
-(void)setActionString:(NSString *)arg1 ;
@end

