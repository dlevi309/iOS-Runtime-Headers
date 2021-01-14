/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/CKCompositeComponent.h>

@class WFRowTemplateParameterState;

@interface WFRowTemplateParameterComponent : CKCompositeComponent {

	WFRowTemplateParameterState* _state;
	unsigned long long _rowIndex;
	CKTypedComponentAction<unsigned long> _deleteAction;

}
+(id)numberFormatter;
+(id)itemFont;
+(id)newWithState:(id)arg1 rowIndex:(unsigned long long)arg2 updateBlock:(/*^block*/id)arg3 deleteAction:(CKTypedComponentAction<unsigned long>)arg4 tappedAction:(CKTypedComponentAction<>)arg5 options:(WFRowTemplateParameterComponentOptions)arg6 style:(const WFWrappingStackLayoutComponentStyle*)arg7 size:(const CKComponentSize*)arg8 variableProvider:(id)arg9 variableUIDelegate:(id)arg10 navigationContext:(id)arg11 ;
-(void)deleteButtonPressed;
@end

