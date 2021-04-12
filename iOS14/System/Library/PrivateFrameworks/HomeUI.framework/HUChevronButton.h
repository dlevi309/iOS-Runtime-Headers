/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class UILabel, UIStackView, UIImageView;

@interface HUChevronButton : UIControl {

	UILabel* _titleLabel;
	UIStackView* _containerView;
	UIImageView* _chevronImageView;

}

@property (nonatomic,retain) UIStackView * containerView;                 //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * chevronImageView;              //@synthesize chevronImageView=_chevronImageView - In the implementation block
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setContainerView:(UIStackView *)arg1 ;
-(id)viewForLastBaselineLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)viewForFirstBaselineLayout;
-(UIStackView *)containerView;
-(UIImageView *)chevronImageView;
-(void)setChevronImageView:(UIImageView *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

