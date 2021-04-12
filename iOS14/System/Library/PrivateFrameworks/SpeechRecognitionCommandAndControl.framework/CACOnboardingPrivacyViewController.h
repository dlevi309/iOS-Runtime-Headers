/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <OnBoardingKit/OBWelcomeController.h>

@class OBBoldTrayButton;

@interface CACOnboardingPrivacyViewController : OBWelcomeController {

	OBBoldTrayButton* _acceptButton;

}

@property (nonatomic,retain) OBBoldTrayButton * acceptButton;              //@synthesize acceptButton=_acceptButton - In the implementation block
+(id)defaultController;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(BOOL)isModalInPresentation;
-(OBBoldTrayButton *)acceptButton;
-(void)setAcceptButton:(OBBoldTrayButton *)arg1 ;
-(void)dismiss;
-(id)_defaultController;
-(void)allowDataCollection;
-(void)disallowDataCollection;
-(void)showPrivacy;
@end

