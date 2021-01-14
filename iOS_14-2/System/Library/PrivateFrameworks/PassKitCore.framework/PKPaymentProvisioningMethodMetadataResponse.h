/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

