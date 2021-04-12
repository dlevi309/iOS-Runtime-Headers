/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@protocol OS_dispatch_source;
@class EFProcessTransaction, BKSProcessAssertion, NSObject;

@interface MFTaskAssertion : NSObject {

	EFProcessTransaction* _transaction;
	BKSProcessAssertion* _assertion;
	NSObject*<OS_dispatch_source> _timer;

}
+(id)log;
-(id)initWithName:(id)arg1 expiration:(double)arg2 preventIdleSleep:(BOOL)arg3 ;
-(id)initWithName:(id)arg1 preventIdleSleep:(BOOL)arg2 ;
-(void)cancelTimer;
-(id)initWithName:(id)arg1 ;
-(BOOL)isValid;
-(void)invalidate;
-(void)dealloc;
@end

