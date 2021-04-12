/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UITableView, UIButton, UIVisualEffectView;

@interface HKSplashScreenView : UIView {

	UILabel* _titleLabel;
	UITableView* _featureTableView;
	UIButton* _continueButton;
	UIVisualEffectView* _topBlurView;
	UIVisualEffectView* _bottomBlurView;

}

@property (nonatomic,retain) UIVisualEffectView * topBlurView;                 //@synthesize topBlurView=_topBlurView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * bottomBlurView;              //@synthesize bottomBlurView=_bottomBlurView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UITableView * featureTableView;                   //@synthesize featureTableView=_featureTableView - In the implementation block
@property (nonatomic,retain) UIButton * continueButton;                        //@synthesize continueButton=_continueButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setContinueButton:(UIButton *)arg1 ;
-(UIButton *)continueButton;
-(void)updateForFontOrTextChange;
-(void)setFeatureTableView:(UITableView *)arg1 ;
-(UITableView *)featureTableView;
-(void)setTopBlurView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)topBlurView;
-(void)setBottomBlurView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)bottomBlurView;
-(void)updateTableViewInsetsForHeaderAndFooterBlurView;
@end

