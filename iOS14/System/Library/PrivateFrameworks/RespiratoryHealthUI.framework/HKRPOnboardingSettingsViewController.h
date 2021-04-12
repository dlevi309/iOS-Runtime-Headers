/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RespiratoryHealthUI.framework/RespiratoryHealthUI
*/

#import <RespiratoryHealthUI/RespiratoryHealthUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/BPSMiniFlowStepController.h>

@protocol BPSSetupMiniFlowControllerDelegate, HKRPOnboardingDelegate;
@class HKRPOxygenSaturationSettings, HKRPOxygenSaturationOnboardingManager, UILabel, RespiratoryHealthHeroView, OBBoldTrayButton, OBLinkTrayButton, UIView, UIVisualEffectView, UIScrollView;

@interface HKRPOnboardingSettingsViewController : UIViewController <BPSMiniFlowStepController> {

	id<BPSSetupMiniFlowControllerDelegate> miniFlowDelegate;
	long long _style;
	HKRPOxygenSaturationSettings* _settings;
	HKRPOxygenSaturationOnboardingManager* _onboardingManager;
	id<HKRPOnboardingDelegate> _onboardingDelegate;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	RespiratoryHealthHeroView* _watchView;
	OBBoldTrayButton* _suggestedChoiceButton;
	OBLinkTrayButton* _setupLaterButton;
	UILabel* _locationLabel;
	UIView* _footerView;
	UIVisualEffectView* _blurView;
	UIScrollView* _scrollView;
	UIView* _contentView;

}

@property (assign,nonatomic) long long style;                                                             //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) HKRPOxygenSaturationSettings * settings;                                     //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) HKRPOxygenSaturationOnboardingManager * onboardingManager;                   //@synthesize onboardingManager=_onboardingManager - In the implementation block
@property (assign,nonatomic,__weak) id<HKRPOnboardingDelegate> onboardingDelegate;                        //@synthesize onboardingDelegate=_onboardingDelegate - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                                                  //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) RespiratoryHealthHeroView * watchView;                                       //@synthesize watchView=_watchView - In the implementation block
@property (nonatomic,retain) OBBoldTrayButton * suggestedChoiceButton;                                    //@synthesize suggestedChoiceButton=_suggestedChoiceButton - In the implementation block
@property (nonatomic,retain) OBLinkTrayButton * setupLaterButton;                                         //@synthesize setupLaterButton=_setupLaterButton - In the implementation block
@property (nonatomic,retain) UILabel * locationLabel;                                                     //@synthesize locationLabel=_locationLabel - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                                         //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * blurView;                                               //@synthesize blurView=_blurView - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                                   //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                        //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic,__weak) id<BPSSetupMiniFlowControllerDelegate> miniFlowDelegate; 
-(UILabel *)titleLabel;
-(UIView *)footerView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setBlurView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)blurView;
-(void)setLocationLabel:(UILabel *)arg1 ;
-(void)setSettings:(HKRPOxygenSaturationSettings *)arg1 ;
-(id)backgroundColor;
-(id)labelColor;
-(id)_localizedStringForKey:(id)arg1 ;
-(void)viewDidLoad;
-(HKRPOxygenSaturationSettings *)settings;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(id<HKRPOnboardingDelegate>)onboardingDelegate;
-(void)setContentView:(UIView *)arg1 ;
-(void)setOnboardingDelegate:(id<HKRPOnboardingDelegate>)arg1 ;
-(void)setFooterView:(UIView *)arg1 ;
-(OBLinkTrayButton *)setupLaterButton;
-(void)setSetupLaterButton:(OBLinkTrayButton *)arg1 ;
-(id)_headerTitleFont;
-(void)setStyle:(long long)arg1 ;
-(id)pillBackgroundColor;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(UILabel *)locationLabel;
-(UIView *)contentView;
-(UIScrollView *)scrollView;
-(HKRPOxygenSaturationOnboardingManager *)onboardingManager;
-(void)viewDidLayoutSubviews;
-(long long)style;
-(UILabel *)descriptionLabel;
-(OBBoldTrayButton *)suggestedChoiceButton;
-(void)setOnboardingManager:(HKRPOxygenSaturationOnboardingManager *)arg1 ;
-(RespiratoryHealthHeroView *)watchView;
-(void)setWatchView:(RespiratoryHealthHeroView *)arg1 ;
-(void)setSuggestedChoiceButton:(OBBoldTrayButton *)arg1 ;
-(id<BPSSetupMiniFlowControllerDelegate>)miniFlowDelegate;
-(void)setMiniFlowDelegate:(id<BPSSetupMiniFlowControllerDelegate>)arg1 ;
-(void)_onboardWithCompletion:(/*^block*/id)arg1 ;
-(void)_presentOnboardingError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithStyle:(long long)arg1 settings:(id)arg2 onboardingManager:(id)arg3 onboardingDelegate:(id)arg4 ;
-(double)_calculateHeroHorizontalMarginForViewFrame:(CGRect)arg1 ;
-(void)setupLaterButtonPressed:(id)arg1 ;
-(void)suggestedChoiceButtonPressed:(id)arg1 ;
-(id)pillBackgroundSelectedColor;
-(id)pillTitleColor;
-(void)_installWatchAppIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)_askUserToInstallWatchAppWithCompletion:(/*^block*/id)arg1 ;
-(id)pillTitleSelectedColor;
@end

