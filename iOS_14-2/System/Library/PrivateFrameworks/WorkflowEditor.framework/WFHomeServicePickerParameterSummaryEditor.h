/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/WFModuleSummaryEditor.h>
#import <libobjc.A.dylib/HUServicePickerViewControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class UIViewController, HMHome, NSString;

@interface WFHomeServicePickerParameterSummaryEditor : WFModuleSummaryEditor <HUServicePickerViewControllerDelegate, UIPopoverPresentationControllerDelegate> {

	UIViewController* _presentedViewController;
	HMHome* _home;

}

@property (assign,nonatomic,__weak) UIViewController * presentedViewController;              //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (nonatomic,retain) HMHome * home;                                                  //@synthesize home=_home - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)setPresentedViewController:(UIViewController *)arg1 ;
-(void)setHome:(HMHome *)arg1 ;
-(HMHome *)home;
-(UIViewController *)presentedViewController;
-(void)servicePickerDidCancel:(id)arg1 ;
-(void)servicePickerDidFinish:(id)arg1 selectedServices:(id)arg2 ;
-(void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 ;
-(void)cancelEditingWithCompletionHandler:(/*^block*/id)arg1 ;
@end

