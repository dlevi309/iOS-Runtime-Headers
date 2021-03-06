/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/WFModuleSummaryEditor.h>
#import <libobjc.A.dylib/WFRecipientFieldViewControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class UIViewController, NSString;

@interface WFContactFieldParameterSummaryEditor : WFModuleSummaryEditor <WFRecipientFieldViewControllerDelegate, UIPopoverPresentationControllerDelegate> {

	UIViewController* _presentedViewController;

}

@property (assign,nonatomic,__weak) UIViewController * presentedViewController;              //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)variableResultTypeForParameter:(id)arg1 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)setPresentedViewController:(UIViewController *)arg1 ;
-(UIViewController *)presentedViewController;
-(void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 ;
-(void)cancelEditingWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)variableMenuInitialStateForSlotWithIdentifier:(id)arg1 ;
-(void)beginEditingNewArrayElementFromSourceViewController:(id)arg1 sourceView:(id)arg2 sourceRect:(CGRect)arg3 ;
-(void)recipientViewControllerDidFinish:(id)arg1 cancelled:(BOOL)arg2 ;
-(void)presentContactChooserWithSourceViewController:(id)arg1 sourceView:(id)arg2 sourceRect:(CGRect)arg3 ;
-(void)presentSinglePickerFromSourceViewController:(id)arg1 sourceView:(id)arg2 sourceRect:(CGRect)arg3 ;
@end

