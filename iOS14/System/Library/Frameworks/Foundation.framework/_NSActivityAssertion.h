/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)_dumpExpiringActivitives;
+(id)_expiringActivities;
+(id)_expiringTaskExecutionQueue;
+(id)_expirationHandlerExecutionQueue;
+(void)_expireAllActivies;
+(id)_expiringAssertionManagementQueue;
+(void)_performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
+(void)_performExpiringActivityWithReason:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_initWithActivityOptions:(unsigned long long)arg1 reason:(id)arg2 expirationHandler:(/*^block*/id)arg3 ;
-(id)debugDescription;
-(void)_end;
-(void)_fireExpirationHandler;
-(void)_reactivate;
-(void)dealloc;
@end

