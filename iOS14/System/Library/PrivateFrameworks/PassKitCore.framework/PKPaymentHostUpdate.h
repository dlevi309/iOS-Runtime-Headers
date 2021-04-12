/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKContact, PKShippingMethod, PKPaymentMethod;

@interface PKPaymentHostUpdate : NSObject <NSSecureCoding> {

	PKContact* _shippingContact;
	PKShippingMethod* _shippingMethod;
	PKPaymentMethod* _paymentMethod;

}

@property (nonatomic,readonly) PKContact * shippingContact;                    //@synthesize shippingContact=_shippingContact - In the implementation block
@property (nonatomic,readonly) PKShippingMethod * shippingMethod;              //@synthesize shippingMethod=_shippingMethod - In the implementation block
@property (nonatomic,readonly) PKPaymentMethod * paymentMethod;                //@synthesize paymentMethod=_paymentMethod - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)paymentUpdateWithProtobuf:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(PKPaymentMethod *)paymentMethod;
-(id)protobuf;
-(PKContact *)shippingContact;
-(PKShippingMethod *)shippingMethod;
-(id)initWithContact:(id)arg1 shippingMethod:(id)arg2 paymentMethod:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
@end

