/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <ComponentKit/CKComponentController.h>
#import <libobjc.A.dylib/WFEnumerationTextTokenChooserPresenter.h>

@class UISegmentedControl, WFEnumerationTextTokenChooser;

@interface WFEnumerationParameterComponentController : CKComponentController <WFEnumerationTextTokenChooserPresenter> {

	UISegmentedControl* _segmentedControl;
	WFEnumerationTextTokenChooser* _textTokenChooser;

}
-(void)presentTokenChooser:(id)arg1 ;
-(void)completeEditing;
-(void)loadDynamicEnumerationValuesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)didUpdateComponent;
-(void)willUnmount;
-(void)didUnmount;
@end

