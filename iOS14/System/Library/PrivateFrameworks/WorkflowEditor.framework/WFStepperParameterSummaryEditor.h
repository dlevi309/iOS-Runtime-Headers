/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/WFModuleSummaryEditor.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class UIViewController, NSString;

@interface WFStepperParameterSummaryEditor : WFModuleSummaryEditor <UIPopoverPresentationControllerDelegate> {

	UIViewController* _presentedViewController;

}

@property (assign,nonatomic,__weak) UIViewController * presentedViewController;              //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)setPresentedViewController:(UIViewController *)arg1 ;
-(UIViewController *)presentedViewController;
-(void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 ;
-(void)cancelEditingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)stepperValueChanged:(id)arg1 ;
-(void)stepperTouchUp:(id)arg1 ;
@end

