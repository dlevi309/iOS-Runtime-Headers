/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/CKStatefulViewComponent.h>

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
-(CKTypedComponentAction<>)doneAction;
-(id)updateBlock;
-(CKTypedComponentAction<>)beginAction;
@end

