/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <BaseBoard/BSWatchdog.h>

@class FBTransaction;

@interface FBTransactionWatchdog : BSWatchdog {

	FBTransaction* _transaction;

}

@property (nonatomic,readonly) FBTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
-(void)invalidate;
-(FBTransaction *)transaction;
-(void)_watchdogTimerFired;
-(void)_dumpDebugInfo;
-(id)initWithTransaction:(id)arg1 ;
@end

