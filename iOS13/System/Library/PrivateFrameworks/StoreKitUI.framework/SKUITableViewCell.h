/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class SKUIBorderView, UIColor;

@interface SKUITableViewCell : UITableViewCell {

	SKUIBorderView* _bottomBorderView;
	SKUIBorderView* _topBorderView;
	double _titlePaddingLeft;
	UIEdgeInsets _textLabelInsets;
	double _borderPaddingLeft;

}

@property (nonatomic,copy) UIColor * bottomBorderColor; 
@property (nonatomic,copy) UIColor * topBorderColor; 
@property (assign,nonatomic) double borderPaddingLeft;                  //@synthesize borderPaddingLeft=_borderPaddingLeft - In the implementation block
@property (assign,nonatomic) UIEdgeInsets textLabelInsets;              //@synthesize textLabelInsets=_textLabelInsets - In the implementation block
-(void)prepareForReuse;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setTopBorderColor:(UIColor *)arg1 ;
-(void)setBorderPaddingLeft:(double)arg1 ;
-(void)setTextLabelInsets:(UIEdgeInsets)arg1 ;
-(void)setBottomBorderColor:(UIColor *)arg1 ;
-(void)_reloadBorderVisibility;
-(UIColor *)bottomBorderColor;
-(UIColor *)topBorderColor;
-(double)borderPaddingLeft;
-(UIEdgeInsets)textLabelInsets;
@end

