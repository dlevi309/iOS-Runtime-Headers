/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/CKComponentController.h>
#import <libobjc.A.dylib/WFEnumerationTextTokenChooserPresenter.h>
#import <libobjc.A.dylib/WFParameterValuePickerViewControllerDelegate.h>

@class UISegmentedControl, WFEnumerationValuePicker, NSString;

@interface WFEnumerationParameterComponentController : CKComponentController <WFEnumerationTextTokenChooserPresenter, WFParameterValuePickerViewControllerDelegate> {

	UISegmentedControl* _segmentedControl;
	WFEnumerationValuePicker* _enumValuePicker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)completeEditing;
-(void)didUpdateComponent;
-(void)presentTokenChooser:(id)arg1 ;
-(void)loadDynamicEnumerationValuesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)willUnmount;
-(void)didUnmount;
-(void)presentValuePicker:(id)arg1 ;
-(void)presentEnumerationValuePickerWithInitialCollection:(id)arg1 ;
@end

