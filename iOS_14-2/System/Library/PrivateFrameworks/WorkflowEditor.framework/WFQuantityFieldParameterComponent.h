/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/WFParameterComponent.h>

@protocol WFComponentNavigationContext;
@class WFQuantityParameterState, WFQuantityFieldParameter;

@interface WFQuantityFieldParameterComponent : WFParameterComponent {

	WFQuantityParameterState* _state;
	id<WFComponentNavigationContext> _navigationContext;
	WFQuantityFieldParameter* _parameter;
	/*^block*/id _updateBlock;

}

@property (nonatomic,__weak,readonly) WFQuantityFieldParameter * parameter;              //@synthesize parameter=_parameter - In the implementation block
+(id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(/*^block*/id)arg3 options:(WFParameterComponentOptions)arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7 labelsToAlignTo:(id)arg8 ;
-(void)buttonTapped:(id)arg1 ;
-(WFQuantityFieldParameter *)parameter;
-(/*^block*/id)updateBlock;
@end

