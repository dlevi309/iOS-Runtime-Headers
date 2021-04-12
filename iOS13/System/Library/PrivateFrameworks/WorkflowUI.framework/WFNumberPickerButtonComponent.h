/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <ComponentKit/CKCompositeComponent.h>

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

