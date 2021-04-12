/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCAccessChecker.h>

@protocol FCPaidAccessCheckerType;
@interface FCPurchaseAccessChecker : FCAccessChecker {

	id<FCPaidAccessCheckerType> _paidAccessChecker;

}

@property (nonatomic,readonly) id<FCPaidAccessCheckerType> paidAccessChecker;              //@synthesize paidAccessChecker=_paidAccessChecker - In the implementation block
-(id<FCPaidAccessCheckerType>)paidAccessChecker;
-(id)init;
-(void)checkAccessToItem:(id)arg1 withQualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)hasAccessToItem:(id)arg1 blockedReason:(unsigned long long*)arg2 error:(id*)arg3 ;
-(id)initWithPaidAccessChecker:(id)arg1 ;
-(BOOL)canSynchronouslyCheckAccessToItem:(id)arg1 ;
@end

