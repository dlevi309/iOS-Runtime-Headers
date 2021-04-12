/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <WorkflowUI/WFParameterComponent.h>

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
-(NSNumber *)value;
-(/*^block*/id)updateBlock;
-(id)parameter;
-(void)presentTokenChooser:(id)arg1 ;
-(WFVariableChooserParameterLayoutComponent *)layoutComponent;
-(void)switchValueChanged:(id)arg1 ;
-(CKComponent *)switchComponent;
@end

