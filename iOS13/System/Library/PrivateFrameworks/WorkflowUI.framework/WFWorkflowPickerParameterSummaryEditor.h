/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <WorkflowUI/WFEnumerationParameterSummaryEditor.h>
#import <libobjc.A.dylib/WFWorkflowPickerViewControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class UIViewController, NSString;

@interface WFWorkflowPickerParameterSummaryEditor : WFEnumerationParameterSummaryEditor <WFWorkflowPickerViewControllerDelegate, UIPopoverPresentationControllerDelegate> {

	UIViewController* _presentedViewController;

}

@property (assign,nonatomic,__weak) UIViewController * presentedViewController;              //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIViewController *)presentedViewController;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)setPresentedViewController:(UIViewController *)arg1 ;
-(void)workflowPickerViewControllerDidCancel:(id)arg1 ;
-(void)workflowPickerViewController:(id)arg1 didSelectWorkflowWithName:(id)arg2 ;
-(void)workflowPickerViewController:(id)arg1 didSelectVariable:(id)arg2 ;
-(void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 ;
-(void)cancelEditingWithCompletionHandler:(/*^block*/id)arg1 ;
@end

