/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <HealthUI/HKViewController.h>

@class UIScrollView, UIView, UILabel;

@interface HRAtrialFibrillationIntroViewController : HKViewController {

	UIScrollView* _scrollView;
	UIView* _contentView;
	UIView* _heroView;
	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	UIView* _learnMoreContentView;

}

@property (nonatomic,retain) UIScrollView * scrollView;                  //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                       //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * heroView;                          //@synthesize heroView=_heroView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * bodyLabel;                        //@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (nonatomic,retain) UIView * learnMoreContentView;              //@synthesize learnMoreContentView=_learnMoreContentView - In the implementation block
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(UILabel *)titleLabel;
-(void)viewDidLoad;
-(id)_titleFont;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UILabel *)bodyLabel;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(void)setUpConstraints;
-(void)setHeroView:(UIView *)arg1 ;
-(UIView *)heroView;
-(id)_titleFontTextStyle;
-(id)_bodyFont;
-(void)setUpUI;
-(double)_titleTopToFirstBaselineLeading;
-(id)_bodyFontTextStyle;
-(id)_createHeroView;
-(double)_assetImageBottomToTitleFirstBaseline;
-(double)_titleLastBaselineToBodyFirstBaseline;
-(void)setLearnMoreContentView:(UIView *)arg1 ;
-(UIView *)learnMoreContentView;
-(double)_bodyLastBaselineToContentBottom;
@end

