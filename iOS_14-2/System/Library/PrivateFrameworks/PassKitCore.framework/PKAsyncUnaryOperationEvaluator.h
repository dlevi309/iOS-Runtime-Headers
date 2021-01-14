/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/PKCancelable.h>

@class NSMutableArray, PKAsyncOperationState, NSString;

@interface PKAsyncUnaryOperationEvaluator : NSObject <PKCancelable> {

	os_unfair_lock_s _lock;
	NSMutableArray* _operations;
	AB _crashed;
	id _value;
	/*^block*/id _completion;
	BOOL _started;
	BOOL _escaped;
	BOOL _canceled;
	PKAsyncOperationState* _runningOperationState;

}

@property (getter=isCanceled,nonatomic,readonly) BOOL canceled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isCanceled;
-(id)evaluateWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(id)_initWithOperations:(id)arg1 input:(id)arg2 ;
-(BOOL)_performOperation;
-(void)cancel;
-(void)dealloc;
@end

