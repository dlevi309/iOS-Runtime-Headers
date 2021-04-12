/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <ComponentKit/CKCompositeComponent.h>

@class WFCustomButtonComponent;

@interface WFDatePickerButtonComponent : CKCompositeComponent {

	BOOL _becomeFirstResponder;
	WFCustomButtonComponent* _buttonComponent;

}

@property (nonatomic,__weak,readonly) WFCustomButtonComponent * buttonComponent;              //@synthesize buttonComponent=_buttonComponent - In the implementation block
@property (nonatomic,readonly) BOOL becomeFirstResponder;                                     //@synthesize becomeFirstResponder=_becomeFirstResponder - In the implementation block
+(id)newWithAttributes:(const WFDatePickerAttributes*)arg1 updateBlock:(/*^block*/id)arg2 variableBlock:(/*^block*/id)arg3 size:(const CKComponentSize*)arg4 ;
-(BOOL)becomeFirstResponder;
-(WFCustomButtonComponent *)buttonComponent;
@end

