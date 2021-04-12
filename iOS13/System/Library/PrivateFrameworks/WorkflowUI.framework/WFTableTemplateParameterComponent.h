/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <WorkflowUI/WFParameterComponent.h>

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
-(/*^block*/id)updateBlock;
-(WFTableTemplateParameter *)parameter;
-(void)handleParameterLayoutPressed;
-(void)rowComponentTapped;
-(void)rowComponent:(id)arg1 deletedAtIndex:(unsigned long long)arg2 ;
-(void)rowComponent:(id)arg1 minusTappedAtIndex:(unsigned long long)arg2 ;
@end

