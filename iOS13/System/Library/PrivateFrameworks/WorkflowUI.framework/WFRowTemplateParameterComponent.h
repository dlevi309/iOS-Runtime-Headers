/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <ComponentKit/CKCompositeComponent.h>

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

