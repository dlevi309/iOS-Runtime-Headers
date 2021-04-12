/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFUnfairLock.h>

@interface __HMFOSUnfairLock : HMFUnfairLock {

	os_unfair_lock_s _internal;
	unsigned _internalOptions;

}
-(id)initWithOptions:(unsigned long long)arg1 ;
-(void)lock;
-(void)unlock;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)assertOwner;
-(void)assertNotOwner;
@end

