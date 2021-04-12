/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/CKStatefulViewComponent.h>

@protocol WFParameterState, WFVariableProvider, WFVariableUIDelegate, WFComponentNavigationContext;
@class WFParameter;

@interface WFSwiftUIParameterHostingComponent : CKStatefulViewComponent {

	WFParameter* _parameter;
	id<WFParameterState> _state;
	/*^block*/id _updateBlock;
	id<WFVariableProvider> _variableProvider;
	id<WFVariableUIDelegate> _variableUIDelegate;
	id<WFComponentNavigationContext> _navigationContext;
	WFParameterComponentOptions _options;

}

@property (nonatomic,readonly) WFParameter * parameter;                                                //@synthesize parameter=_parameter - In the implementation block
@property (nonatomic,readonly) id<WFParameterState> state;                                             //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) id updateBlock;                                                         //@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,readonly) WFParameterComponentOptions options;                                    //@synthesize options=_options - In the implementation block
@property (nonatomic,__weak,readonly) id<WFVariableProvider> variableProvider;                         //@synthesize variableProvider=_variableProvider - In the implementation block
@property (nonatomic,__weak,readonly) id<WFVariableUIDelegate> variableUIDelegate;                     //@synthesize variableUIDelegate=_variableUIDelegate - In the implementation block
@property (nonatomic,__weak,readonly) id<WFComponentNavigationContext> navigationContext;              //@synthesize navigationContext=_navigationContext - In the implementation block
+(id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(/*^block*/id)arg3 options:(WFParameterComponentOptions)arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7 ;
-(WFParameterComponentOptions)options;
-(WFParameter *)parameter;
-(id<WFParameterState>)state;
-(id)updateBlock;
-(id<WFVariableProvider>)variableProvider;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
-(id<WFComponentNavigationContext>)navigationContext;
-(id<WFVariableUIDelegate>)variableUIDelegate;
@end

