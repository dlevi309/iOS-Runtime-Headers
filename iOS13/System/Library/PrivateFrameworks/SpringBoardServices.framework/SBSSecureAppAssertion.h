/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <SpringBoardServices/SBSLockScreenContentAssertion.h>

@class SBSLockScreenContentAssertion;

@interface SBSSecureAppAssertion : SBSLockScreenContentAssertion {

	SBSLockScreenContentAssertion* _actualAssertion;

}

@property (nonatomic,retain) SBSLockScreenContentAssertion * actualAssertion;              //@synthesize actualAssertion=_actualAssertion - In the implementation block
+(id)acquireSecureAppAssertionWithType:(unsigned long long)arg1 errorHandler:(/*^block*/id)arg2 ;
+(id)acquireSecureAppAssertionWithType:(unsigned long long)arg1 supportedOrientations:(unsigned long long)arg2 errorHandler:(/*^block*/id)arg3 ;
-(SBSLockScreenContentAssertion *)actualAssertion;
-(void)setActualAssertion:(SBSLockScreenContentAssertion *)arg1 ;
@end

