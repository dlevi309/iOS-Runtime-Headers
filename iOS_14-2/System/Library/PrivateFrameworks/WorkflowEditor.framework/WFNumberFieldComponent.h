/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/CKStatefulViewComponent.h>

@interface WFNumberFieldComponent : CKStatefulViewComponent {

	/*^block*/id _updateBlock;
	/*^block*/id _variableBlock;
	CKTypedComponentAction<> _doneAction;
	WFNumberFieldAttributes _attributes;

}

@property (nonatomic,readonly) WFNumberFieldAttributes attributes;               //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) id updateBlock;                                   //@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,readonly) id variableBlock;                                 //@synthesize variableBlock=_variableBlock - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> doneAction;              //@synthesize doneAction=_doneAction - In the implementation block
+(id)newWithAttributes:(const WFNumberFieldAttributes*)arg1 updateBlock:(/*^block*/id)arg2 variableBlock:(/*^block*/id)arg3 doneAction:(CKTypedComponentAction<>)arg4 size:(const CKComponentSize*)arg5 ;
-(WFNumberFieldAttributes)attributes;
-(CKTypedComponentAction<>)doneAction;
-(id)updateBlock;
-(id)variableBlock;
@end

