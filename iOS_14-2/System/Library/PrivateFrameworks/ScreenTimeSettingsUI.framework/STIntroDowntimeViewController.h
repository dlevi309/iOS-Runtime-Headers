/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STTableWelcomeController.h>

@class STIntroductionModel, STIntroDowntimeTableViewController;

@interface STIntroDowntimeViewController : STTableWelcomeController {

	STIntroductionModel* _model;
	/*^block*/id _continueHandler;

}

@property (readonly) STIntroductionModel * model;                                                   //@synthesize model=_model - In the implementation block
@property (copy,readonly) id continueHandler;                                                       //@synthesize continueHandler=_continueHandler - In the implementation block
@property (nonatomic,retain) STIntroDowntimeTableViewController * tableViewController; 
-(STIntroductionModel *)model;
-(STIntroDowntimeTableViewController *)tableViewController;
-(void)setTableViewController:(STIntroDowntimeTableViewController *)arg1 ;
-(void)loadView;
-(id)continueHandler;
-(void)_notNow:(id)arg1 ;
-(id)initWithIntroductionModel:(id)arg1 continueHandler:(/*^block*/id)arg2 ;
-(void)_setDowntime:(id)arg1 ;
@end

