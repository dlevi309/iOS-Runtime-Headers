/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_supportsReacquisition;
-(void)setActualAssertion:(SBSLockScreenContentAssertion *)arg1 ;
@end

