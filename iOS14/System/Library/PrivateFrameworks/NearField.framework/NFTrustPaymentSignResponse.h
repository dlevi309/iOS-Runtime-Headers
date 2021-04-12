/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <NearField/NFTrustObject.h>

@class NFTrustSignResponse, NFECommercePaymentResponse;

@interface NFTrustPaymentSignResponse : NFTrustObject {

	NFTrustSignResponse* _signResponse;
	NFECommercePaymentResponse* _paymentResponse;

}

@property (nonatomic,retain) NFTrustSignResponse * signResponse;                        //@synthesize signResponse=_signResponse - In the implementation block
@property (nonatomic,retain) NFECommercePaymentResponse * paymentResponse;              //@synthesize paymentResponse=_paymentResponse - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)paymentSignResponseWithSignResponse:(id)arg1 paymentResponse:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NFTrustSignResponse *)signResponse;
-(NFECommercePaymentResponse *)paymentResponse;
-(void)setSignResponse:(NFTrustSignResponse *)arg1 ;
-(void)setPaymentResponse:(NFECommercePaymentResponse *)arg1 ;
@end

