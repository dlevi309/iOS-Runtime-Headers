/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <WorkflowUI/WFParameterComponent.h>

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
-(/*^block*/id)updateBlock;
-(void)buttonTapped:(id)arg1 ;
-(WFQuantityFieldParameter *)parameter;
@end

