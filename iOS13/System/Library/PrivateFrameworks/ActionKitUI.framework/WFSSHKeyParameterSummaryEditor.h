/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <ActionKitUI/ActionKitUI-Structs.h>
#import <WorkflowUI/WFModuleSummaryEditor.h>
#import <libobjc.A.dylib/WFSSHKeyConfigurationViewControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class WFSSHKeyConfigurationViewController, NSString;

@interface WFSSHKeyParameterSummaryEditor : WFModuleSummaryEditor <WFSSHKeyConfigurationViewControllerDelegate, UIPopoverPresentationControllerDelegate> {

	WFSSHKeyConfigurationViewController* _viewController;

}

@property (assign,nonatomic,__weak) WFSSHKeyConfigurationViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setViewController:(WFSSHKeyConfigurationViewController *)arg1 ;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(WFSSHKeyConfigurationViewController *)viewController;
-(void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 ;
-(void)cancelEditingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)completeEditing;
-(void)keyConfigurationViewControllerDidFinish:(id)arg1 ;
@end

