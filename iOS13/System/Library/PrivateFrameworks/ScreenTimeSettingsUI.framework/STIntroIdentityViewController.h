/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <OnBoardingKit/OBWelcomeController.h>

@class STIntroductionModel;

@interface STIntroIdentityViewController : OBWelcomeController {

	STIntroductionModel* _model;
	/*^block*/id _continueHandler;

}

@property (readonly) STIntroductionModel * model;              //@synthesize model=_model - In the implementation block
@property (copy,readonly) id continueHandler;                  //@synthesize continueHandler=_continueHandler - In the implementation block
-(STIntroductionModel *)model;
-(void)loadView;
-(id)continueHandler;
-(id)initWithIntroductionModel:(id)arg1 continueHandler:(/*^block*/id)arg2 ;
-(void)_myDevice:(id)arg1 ;
-(void)_myChildsDevice:(id)arg1 ;
@end

