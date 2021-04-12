/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


#import <ProactiveSupport/ProactiveSupport-Structs.h>
@interface _PASLock : NSObject {

	opaque_pthread_mutex_t _lock;
	opaque_pthread_t* _owner;
	id _guardedData;

}
-(id)initWithGuardedData:(id)arg1 ;
-(void)runWithLockAcquired:(/*^block*/id)arg1 ;
-(id)unsafeGuardedData;
-(id)guardedDataAssertingLockContext;
-(void)dealloc;
@end

