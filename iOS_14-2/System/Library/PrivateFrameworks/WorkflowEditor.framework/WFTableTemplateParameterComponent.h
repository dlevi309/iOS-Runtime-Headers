/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/WFParameterComponent.h>

@protocol WFVariableProvider;
@class WFTableTemplateParameterState, WFTableTemplateParameter;

@interface WFTableTemplateParameterComponent : WFParameterComponent {

	WFTableTemplateParameterState* _state;
	id<WFVariableProvider> _variableProvider;
	WFTableTemplateParameter* _parameter;
	/*^block*/id _updateBlock;

}

@property (nonatomic,__weak,readonly) WFTableTemplateParameter * parameter;              //@synthesize parameter=_parameter - In the implementation block
+(id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(/*^block*/id)arg3 options:(WFParameterComponentOptions)arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7 labelsToAlignTo:(id)arg8 ;
-(WFTableTemplateParameter *)parameter;
-(/*^block*/id)updateBlock;
-(void)handleParameterLayoutPressed;
-(void)rowComponentTapped;
-(void)rowComponent:(id)arg1 deletedAtIndex:(unsigned long long)arg2 ;
-(void)rowComponent:(id)arg1 minusTappedAtIndex:(unsigned long long)arg2 ;
@end

