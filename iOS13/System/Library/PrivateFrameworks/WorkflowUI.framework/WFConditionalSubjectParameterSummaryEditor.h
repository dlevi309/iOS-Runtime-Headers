/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <WorkflowUI/WFModuleSummaryEditor.h>
#import <libobjc.A.dylib/HUServicePickerViewControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class WFTextTokenChooser, UIViewController, HMHome, NSString;

@interface WFConditionalSubjectParameterSummaryEditor : WFModuleSummaryEditor <HUServicePickerViewControllerDelegate, UIPopoverPresentationControllerDelegate> {

	WFTextTokenChooser* _chooser;
	UIViewController* _presentedViewController;
	HMHome* _home;

}

@property (nonatomic,retain) WFTextTokenChooser * chooser;                                   //@synthesize chooser=_chooser - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentedViewController;              //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (nonatomic,retain) HMHome * home;                                                  //@synthesize home=_home - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)variableResultTypeForParameter:(id)arg1 ;
-(HMHome *)home;
-(UIViewController *)presentedViewController;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)setPresentedViewController:(UIViewController *)arg1 ;
-(void)setHome:(HMHome *)arg1 ;
-(WFTextTokenChooser *)chooser;
-(void)setChooser:(WFTextTokenChooser *)arg1 ;
-(void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 ;
-(void)cancelEditingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)servicePickerDidFinish:(id)arg1 selectedServices:(id)arg2 ;
-(void)servicePickerDidCancel:(id)arg1 ;
-(void)beginVariableMenuForSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 ;
-(id)stateByReplacingVariableFromInitialState:(id)arg1 withVariable:(id)arg2 ;
-(void)presentHomePickerFromSourceViewController:(id)arg1 sourceView:(id)arg2 sourceRect:(CGRect)arg3 ;
-(void)presentServicePickerFromSourceViewController:(id)arg1 home:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 ;
-(void)presentCharacteristicPickerFromSourceViewController:(id)arg1 sourceView:(id)arg2 sourceRect:(CGRect)arg3 ;
-(id)contextHome;
@end

