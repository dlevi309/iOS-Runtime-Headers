/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <PhotoFoundation/PhotoFoundation-Structs.h>
#import <PhotoFoundation/PFDispatchQueueExtension.h>

@protocol OS_os_transaction;
@class PFDispatchQueue, NSObject;

@interface PFDispatchQueueOSTransactionExtension : PFDispatchQueueExtension {

	PFDispatchQueue* _queue;
	NSObject*<OS_os_transaction> _currentTransaction;
	unsigned long long _transactionUseCount;
	os_unfair_lock_s _lock;

}
-(void)dispatchTransactionName:(id)arg1 async:(/*^block*/id)arg2 ;
-(void)installOnQueue:(id)arg1 ;
-(id)init;
-(void)queue:(id)arg1 skippedExecuting:(id)arg2 ;
-(void)dispatchTransactionName:(id)arg1 asyncWithCurrentQOS:(/*^block*/id)arg2 ;
-(void)dispatchTransactionName:(id)arg1 qos:(unsigned)arg2 async:(/*^block*/id)arg3 ;
-(id)description;
-(id)newBlockInfo;
-(void)queue:(id)arg1 didExecute:(id)arg2 ;
-(void)_blockCompleted;
@end

