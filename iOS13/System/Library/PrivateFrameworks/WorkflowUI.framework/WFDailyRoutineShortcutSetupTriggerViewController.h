/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <OnBoardingKit/OBWelcomeController.h>

@protocol WFDailyRoutineShortcutSetupTriggerViewControllerDelegate;
@class WFDailyRoutineShortcutSetupTriggerBuilder;

@interface WFDailyRoutineShortcutSetupTriggerViewController : OBWelcomeController {

	id<WFDailyRoutineShortcutSetupTriggerViewControllerDelegate> _delegate;
	WFDailyRoutineShortcutSetupTriggerBuilder* _trigger;

}

@property (assign,nonatomic,__weak) id<WFDailyRoutineShortcutSetupTriggerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WFDailyRoutineShortcutSetupTriggerBuilder * trigger;                                     //@synthesize trigger=_trigger - In the implementation block
-(id<WFDailyRoutineShortcutSetupTriggerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFDailyRoutineShortcutSetupTriggerViewControllerDelegate>)arg1 ;
-(WFDailyRoutineShortcutSetupTriggerBuilder *)trigger;
-(id)initWithTrigger:(id)arg1 ;
-(void)didSelectAddTriggerButton;
-(void)didSelectSkipButton;
@end

