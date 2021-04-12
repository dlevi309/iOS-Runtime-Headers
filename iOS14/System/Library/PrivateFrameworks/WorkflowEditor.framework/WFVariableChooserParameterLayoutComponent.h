/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/CKCompositeComponent.h>

@protocol WFVariableProvider, WFVariableUIDelegate, WFComponentNavigationContext;
@class WFParameter, WFVariable, CKComponent;

@interface WFVariableChooserParameterLayoutComponent : CKCompositeComponent {

	WFParameter* _parameter;
	WFVariable* _variable;
	id<WFVariableProvider> _variableProvider;
	id<WFVariableUIDelegate> _variableUIDelegate;
	CKComponent* _controlComponent;
	id<WFComponentNavigationContext> _navigationContext;
	BOOL _chooserCanClear;
	/*^block*/id _updateBlock;

}
+(id)newWithLabel:(id)arg1 labelsToAlignTo:(id)arg2 parameter:(id)arg3 variable:(id)arg4 updateBlock:(/*^block*/id)arg5 options:(WFParameterComponentOptions)arg6 chooserCanClear:(BOOL)arg7 variableProvider:(id)arg8 variableUIDelegate:(id)arg9 navigationContext:(id)arg10 controlResistance:(const WFCompressionResistance*)arg11 controlComponent:(id)arg12 ;
-(void)presentTokenChooser:(id)arg1 ;
@end

