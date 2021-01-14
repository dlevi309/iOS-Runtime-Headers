/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UIInputView.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class WFVariableConfigurationViewController, UINavigationController, NSString;

@interface WFVariableConfigurationView : UIInputView <UINavigationControllerDelegate> {

	WFVariableConfigurationViewController* _viewController;
	UINavigationController* _navigationController;

}

@property (nonatomic,readonly) UINavigationController * navigationController;                       //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,readonly) WFVariableConfigurationViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(double)preferredHeight;
-(WFVariableConfigurationViewController *)viewController;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithVariable:(id)arg1 ;
-(UINavigationController *)navigationController;
@end

