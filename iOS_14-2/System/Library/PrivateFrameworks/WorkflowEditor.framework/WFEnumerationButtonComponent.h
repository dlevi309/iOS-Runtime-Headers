/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/CKCompositeComponent.h>

@protocol WFVariableProvider, WFVariableUIDelegate, WFComponentNavigationContext;
@class WFEnumerationParameter, WFVariableSubstitutableParameterState;

@interface WFEnumerationButtonComponent : CKCompositeComponent {

	BOOL _processing;
	WFEnumerationParameter* _parameter;
	WFVariableSubstitutableParameterState* _state;
	/*^block*/id _updateBlock;
	id<WFVariableProvider> _variableProvider;
	id<WFVariableUIDelegate> _variableUIDelegate;
	id<WFComponentNavigationContext> _navigationContext;

}
+(id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(/*^block*/id)arg3 options:(WFParameterComponentOptions)arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7 ;
@end

