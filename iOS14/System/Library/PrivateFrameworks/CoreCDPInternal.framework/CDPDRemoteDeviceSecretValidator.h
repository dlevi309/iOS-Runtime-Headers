/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/

#import <CoreCDPInternal/CDPDDeviceSecretValidator.h>

@interface CDPDRemoteDeviceSecretValidator : CDPDDeviceSecretValidator {

	/*^block*/id _requestToJoinCompletion;
	BOOL _isWaitingForRemoteApproval;

}
-(void)setValidSecretHandler:(/*^block*/id)arg1 ;
-(void)resetAccountCDPState;
-(void)cancelApproveFromAnotherDevice;
-(id)_decoratedDelegate;
-(void)approveFromAnotherDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)supportedEscapeOfferMaskCompletion:(/*^block*/id)arg1 ;
@end

