/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(void)setTopBorderColor:(UIColor *)arg1 ;
-(void)setBottomBorderColor:(UIColor *)arg1 ;
-(NSString *)actionString;
-(UIColor *)bottomBorderColor;
-(UIColor *)topBorderColor;
-(void)setActionString:(NSString *)arg1 ;
@end

