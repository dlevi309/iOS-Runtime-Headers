/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/WFParameterComponent.h>

@protocol WFComponentNavigationContext, WFVariableProvider;
@class WFParameter, WFLocationParameterState, WFVariableChooserParameterLayoutComponent;

@interface WFLocationParameterComponent : WFParameterComponent {

	BOOL _processing;
	WFParameter* _parameter;
	/*^block*/id _updateBlock;
	WFLocationParameterState* _state;
	id<WFComponentNavigationContext> _navigationContext;
	id<WFVariableProvider> _variableProvider;
	WFVariableChooserParameterLayoutComponent* _layoutComponent;

}

@property (nonatomic,readonly) WFLocationParameterState * state;                                         //@synthesize state=_state - In the implementation block
@property (nonatomic,__weak,readonly) id<WFComponentNavigationContext> navigationContext;                //@synthesize navigationContext=_navigationContext - In the implementation block
@property (nonatomic,readonly) id<WFVariableProvider> variableProvider;                                  //@synthesize variableProvider=_variableProvider - In the implementation block
@property (nonatomic,readonly) WFVariableChooserParameterLayoutComponent * layoutComponent;              //@synthesize layoutComponent=_layoutComponent - In the implementation block
@property (assign,nonatomic) BOOL processing;                                                            //@synthesize processing=_processing - In the implementation block
+(id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(/*^block*/id)arg3 options:(WFParameterComponentOptions)arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7 labelsToAlignTo:(id)arg8 ;
-(id)parameter;
-(WFLocationParameterState *)state;
-(void)setProcessing:(BOOL)arg1 ;
-(/*^block*/id)updateBlock;
-(id<WFVariableProvider>)variableProvider;
-(id<WFComponentNavigationContext>)navigationContext;
-(BOOL)processing;
-(void)presentTokenChooser:(id)arg1 ;
-(WFVariableChooserParameterLayoutComponent *)layoutComponent;
@end

