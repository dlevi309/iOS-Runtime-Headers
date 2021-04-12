/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <HeartRhythmUI/HeartRhythmUI-Structs.h>
#import <HeartRhythmUI/HROnboardingBaseViewController.h>
#import <libobjc.A.dylib/HRStackedButtonViewDelegate.h>

@class UILabel, UIStackView, HRStackedButtonView, UIView, NSLayoutConstraint, NSHashTable, NSString, NSArray;

@interface HROnboardingBulletPointViewController : HROnboardingBaseViewController <HRStackedButtonViewDelegate> {

	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	UIStackView* _bulletPointsView;
	HRStackedButtonView* _stackedButtonView;
	UIView* _lastBulletPointView;
	NSLayoutConstraint* _contentViewBottomConstraint;
	NSHashTable* _bulletPointBodyLabels;

}

@property (nonatomic,retain) UILabel * titleLabel;                                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * bodyLabel;                                           //@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (nonatomic,retain) UIStackView * bulletPointsView;                                //@synthesize bulletPointsView=_bulletPointsView - In the implementation block
@property (nonatomic,retain) HRStackedButtonView * stackedButtonView;                       //@synthesize stackedButtonView=_stackedButtonView - In the implementation block
@property (nonatomic,retain) UIView * lastBulletPointView;                                  //@synthesize lastBulletPointView=_lastBulletPointView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewBottomConstraint;              //@synthesize contentViewBottomConstraint=_contentViewBottomConstraint - In the implementation block
@property (nonatomic,retain) NSHashTable * bulletPointBodyLabels;                           //@synthesize bulletPointBodyLabels=_bulletPointBodyLabels - In the implementation block
@property (nonatomic,readonly) NSString * titleString; 
@property (nonatomic,readonly) NSString * bodyString; 
@property (nonatomic,readonly) NSArray * bulletPoints; 
@property (nonatomic,readonly) NSString * buttonTitleString; 
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(NSString *)bodyString;
-(UILabel *)bodyLabel;
-(void)setContentViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setUpConstraints;
-(NSLayoutConstraint *)contentViewBottomConstraint;
-(NSString *)titleString;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(id)_bodyFont;
-(void)setUpUI;
-(void)viewDidLayoutSubviews;
-(NSString *)buttonTitleString;
-(void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2 ;
-(void)_setUpButtonFooterView;
-(void)_adjustButtonFooterViewLocationForViewContentHeight;
-(void)setStackedButtonView:(HRStackedButtonView *)arg1 ;
-(HRStackedButtonView *)stackedButtonView;
-(void)updateUserInterfaceForStyle:(long long)arg1 ;
-(NSHashTable *)bulletPointBodyLabels;
-(void)setBulletPointsView:(UIStackView *)arg1 ;
-(UIStackView *)bulletPointsView;
-(void)_setupBulletPointViews;
-(void)setBulletPointBodyLabels:(NSHashTable *)arg1 ;
-(NSArray *)bulletPoints;
-(CGSize)_bulletImageSize;
-(id)_boldSubheadlineFont;
-(id)_subheadlineFont;
-(double)_cannotDoHeaderLastBaselineToCannotDoBodyFirstBaseline;
-(void)setLastBulletPointView:(UIView *)arg1 ;
-(UIView *)lastBulletPointView;
@end

