/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

