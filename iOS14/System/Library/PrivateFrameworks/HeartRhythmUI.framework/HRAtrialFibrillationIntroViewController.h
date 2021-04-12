/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)_titleFont;
-(void)viewDidLoad;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UILabel *)bodyLabel;
-(void)setContentView:(UIView *)arg1 ;
-(void)setUpConstraints;
-(id)_titleFontTextStyle;
-(UIView *)heroView;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(id)_bodyFont;
-(UIView *)contentView;
-(void)setHeroView:(UIView *)arg1 ;
-(void)setUpUI;
-(UIScrollView *)scrollView;
-(double)_titleTopToFirstBaselineLeading;
-(id)_bodyFontTextStyle;
-(id)_createHeroView;
-(double)_assetImageBottomToTitleFirstBaseline;
-(double)_titleLastBaselineToBodyFirstBaseline;
-(void)setLearnMoreContentView:(UIView *)arg1 ;
-(UIView *)learnMoreContentView;
-(double)_bodyLastBaselineToContentBottom;
@end

