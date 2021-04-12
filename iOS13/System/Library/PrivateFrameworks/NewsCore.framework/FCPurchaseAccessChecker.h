/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCAccessChecker.h>

@protocol FCPaidAccessCheckerType;
@interface FCPurchaseAccessChecker : FCAccessChecker {

	id<FCPaidAccessCheckerType> _paidAccessChecker;

}

@property (nonatomic,readonly) id<FCPaidAccessCheckerType> paidAccessChecker;              //@synthesize paidAccessChecker=_paidAccessChecker - In the implementation block
-(id)init;
-(BOOL)hasAccessToItem:(id)arg1 blockedReason:(unsigned long long*)arg2 error:(id*)arg3 ;
-(BOOL)canSynchronouslyCheckAccessToItem:(id)arg1 ;
-(void)checkAccessToItem:(id)arg1 withQualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id<FCPaidAccessCheckerType>)paidAccessChecker;
-(id)initWithPaidAccessChecker:(id)arg1 ;
@end

