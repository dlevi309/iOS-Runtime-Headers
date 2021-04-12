/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
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
-(id)initWithVariable:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(WFVariableConfigurationViewController *)viewController;
-(double)preferredHeight;
-(UINavigationController *)navigationController;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
@end

