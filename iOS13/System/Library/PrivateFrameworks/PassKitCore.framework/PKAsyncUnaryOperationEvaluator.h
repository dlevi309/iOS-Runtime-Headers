/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/PKCancelable.h>

@class NSMutableArray, PKAsyncOperationState, NSString;

@interface PKAsyncUnaryOperationEvaluator : NSObject <PKCancelable> {

	os_unfair_lock_s _lock;
	NSMutableArray* _operations;
	id _value;
	/*^block*/id _completion;
	BOOL _started;
	BOOL _escaped;
	BOOL _canceled;
	PKAsyncOperationState* _runningOperationState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isCanceled,nonatomic,readonly) BOOL canceled; 
-(id)init;
-(void)dealloc;
-(void)cancel;
-(BOOL)isCanceled;
-(BOOL)_performOperation;
-(id)_initWithOperations:(id)arg1 input:(id)arg2 ;
-(id)evaluateWithCompletion:(/*^block*/id)arg1 ;
@end

