/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


#import <ProactiveSupport/ProactiveSupport-Structs.h>
@interface _PASLock : NSObject {

	opaque_pthread_mutex_t _lock;
	opaque_pthread_t* _owner;
	id _guardedData;

}
-(void)dealloc;
-(void)runWithLockAcquired:(/*^block*/id)arg1 ;
-(id)initWithGuardedData:(id)arg1 ;
-(id)guardedDataAssertingLockContext;
-(id)unsafeGuardedData;
@end

