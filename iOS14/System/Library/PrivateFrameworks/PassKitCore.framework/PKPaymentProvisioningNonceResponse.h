/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSString;

@interface PKPaymentProvisioningNonceResponse : PKPaymentWebServiceResponse {

	NSString* _nonce;

}

@property (nonatomic,copy,readonly) NSString * nonce;              //@synthesize nonce=_nonce - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSString *)nonce;
@end

