/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/WFModuleSummaryEditor.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class WFEnumerationValuePicker, WFSlotIdentifier, NSString;

@interface WFEnumerationParameterSummaryEditor : WFModuleSummaryEditor <UIPopoverPresentationControllerDelegate> {

	WFEnumerationValuePicker* _valuePicker;
	WFSlotIdentifier* _editingSlotIdentifier;

}

@property (nonatomic,retain) WFEnumerationValuePicker * valuePicker;                //@synthesize valuePicker=_valuePicker - In the implementation block
@property (nonatomic,retain) WFSlotIdentifier * editingSlotIdentifier;              //@synthesize editingSlotIdentifier=_editingSlotIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)variableResultTypeForParameter:(id)arg1 ;
-(void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 ;
-(void)cancelEditingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)completeEditing;
-(void)beginEditingNewArrayElementFromSourceViewController:(id)arg1 sourceView:(id)arg2 sourceRect:(CGRect)arg3 ;
-(void)loadDynamicEnumerationValuesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadCustomIntentDynamicEnumerationValuesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)presentEnumValuePickerWithSourceViewController:(id)arg1 sourceView:(id)arg2 sourceRect:(CGRect)arg3 ;
-(void)presentCustomIntentDynamicEnumerationForSlotIdentifier:(id)arg1 fromSourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 ;
-(void)presentEnumerationValuePickerForSlotIdentifier:(id)arg1 initialCollection:(id)arg2 fromSourceViewController:(id)arg3 sourceView:(id)arg4 sourceRect:(CGRect)arg5 ;
-(WFEnumerationValuePicker *)valuePicker;
-(void)setValuePicker:(WFEnumerationValuePicker *)arg1 ;
-(WFSlotIdentifier *)editingSlotIdentifier;
-(void)setEditingSlotIdentifier:(WFSlotIdentifier *)arg1 ;
@end

