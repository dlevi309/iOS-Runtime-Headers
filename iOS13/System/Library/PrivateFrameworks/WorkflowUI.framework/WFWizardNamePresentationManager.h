/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@class UINavigationController, WFWorkflowWizardNameViewController;

@interface WFWizardNamePresentationManager : NSObject {

	BOOL _presentsModally;
	UINavigationController* _navigationController;
	WFWorkflowWizardNameViewController* _wizardNameViewController;

}

@property (nonatomic,readonly) UINavigationController * navigationController;                              //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,readonly) WFWorkflowWizardNameViewController * wizardNameViewController;              //@synthesize wizardNameViewController=_wizardNameViewController - In the implementation block
@property (nonatomic,readonly) BOOL presentsModally;                                                       //@synthesize presentsModally=_presentsModally - In the implementation block
-(void)dismiss;
-(void)present;
-(UINavigationController *)navigationController;
-(id)initWithNavigationController:(id)arg1 wizardNameViewController:(id)arg2 ;
-(void)presentModal;
-(WFWorkflowWizardNameViewController *)wizardNameViewController;
-(BOOL)presentsModally;
@end

