/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


@protocol CKTransactionalComponentDataSourceStateModifying;
@class CKTransactionalComponentDataSourceState;

@interface CKTransactionalComponentDataSourceModificationPair : NSObject {

	id<CKTransactionalComponentDataSourceStateModifying> _modification;
	CKTransactionalComponentDataSourceState* _state;

}

@property (nonatomic,readonly) id<CKTransactionalComponentDataSourceStateModifying> modification;              //@synthesize modification=_modification - In the implementation block
@property (nonatomic,readonly) CKTransactionalComponentDataSourceState * state;                                //@synthesize state=_state - In the implementation block
-(CKTransactionalComponentDataSourceState *)state;
-(id<CKTransactionalComponentDataSourceStateModifying>)modification;
-(id)initWithModification:(id)arg1 state:(id)arg2 ;
@end

