/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/WFParameterComponent.h>

@protocol WFVariableProvider, WFVariableUIDelegate, WFComponentNavigationContext;
@class WFEnumerationParameter, WFVariableSubstitutableParameterState, WFEnumerationSegmentedControlComponent;

@interface WFEnumerationParameterComponent : WFParameterComponent {

	BOOL _processing;
	WFEnumerationParameter* _parameter;
	/*^block*/id _updateBlock;
	WFVariableSubstitutableParameterState* _state;
	WFEnumerationSegmentedControlComponent* _segmentedControlComponent;
	id<WFVariableProvider> _variableProvider;
	id<WFVariableUIDelegate> _variableUIDelegate;
	id<WFComponentNavigationContext> _navigationContext;

}

@property (nonatomic,readonly) WFVariableSubstitutableParameterState * state;                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) WFEnumerationSegmentedControlComponent * segmentedControlComponent;              //@synthesize segmentedControlComponent=_segmentedControlComponent - In the implementation block
@property (nonatomic,__weak,readonly) id<WFVariableProvider> variableProvider;                                  //@synthesize variableProvider=_variableProvider - In the implementation block
@property (nonatomic,__weak,readonly) id<WFVariableUIDelegate> variableUIDelegate;                              //@synthesize variableUIDelegate=_variableUIDelegate - In the implementation block
@property (nonatomic,readonly) id<WFComponentNavigationContext> navigationContext;                              //@synthesize navigationContext=_navigationContext - In the implementation block
@property (nonatomic,readonly) BOOL processing;                                                                 //@synthesize processing=_processing - In the implementation block
@property (nonatomic,__weak,readonly) WFEnumerationParameter * parameter;                                       //@synthesize parameter=_parameter - In the implementation block
+(id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(/*^block*/id)arg3 options:(WFParameterComponentOptions)arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7 labelsToAlignTo:(id)arg8 ;
+(BOOL)editsMultipleValues;
+(unsigned long long)variableResultTypeForParameter:(id)arg1 ;
-(WFEnumerationParameter *)parameter;
-(WFVariableSubstitutableParameterState *)state;
-(/*^block*/id)updateBlock;
-(id<WFVariableProvider>)variableProvider;
-(id<WFComponentNavigationContext>)navigationContext;
-(id<WFVariableUIDelegate>)variableUIDelegate;
-(BOOL)processing;
-(WFEnumerationSegmentedControlComponent *)segmentedControlComponent;
@end

