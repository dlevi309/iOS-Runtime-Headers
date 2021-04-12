/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKSubcredentialProvisioningConfiguration.h>

@class PKPaymentWebService, PKCredentialRegistrationMetadata;

@interface PKSubcredentialProvisioningLocalDeviceConfiguration : PKSubcredentialProvisioningConfiguration {

	PKPaymentWebService* _webService;
	PKCredentialRegistrationMetadata* _registrationMetadata;

}

@property (nonatomic,readonly) PKPaymentWebService * webService;                                     //@synthesize webService=_webService - In the implementation block
@property (nonatomic,readonly) PKCredentialRegistrationMetadata * registrationMetadata;              //@synthesize registrationMetadata=_registrationMetadata - In the implementation block
-(PKPaymentWebService *)webService;
-(id)initWithWebService:(id)arg1 registrationMetadata:(id)arg2 configurationType:(long long)arg3 ;
-(PKCredentialRegistrationMetadata *)registrationMetadata;
@end

