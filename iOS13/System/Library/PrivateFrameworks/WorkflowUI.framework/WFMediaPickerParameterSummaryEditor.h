/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <WorkflowUI/WFModuleSummaryEditor.h>
#import <libobjc.A.dylib/MPMediaPickerControllerDelegatePrivate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class UIViewController, NSString;

@interface WFMediaPickerParameterSummaryEditor : WFModuleSummaryEditor <MPMediaPickerControllerDelegatePrivate, UIPopoverPresentationControllerDelegate> {

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
-(void)mediaPicker:(id)arg1 didPickPlaybackArchive:(id)arg2 ;
-(void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2 ;
-(void)mediaPickerDidCancel:(id)arg1 ;
-(void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 ;
-(void)cancelEditingWithCompletionHandler:(/*^block*/id)arg1 ;
@end

