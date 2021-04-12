/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKApplePayTrustKey;

@interface PKApplePayTrustRegistrationRequest : PKPaymentWebServiceRequest {

	PKApplePayTrustKey* _applePayTrustKey;

}

@property (nonatomic,retain) PKApplePayTrustKey * applePayTrustKey;              //@synthesize applePayTrustKey=_applePayTrustKey - In the implementation block
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(PKApplePayTrustKey *)applePayTrustKey;
-(void)setApplePayTrustKey:(PKApplePayTrustKey *)arg1 ;
@end

