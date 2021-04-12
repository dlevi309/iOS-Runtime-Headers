/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString, PKEncryptedPushProvisioningTarget;

@interface PKPaymentPushProvisioningSharingStatusRequest : PKPaymentWebServiceRequest {

	NSString* _sharingIdentifier;
	NSString* _cardConfigurationIdentifer;
	PKEncryptedPushProvisioningTarget* _encryptedProvisioningTarget;

}

@property (nonatomic,copy) NSString * sharingIdentifier;                                                   //@synthesize sharingIdentifier=_sharingIdentifier - In the implementation block
@property (nonatomic,copy) NSString * cardConfigurationIdentifer;                                          //@synthesize cardConfigurationIdentifer=_cardConfigurationIdentifer - In the implementation block
@property (nonatomic,retain) PKEncryptedPushProvisioningTarget * encryptedProvisioningTarget;              //@synthesize encryptedProvisioningTarget=_encryptedProvisioningTarget - In the implementation block
-(PKEncryptedPushProvisioningTarget *)encryptedProvisioningTarget;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(id)requestBody;
-(id)initWithProvisioningSharingIdentifier:(id)arg1 cardCardConfigurationIdentifer:(id)arg2 ;
-(id)initWithEncryptedProvisioningTarget:(id)arg1 ;
-(NSString *)sharingIdentifier;
-(void)setSharingIdentifier:(NSString *)arg1 ;
-(NSString *)cardConfigurationIdentifer;
-(void)setCardConfigurationIdentifer:(NSString *)arg1 ;
-(void)setEncryptedProvisioningTarget:(PKEncryptedPushProvisioningTarget *)arg1 ;
@end

