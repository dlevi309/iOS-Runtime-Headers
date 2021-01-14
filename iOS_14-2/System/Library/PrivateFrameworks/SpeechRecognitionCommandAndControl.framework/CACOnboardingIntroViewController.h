/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <OnBoardingKit/OBWelcomeController.h>

@class OBTrayButton, CACOnboardingCommandsTableViewController;

@interface CACOnboardingIntroViewController : OBWelcomeController {

	OBTrayButton* _mainButton;
	OBTrayButton* _linkButton;
	CACOnboardingCommandsTableViewController* _onboardingTVC;
	unsigned long long _style;

}

@property (nonatomic,retain) OBTrayButton * mainButton;                                             //@synthesize mainButton=_mainButton - In the implementation block
@property (nonatomic,retain) OBTrayButton * linkButton;                                             //@synthesize linkButton=_linkButton - In the implementation block
@property (nonatomic,retain) CACOnboardingCommandsTableViewController * onboardingTVC;              //@synthesize onboardingTVC=_onboardingTVC - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                              //@synthesize style=_style - In the implementation block
+(id)defaultControllerWithStyle:(unsigned long long)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)setStyle:(unsigned long long)arg1 ;
-(OBTrayButton *)linkButton;
-(unsigned long long)style;
-(void)dealloc;
-(void)setLinkButton:(OBTrayButton *)arg1 ;
-(BOOL)shouldInlineButtonTray;
-(OBTrayButton *)mainButton;
-(void)setMainButton:(OBTrayButton *)arg1 ;
-(void)dismissWelcomeController;
-(void)languageDidChange;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 style:(unsigned long long)arg4 ;
-(void)enableVoiceControlAndMoveToCommandsOverview;
-(void)presentLanguageSelection;
-(void)configureLanguageButton;
-(void)configureDownloadCaption;
-(CACOnboardingCommandsTableViewController *)onboardingTVC;
-(void)setOnboardingTVC:(CACOnboardingCommandsTableViewController *)arg1 ;
@end

