/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)present;
-(UINavigationController *)navigationController;
-(void)dismiss;
-(id)initWithNavigationController:(id)arg1 wizardNameViewController:(id)arg2 ;
-(void)presentModal;
-(WFWorkflowWizardNameViewController *)wizardNameViewController;
-(BOOL)presentsModally;
@end

