/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/WFParameterComponent.h>

@class WFParameter, WFVariableChooserParameterLayoutComponent, CKComponent, NSNumber;

@interface WFSwitchParameterComponent : WFParameterComponent {

	WFParameter* _parameter;
	/*^block*/id _updateBlock;
	WFVariableChooserParameterLayoutComponent* _layoutComponent;
	CKComponent* _switchComponent;
	NSNumber* _value;

}

@property (nonatomic,readonly) WFVariableChooserParameterLayoutComponent * layoutComponent;              //@synthesize layoutComponent=_layoutComponent - In the implementation block
@property (nonatomic,readonly) CKComponent * switchComponent;                                            //@synthesize switchComponent=_switchComponent - In the implementation block
@property (nonatomic,readonly) NSNumber * value;                                                         //@synthesize value=_value - In the implementation block
+(id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(/*^block*/id)arg3 options:(WFParameterComponentOptions)arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7 labelsToAlignTo:(id)arg8 ;
-(void)switchValueChanged:(id)arg1 ;
-(id)parameter;
-(/*^block*/id)updateBlock;
-(NSNumber *)value;
-(void)presentTokenChooser:(id)arg1 ;
-(WFVariableChooserParameterLayoutComponent *)layoutComponent;
-(CKComponent *)switchComponent;
@end

