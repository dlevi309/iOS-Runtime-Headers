/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentRequestUpdate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface PKPaymentRequestShippingContactUpdate : PKPaymentRequestUpdate <NSSecureCoding> {

	NSArray* _shippingMethods;
	NSArray* _errors;

}

@property (nonatomic,copy) NSArray * shippingMethods;              //@synthesize shippingMethods=_shippingMethods - In the implementation block
@property (nonatomic,copy) NSArray * errors;                       //@synthesize errors=_errors - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithErrors:(id)arg1 paymentSummaryItems:(id)arg2 shippingMethods:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setShippingMethods:(NSArray *)arg1 ;
-(id)initWithPaymentSummaryItems:(id)arg1 ;
-(NSArray *)errors;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStatus:(long long)arg1 paymentSummaryItems:(id)arg2 ;
-(id)initWithStatus:(long long)arg1 errors:(id)arg2 paymentSummaryItems:(id)arg3 shippingMethods:(id)arg4 ;
-(NSArray *)shippingMethods;
-(void)setErrors:(NSArray *)arg1 ;
@end

