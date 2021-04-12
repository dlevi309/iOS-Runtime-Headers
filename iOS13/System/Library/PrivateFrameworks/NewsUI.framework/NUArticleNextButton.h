/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UILabel, UIImageView;

@interface NUArticleNextButton : UIButton {

	UILabel* _nextTitleLabel;
	UIImageView* _nextArrowImageView;

}

@property (nonatomic,readonly) UILabel * nextTitleLabel;                      //@synthesize nextTitleLabel=_nextTitleLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * nextArrowImageView;              //@synthesize nextArrowImageView=_nextArrowImageView - In the implementation block
+(id)titleLabelFont;
+(id)nextArrowImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIImageView *)nextArrowImageView;
-(UILabel *)nextTitleLabel;
-(void)setNextLabelTitle:(id)arg1 animated:(BOOL)arg2 ;
@end

