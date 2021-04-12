/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <OnBoardingKit/OBWelcomeController.h>

@class OBBoldTrayButton;

@interface CACOnboardingPrivacyViewController : OBWelcomeController {

	OBBoldTrayButton* _acceptButton;

}

@property (nonatomic,retain) OBBoldTrayButton * acceptButton;              //@synthesize acceptButton=_acceptButton - In the implementation block
+(id)defaultController;
-(void)dismiss;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(BOOL)isModalInPresentation;
-(OBBoldTrayButton *)acceptButton;
-(void)setAcceptButton:(OBBoldTrayButton *)arg1 ;
-(id)_defaultController;
-(void)allowDataCollection;
-(void)disallowDataCollection;
-(void)showPrivacy;
@end

