/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface PKBarcodeEventMetadataResponse : NSObject <NSSecureCoding> {

	NSData* _paymentInformation;

}

@property (nonatomic,copy) NSData * paymentInformation;              //@synthesize paymentInformation=_paymentInformation - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSData *)paymentInformation;
-(id)initWithPaymentInformation:(id)arg1 ;
-(void)setPaymentInformation:(NSData *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

