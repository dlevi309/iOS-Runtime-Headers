/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentProvisioningMethodMetadataRequest : PKPaymentWebServiceRequest {

	NSString* _productIdentifier;
	NSString* _provisioningMethod;

}

@property (nonatomic,copy) NSString * productIdentifier;               //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,copy) NSString * provisioningMethod;              //@synthesize provisioningMethod=_provisioningMethod - In the implementation block
-(void)setProductIdentifier:(NSString *)arg1 ;
-(NSString *)productIdentifier;
-(id)initWithProductIdentifier:(id)arg1 provisioningMethod:(id)arg2 ;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(NSString *)provisioningMethod;
-(void)setProvisioningMethod:(NSString *)arg1 ;
@end

