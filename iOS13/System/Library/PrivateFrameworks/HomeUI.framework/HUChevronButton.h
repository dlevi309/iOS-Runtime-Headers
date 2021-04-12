/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(UIStackView *)containerView;
-(void)setContainerView:(UIStackView *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIImageView *)chevronImageView;
-(void)setChevronImageView:(UIImageView *)arg1 ;
@end

