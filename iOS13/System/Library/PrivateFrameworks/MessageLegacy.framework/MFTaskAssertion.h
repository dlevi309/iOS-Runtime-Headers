/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/


@protocol OS_dispatch_source;
@class EFProcessTransaction, BKSProcessAssertion, NSObject;

@interface MFTaskAssertion : NSObject {

	EFProcessTransaction* _transaction;
	BKSProcessAssertion* _assertion;
	NSObject*<OS_dispatch_source> _timer;

}
+(id)log;
-(void)dealloc;
-(void)invalidate;
-(BOOL)isValid;
-(id)initWithName:(id)arg1 ;
-(void)cancelTimer;
-(id)initWithName:(id)arg1 expiration:(double)arg2 preventIdleSleep:(BOOL)arg3 ;
-(id)initWithName:(id)arg1 preventIdleSleep:(BOOL)arg2 ;
@end

