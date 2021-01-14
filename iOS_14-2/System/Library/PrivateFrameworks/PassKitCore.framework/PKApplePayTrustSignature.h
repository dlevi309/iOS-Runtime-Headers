/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKApplePayTrustSignatureRequest, NSData;

@interface PKApplePayTrustSignature : NSObject <NSSecureCoding> {

	PKApplePayTrustSignatureRequest* _signatureRequest;
	NSData* _signatureData;
	NSData* _paymentData;

}

@property (nonatomic,readonly) PKApplePayTrustSignatureRequest * signatureRequest;              //@synthesize signatureRequest=_signatureRequest - In the implementation block
@property (nonatomic,copy,readonly) NSData * signatureData;                                     //@synthesize signatureData=_signatureData - In the implementation block
@property (nonatomic,copy,readonly) NSData * paymentData;                                       //@synthesize paymentData=_paymentData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSData *)signatureData;
-(id)initWithSignatureRequest:(id)arg1 signature:(id)arg2 ;
-(PKApplePayTrustSignatureRequest *)signatureRequest;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)paymentData;
@end

