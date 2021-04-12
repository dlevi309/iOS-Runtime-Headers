/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/CKCompositeComponent.h>

@class WFCustomButtonComponent;

@interface WFNumberPickerButtonComponent : CKCompositeComponent {

	BOOL _becomeFirstResponder;
	/*^block*/id _updateBlock;
	/*^block*/id _variableBlock;
	WFCustomButtonComponent* _buttonComponent;

}

@property (nonatomic,__weak,readonly) WFCustomButtonComponent * buttonComponent;              //@synthesize buttonComponent=_buttonComponent - In the implementation block
@property (nonatomic,readonly) BOOL becomeFirstResponder;                                     //@synthesize becomeFirstResponder=_becomeFirstResponder - In the implementation block
@property (nonatomic,readonly) id updateBlock;                                                //@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,readonly) id variableBlock;                                              //@synthesize variableBlock=_variableBlock - In the implementation block
+(id)newWithAttributes:(const WFNumberPickerAttributes*)arg1 identifier:(id)arg2 updateBlock:(/*^block*/id)arg3 variableBlock:(/*^block*/id)arg4 ;
-(BOOL)becomeFirstResponder;
-(id)updateBlock;
-(id)variableBlock;
-(WFCustomButtonComponent *)buttonComponent;
@end

