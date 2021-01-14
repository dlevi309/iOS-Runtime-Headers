/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/


@protocol OS_dispatch_source;
#import <Accounts/Accounts-Structs.h>
@class NSObject;

@interface ACTimedExpirer : NSObject {

	unsigned long long _invalidationInterval;
	NSObject*<OS_dispatch_source> _invalidationTimer;
	os_unfair_lock_s _invalidationTimerLock;

}
+(id)expirerWithTimeout:(unsigned long long)arg1 ;
-(id)init;
-(void)scheduleExpiration:(/*^block*/id)arg1 ;
-(void)_unsafeCancelTimer;
-(void)_cancelTimer;
-(void)dealloc;
@end

