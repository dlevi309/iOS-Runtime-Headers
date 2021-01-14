/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@interface PKPaymentProvisioningNonceRequest : PKPaymentWebServiceRequest {

	unsigned long long _nonceType;

}

@property (assign,nonatomic) unsigned long long nonceType;              //@synthesize nonceType=_nonceType - In the implementation block
-(unsigned long long)nonceType;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(void)setNonceType:(unsigned long long)arg1 ;
-(id)initWithNonceType:(unsigned long long)arg1 ;
@end

