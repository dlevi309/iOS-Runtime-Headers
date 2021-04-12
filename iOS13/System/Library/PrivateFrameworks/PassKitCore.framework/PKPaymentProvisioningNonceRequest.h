/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@interface PKPaymentProvisioningNonceRequest : PKPaymentWebServiceRequest {

	unsigned long long _nonceType;

}

@property (assign,nonatomic) unsigned long long nonceType;              //@synthesize nonceType=_nonceType - In the implementation block
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(id)initWithNonceType:(unsigned long long)arg1 ;
-(unsigned long long)nonceType;
-(void)setNonceType:(unsigned long long)arg1 ;
@end

