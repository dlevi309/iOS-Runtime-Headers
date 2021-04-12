/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(PKCredentialRegistrationMetadata *)registrationMetadata;
-(id)initWithWebService:(id)arg1 registrationMetadata:(id)arg2 configurationType:(long long)arg3 ;
@end

