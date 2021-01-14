/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSData;

@interface PKPaymentAugmentBaseResponse : PKPaymentWebServiceResponse {

	NSData* _networkMerchantIdentifier;
	long long _cryptogramType;

}

@property (nonatomic,copy,readonly) NSData * networkMerchantIdentifier;              //@synthesize networkMerchantIdentifier=_networkMerchantIdentifier - In the implementation block
@property (nonatomic,readonly) long long cryptogramType;                             //@synthesize cryptogramType=_cryptogramType - In the implementation block
-(long long)cryptogramType;
-(NSData *)networkMerchantIdentifier;
-(id)initWithData:(id)arg1 ;
@end

