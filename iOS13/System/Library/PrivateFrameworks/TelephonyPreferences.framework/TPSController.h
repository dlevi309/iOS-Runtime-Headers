/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
*/


#import <TelephonyPreferences/TelephonyPreferences-Structs.h>
@class NSMapTable;

@interface TPSController : NSObject {

	os_unfair_lock_s _delegateLock;
	NSMapTable* _delegateToQueue;

}

@property (assign,nonatomic) os_unfair_lock_s delegateLock;               //@synthesize delegateLock=_delegateLock - In the implementation block
@property (nonatomic,readonly) NSMapTable * delegateToQueue;              //@synthesize delegateToQueue=_delegateToQueue - In the implementation block
-(id)init;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(NSMapTable *)delegateToQueue;
-(void)performAtomicDelegateBlock:(/*^block*/id)arg1 ;
-(os_unfair_lock_s)delegateLock;
-(void)setDelegateLock:(os_unfair_lock_s)arg1 ;
@end

