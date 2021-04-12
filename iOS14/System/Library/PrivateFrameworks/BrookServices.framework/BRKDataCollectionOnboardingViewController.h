/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BrookServices.framework/BrookServices
*/

#import <OnBoardingKit/OBTextWelcomeController.h>

@class BRKSettings;

@interface BRKDataCollectionOnboardingViewController : OBTextWelcomeController {

	BRKSettings* _settings;

}
+(BOOL)shouldPresentOnboarding;
+(void)presentInViewController:(id)arg1 ;
-(void)viewDidLoad;
-(void)openSettings;
-(void)tappedDisable;
-(void)tappedLearnMore;
-(void)tappedEnable;
@end

