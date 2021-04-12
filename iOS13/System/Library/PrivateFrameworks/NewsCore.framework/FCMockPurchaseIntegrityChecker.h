/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCPurchaseIntegrityChecker.h>

@interface FCMockPurchaseIntegrityChecker : NSObject <FCPurchaseIntegrityChecker> {

	unsigned long long _mockedCheckResult;

}

@property (assign,nonatomic) unsigned long long mockedCheckResult;              //@synthesize mockedCheckResult=_mockedCheckResult - In the implementation block
+(id)mockPurchaseIntegrityCheckForSuccess;
+(id)mockPurchaseIntegrityCheckForFailure;
-(void)isUserEntitledToSubscriptionForPurchaseID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setMockedCheckResult:(unsigned long long)arg1 ;
-(unsigned long long)mockedCheckResult;
@end

