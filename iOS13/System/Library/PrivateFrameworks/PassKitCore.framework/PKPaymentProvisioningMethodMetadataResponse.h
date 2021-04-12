/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class PKPaymentProvisioningMethodMetadata;

@interface PKPaymentProvisioningMethodMetadataResponse : PKPaymentWebServiceResponse {

	PKPaymentProvisioningMethodMetadata* _provisioningMethodMetadata;

}

@property (nonatomic,readonly) PKPaymentProvisioningMethodMetadata * provisioningMethodMetadata;              //@synthesize provisioningMethodMetadata=_provisioningMethodMetadata - In the implementation block
-(id)initWithData:(id)arg1 ;
-(PKPaymentProvisioningMethodMetadata *)provisioningMethodMetadata;
@end

