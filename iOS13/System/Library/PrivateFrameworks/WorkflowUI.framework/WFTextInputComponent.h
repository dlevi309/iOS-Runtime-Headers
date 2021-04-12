/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <ComponentKit/CKStatefulViewComponent.h>

@interface WFTextInputComponent : CKStatefulViewComponent {

	/*^block*/id _updateBlock;
	CKTypedComponentAction<> _beginAction;
	CKTypedComponentAction<> _doneAction;
	WFTextInputAttributes _attributes;

}

@property (nonatomic,readonly) WFTextInputAttributes attributes;                  //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) id updateBlock;                                    //@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> beginAction;              //@synthesize beginAction=_beginAction - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> doneAction;               //@synthesize doneAction=_doneAction - In the implementation block
+(id)newWithAttributes:(const WFTextInputAttributes*)arg1 updateBlock:(/*^block*/id)arg2 beginAction:(CKTypedComponentAction<>)arg3 doneAction:(CKTypedComponentAction<>)arg4 size:(const CKComponentSize*)arg5 ;
-(WFTextInputAttributes)attributes;
-(id)updateBlock;
-(CKTypedComponentAction<>)beginAction;
-(CKTypedComponentAction<>)doneAction;
@end

