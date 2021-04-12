/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STTableWelcomeController.h>

@class STIntroductionModel, OBBoldTrayButton, STIntroAppLimitsTableViewController;

@interface STIntroAppLimitsViewController : STTableWelcomeController {

	STIntroductionModel* _model;
	/*^block*/id _continueHandler;
	OBBoldTrayButton* _setAppLimitButton;

}

@property (readonly) STIntroductionModel * model;                                                    //@synthesize model=_model - In the implementation block
@property (copy,readonly) id continueHandler;                                                        //@synthesize continueHandler=_continueHandler - In the implementation block
@property (retain) OBBoldTrayButton * setAppLimitButton;                                             //@synthesize setAppLimitButton=_setAppLimitButton - In the implementation block
@property (nonatomic,retain) STIntroAppLimitsTableViewController * tableViewController; 
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(STIntroductionModel *)model;
-(STIntroAppLimitsTableViewController *)tableViewController;
-(void)setTableViewController:(STIntroAppLimitsTableViewController *)arg1 ;
-(void)loadView;
-(id)continueHandler;
-(void)_notNow:(id)arg1 ;
-(void)dealloc;
-(void)_setAppLimit:(id)arg1 ;
-(void)setSetAppLimitButton:(OBBoldTrayButton *)arg1 ;
-(void)_allowanceTimeDidChange:(id)arg1 ;
-(void)_allowanceSelectedCategoriesDidChange:(id)arg1 ;
-(void)_updateSetAppLimitButtonWithTime:(id)arg1 selectedCategories:(id)arg2 ;
-(OBBoldTrayButton *)setAppLimitButton;
-(id)initWithIntroductionModel:(id)arg1 continueHandler:(/*^block*/id)arg2 ;
@end

