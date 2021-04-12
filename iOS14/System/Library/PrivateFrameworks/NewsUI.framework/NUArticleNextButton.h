/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

