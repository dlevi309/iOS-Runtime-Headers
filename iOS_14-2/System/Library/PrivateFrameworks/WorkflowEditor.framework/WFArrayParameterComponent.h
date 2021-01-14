/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/WFParameterComponent.h>

@class WFArrayParameterState, WFArrayParameter;

@interface WFArrayParameterComponent : WFParameterComponent {

	WFArrayParameterState* _state;
	WFArrayParameter* _parameter;
	/*^block*/id _updateBlock;

}

@property (nonatomic,__weak,readonly) WFArrayParameter * parameter;              //@synthesize parameter=_parameter - In the implementation block
+(Class)stateClass;
+(id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(/*^block*/id)arg3 options:(WFParameterComponentOptions)arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7 labelsToAlignTo:(id)arg8 ;
+(BOOL)standaloneVariablesAsContentItems;
-(WFArrayParameter *)parameter;
-(/*^block*/id)updateBlock;
-(void)arrayEditor:(id)arg1 confirmDeletion:(id)arg2 ;
-(void)notifyParameterObserverWithValues:(id)arg1 updateItem:(id)arg2 ;
@end

