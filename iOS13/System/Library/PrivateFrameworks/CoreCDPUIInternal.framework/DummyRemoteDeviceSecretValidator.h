/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUIInternal.framework/CoreCDPUIInternal
*/

#import <CoreCDP/CDPRemoteDeviceSecretValidator.h>

@class NSString;

@interface DummyRemoteDeviceSecretValidator : CDPRemoteDeviceSecretValidator {

	NSString* _expectedString;
	unsigned long long _failedAttempts;

}
-(void)validateSecret:(id)arg1 devices:(id)arg2 type:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)validateRecoveryKey:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)approveFromAnotherDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)supportedEscapeOfferMaskCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)supportedEscapeOfferMask;
-(id)initWithExpectedSecret:(id)arg1 ;
@end

