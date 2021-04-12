/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/WFParameterComponent.h>

@protocol WFParameterState, WFVariableProvider, WFVariableUIDelegate, WFComponentNavigationContext;
@class WFParameter, WFModuleSummaryBasedParameterComponentStateWriter, WFSlotTemplateSlot;

@interface WFModuleSummaryBasedParameterComponent : WFParameterComponent {

	WFParameter* _parameter;
	WFModuleSummaryBasedParameterComponentStateWriter* _stateWriter;
	id<WFParameterState> _state;
	WFSlotTemplateSlot* _buttonSlot;
	id<WFVariableProvider> _variableProvider;
	id<WFVariableUIDelegate> _variableUIDelegate;
	id<WFComponentNavigationContext> _navigationContext;

}

@property (nonatomic,readonly) WFModuleSummaryBasedParameterComponentStateWriter * stateWriter;              //@synthesize stateWriter=_stateWriter - In the implementation block
@property (nonatomic,readonly) id<WFParameterState> state;                                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) WFSlotTemplateSlot * buttonSlot;                                              //@synthesize buttonSlot=_buttonSlot - In the implementation block
@property (nonatomic,__weak,readonly) id<WFVariableProvider> variableProvider;                               //@synthesize variableProvider=_variableProvider - In the implementation block
@property (nonatomic,__weak,readonly) id<WFVariableUIDelegate> variableUIDelegate;                           //@synthesize variableUIDelegate=_variableUIDelegate - In the implementation block
@property (nonatomic,readonly) id<WFComponentNavigationContext> navigationContext;                           //@synthesize navigationContext=_navigationContext - In the implementation block
+(id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(/*^block*/id)arg3 options:(WFParameterComponentOptions)arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7 labelsToAlignTo:(id)arg8 ;
+(id)singleButtonSlotForParameter:(id)arg1 state:(id)arg2 ;
-(id)parameter;
-(id<WFParameterState>)state;
-(id<WFVariableProvider>)variableProvider;
-(id<WFComponentNavigationContext>)navigationContext;
-(id<WFVariableUIDelegate>)variableUIDelegate;
-(WFModuleSummaryBasedParameterComponentStateWriter *)stateWriter;
-(WFSlotTemplateSlot *)buttonSlot;
@end

