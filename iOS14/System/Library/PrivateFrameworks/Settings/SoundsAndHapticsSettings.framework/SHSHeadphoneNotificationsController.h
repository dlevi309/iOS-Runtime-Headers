/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/SoundsAndHapticsSettings.framework/SoundsAndHapticsSettings
*/

#import <UIKitCore/UIViewController.h>

@class UIScrollView, UILabel, UIButton;

@interface SHSHeadphoneNotificationsController : UIViewController {

	UIScrollView* _scrollView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UIButton* _learnMoreButton;

}

@property (nonatomic,retain) UIScrollView * scrollView;               //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;              //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) UIButton * learnMoreButton;              //@synthesize learnMoreButton=_learnMoreButton - In the implementation block
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)descriptionText;
-(id)titleText;
-(UIButton *)learnMoreButton;
-(void)setLearnMoreButton:(UIButton *)arg1 ;
-(void)viewDidLoad;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(UIScrollView *)scrollView;
-(UILabel *)descriptionLabel;
-(id)createTitleLabel;
-(id)createScrollView;
-(id)createDescriptionLabel;
-(id)createLearnMoreButton;
-(void)openHealthArticleSafeListening;
@end

