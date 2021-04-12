/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@protocol OS_os_transaction, OS_voucher, NSObject;
#import <Foundation/Foundation-Structs.h>
@class NSString, NSObject, BKSProcessAssertion;

@interface _NSActivityAssertion : NSObject {

	unsigned long long _options;
	NSString* _reason;
	NSObject*<OS_os_transaction> _transaction;
	unsigned _systemSleepAssertionID;
	NSObject*<OS_voucher> _voucher;
	NSObject*<OS_voucher> _previousVoucher;
	id<NSObject> _xpcBoost;
	BKSProcessAssertion* _processAssertion;
	/*^block*/id _expirationHandler;
	os_unfair_lock_s _lock;
	AB _ended;
	unsigned char _adoptPreviousVoucher;

}
+(void)_performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
+(void)_performExpiringActivityWithReason:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(id)_expiringAssertionManagementQueue;
+(id)_expiringActivities;
+(id)_expirationHandlerExecutionQueue;
+(void)_expireAllActivies;
+(id)_expiringTaskExecutionQueue;
+(void)_dumpExpiringActivitives;
-(void)dealloc;
-(id)debugDescription;
-(void)_reactivate;
-(id)_initWithActivityOptions:(unsigned long long)arg1 reason:(id)arg2 expirationHandler:(/*^block*/id)arg3 ;
-(void)_end;
-(void)_fireExpirationHandler;
@end

