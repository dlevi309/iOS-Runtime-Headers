/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(id)protobuf;
-(PKContact *)shippingContact;
-(PKPaymentMethod *)paymentMethod;
-(id)initWithContact:(id)arg1 shippingMethod:(id)arg2 paymentMethod:(id)arg3 ;
-(PKShippingMethod *)shippingMethod;
@end

