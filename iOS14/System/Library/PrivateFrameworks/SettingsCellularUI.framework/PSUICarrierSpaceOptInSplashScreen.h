/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setListController:(PSListController *)arg1 ;
-(id)initWithParent:(id)arg1 ;
-(OBBoldTrayButton *)continueButton;
-(PSListController *)listController;
-(void)setContinueButton:(OBBoldTrayButton *)arg1 ;
-(void)continueButtonPressed;
-(void)setContinueButtonAction:(id)arg1 ;
-(id)continueButtonAction;
@end

