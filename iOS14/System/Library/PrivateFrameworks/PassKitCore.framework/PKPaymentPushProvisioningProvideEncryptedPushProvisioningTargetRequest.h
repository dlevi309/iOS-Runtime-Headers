/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKEncryptedPushProvisioningTarget, NSString;

@interface PKPaymentPushProvisioningProvideEncryptedPushProvisioningTargetRequest : PKPaymentWebServiceRequest {

	PKEncryptedPushProvisioningTarget* _encryptedPushProvisioningTarget;
	NSString* _sharingInstanceIdentifier;

}

@property (nonatomic,copy) PKEncryptedPushProvisioningTarget * encryptedPushProvisioningTarget;              //@synthesize encryptedPushProvisioningTarget=_encryptedPushProvisioningTarget - In the implementation block
@property (nonatomic,copy) NSString * sharingInstanceIdentifier;                                             //@synthesize sharingInstanceIdentifier=_sharingInstanceIdentifier - In the implementation block
-(void)setEncryptedPushProvisioningTarget:(PKEncryptedPushProvisioningTarget *)arg1 ;
-(PKEncryptedPushProvisioningTarget *)encryptedPushProvisioningTarget;
-(NSString *)sharingInstanceIdentifier;
-(void)setSharingInstanceIdentifier:(NSString *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(id)requestBody;
-(id)initWithEncryptedPushProvisioningTarget:(id)arg1 sharingInstanceIdentifier:(id)arg2 ;
@end

