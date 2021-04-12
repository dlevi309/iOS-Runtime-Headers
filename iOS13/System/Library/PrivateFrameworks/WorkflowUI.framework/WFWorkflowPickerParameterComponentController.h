/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <ComponentKit/CKComponentController.h>
#import <libobjc.A.dylib/WFWorkflowPickerViewControllerDelegate.h>

@class NSString;

@interface WFWorkflowPickerParameterComponentController : CKComponentController <WFWorkflowPickerViewControllerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)buttonTapped:(id)arg1 ;
-(void)parameterLayoutTapped:(id)arg1 ;
-(void)workflowPickerViewControllerDidCancel:(id)arg1 ;
-(void)workflowPickerViewController:(id)arg1 didSelectWorkflowWithName:(id)arg2 ;
-(void)workflowPickerViewController:(id)arg1 didSelectVariable:(id)arg2 ;
@end

