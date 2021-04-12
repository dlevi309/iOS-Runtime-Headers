/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


@protocol NSObject;
@interface CKAsyncTransactionOperation : NSObject {

	/*^block*/id _operationCompletionBlock;
	id<NSObject> _value;

}

@property (nonatomic,copy) id operationCompletionBlock;              //@synthesize operationCompletionBlock=_operationCompletionBlock - In the implementation block
@property (retain) id<NSObject> value;                               //@synthesize value=_value - In the implementation block
-(void)setValue:(id<NSObject>)arg1 ;
-(id<NSObject>)value;
-(void)dealloc;
-(void)setOperationCompletionBlock:(id)arg1 ;
-(id)operationCompletionBlock;
-(id)initWithOperationCompletionBlock:(/*^block*/id)arg1 ;
-(void)callAndReleaseCompletionBlock:(BOOL)arg1 ;
@end

