/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol HKOnboardingSetupViewDelegate;
@class UIView, UILabel, UIButton, NSString;

@interface HKOnboardingSetupView : UIView {

	id<HKOnboardingSetupViewDelegate> _delegate;
	UIView* _heroView;
	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	UIButton* _onboardingButton;

}

@property (nonatomic,retain) UIView * heroView;                                              //@synthesize heroView=_heroView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * bodyLabel;                                            //@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (nonatomic,retain) UIButton * onboardingButton;                                    //@synthesize onboardingButton=_onboardingButton - In the implementation block
@property (assign,nonatomic,__weak) id<HKOnboardingSetupViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * titleString; 
@property (nonatomic,readonly) NSString * bodyString; 
@property (nonatomic,readonly) NSString * buttonTitleString; 
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<HKOnboardingSetupViewDelegate>)delegate;
-(void)_setUpConstraints;
-(void)setDelegate:(id<HKOnboardingSetupViewDelegate>)arg1 ;
-(NSString *)bodyString;
-(UILabel *)bodyLabel;
-(NSString *)titleString;
-(UIView *)heroView;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(void)setHeroView:(UIView *)arg1 ;
-(id)createHeroView;
-(NSString *)buttonTitleString;
-(void)_didTapOnboardingButton;
-(UIButton *)onboardingButton;
-(void)setOnboardingButton:(UIButton *)arg1 ;
@end

