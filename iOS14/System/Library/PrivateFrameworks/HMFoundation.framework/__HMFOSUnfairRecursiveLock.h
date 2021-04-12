/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFUnfairLock.h>

@interface __HMFOSUnfairRecursiveLock : HMFUnfairLock {

	os_unfair_recursive_lock_s _internal;
	unsigned _internalOptions;

}
-(void)unlock;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)lock;
-(void)assertNotOwner;
-(void)assertOwner;
@end

