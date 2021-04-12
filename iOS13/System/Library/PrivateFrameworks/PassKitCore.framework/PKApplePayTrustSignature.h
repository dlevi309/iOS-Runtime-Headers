/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)paymentData;
-(NSData *)signatureData;
-(id)initWithSignatureRequest:(id)arg1 signature:(id)arg2 ;
-(PKApplePayTrustSignatureRequest *)signatureRequest;
@end

