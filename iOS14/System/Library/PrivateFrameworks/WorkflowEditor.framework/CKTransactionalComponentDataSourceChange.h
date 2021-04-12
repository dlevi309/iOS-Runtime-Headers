/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


@class CKTransactionalComponentDataSourceState, CKTransactionalComponentDataSourceAppliedChanges;

@interface CKTransactionalComponentDataSourceChange : NSObject {

	CKTransactionalComponentDataSourceState* _state;
	CKTransactionalComponentDataSourceAppliedChanges* _appliedChanges;

}

@property (nonatomic,readonly) CKTransactionalComponentDataSourceState * state;                                //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) CKTransactionalComponentDataSourceAppliedChanges * appliedChanges;              //@synthesize appliedChanges=_appliedChanges - In the implementation block
-(CKTransactionalComponentDataSourceState *)state;
-(CKTransactionalComponentDataSourceAppliedChanges *)appliedChanges;
-(id)initWithState:(id)arg1 appliedChanges:(id)arg2 ;
@end

