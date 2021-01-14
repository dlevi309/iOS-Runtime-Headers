/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUIInternal.framework/CoreCDPUIInternal
*/

#import <CoreCDP/CDPRemoteDeviceSecretValidator.h>

@class NSString;

@interface DummyRemoteDeviceSecretValidator : CDPRemoteDeviceSecretValidator {

	NSString* _expectedString;
	unsigned long long _failedAttempts;

}
-(unsigned long long)supportedEscapeOfferMask;
-(void)approveFromAnotherDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)supportedEscapeOfferMaskCompletion:(/*^block*/id)arg1 ;
-(void)validateSecret:(id)arg1 devices:(id)arg2 type:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)validateRecoveryKey:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)initWithExpectedSecret:(id)arg1 ;
@end

