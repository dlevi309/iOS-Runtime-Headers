/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <OnBoardingKit/OBTextWelcomeController.h>

@class OBTrayButton, NSArray;

@interface CACOnboardingCommandsDetailViewController : OBTextWelcomeController {

	BOOL _hideTrayButtons;
	BOOL _skipAnalytics;
	OBTrayButton* _mainButton;
	OBTrayButton* _secondaryButton;
	CACOnboardingCommandsDetailViewController* _nextCommandGroupVC;
	NSArray* _commandGroups;

}

@property (nonatomic,retain) NSArray * commandGroups;                                                     //@synthesize commandGroups=_commandGroups - In the implementation block
@property (assign,nonatomic) BOOL hideTrayButtons;                                                        //@synthesize hideTrayButtons=_hideTrayButtons - In the implementation block
@property (assign,nonatomic) BOOL skipAnalytics;                                                          //@synthesize skipAnalytics=_skipAnalytics - In the implementation block
@property (nonatomic,readonly) OBTrayButton * mainButton;                                                 //@synthesize mainButton=_mainButton - In the implementation block
@property (nonatomic,readonly) OBTrayButton * secondaryButton;                                            //@synthesize secondaryButton=_secondaryButton - In the implementation block
@property (nonatomic,retain) CACOnboardingCommandsDetailViewController * nextCommandGroupVC;              //@synthesize nextCommandGroupVC=_nextCommandGroupVC - In the implementation block
-(void)dismiss;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(BOOL)shouldInlineButtonTray;
-(OBTrayButton *)mainButton;
-(OBTrayButton *)secondaryButton;
-(NSArray *)commandGroups;
-(BOOL)_shouldShowAnalytics;
-(void)showPrivacyIfPossible;
-(BOOL)hideTrayButtons;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 commandGroups:(id)arg3 ;
-(void)setHideTrayButtons:(BOOL)arg1 ;
-(BOOL)_isDataCollectionAvailable;
-(BOOL)skipAnalytics;
-(void)setSkipAnalytics:(BOOL)arg1 ;
-(CACOnboardingCommandsDetailViewController *)nextCommandGroupVC;
-(void)setNextCommandGroupVC:(CACOnboardingCommandsDetailViewController *)arg1 ;
-(void)setCommandGroups:(NSArray *)arg1 ;
@end

