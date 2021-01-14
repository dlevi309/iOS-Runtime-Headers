/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/CKCompositeComponent.h>

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

