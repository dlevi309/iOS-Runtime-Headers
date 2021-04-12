/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <OnBoardingKit/OBWelcomeController.h>

@class PSListController, OBBoldTrayButton;

@interface PSUICarrierSpaceOptInSplashScreen : OBWelcomeController {

	/*^block*/id _continueButtonAction;
	PSListController* _listController;
	OBBoldTrayButton* _continueButton;

}

@property (assign,nonatomic,__weak) PSListController * listController;              //@synthesize listController=_listController - In the implementation block
@property (nonatomic,retain) OBBoldTrayButton * continueButton;                     //@synthesize continueButton=_continueButton - In the implementation block
@property (nonatomic,copy) id continueButtonAction;                                 //@synthesize continueButtonAction=_continueButtonAction - In the implementation block
-(id)initWithParent:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setContinueButton:(OBBoldTrayButton *)arg1 ;
-(OBBoldTrayButton *)continueButton;
-(PSListController *)listController;
-(void)setListController:(PSListController *)arg1 ;
-(void)continueButtonPressed;
-(void)setContinueButtonAction:(id)arg1 ;
-(id)continueButtonAction;
@end

