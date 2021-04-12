/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)errors;
-(void)setErrors:(NSArray *)arg1 ;
-(id)initWithErrors:(id)arg1 paymentSummaryItems:(id)arg2 shippingMethods:(id)arg3 ;
-(id)initWithPaymentSummaryItems:(id)arg1 ;
-(NSArray *)shippingMethods;
-(void)setShippingMethods:(NSArray *)arg1 ;
-(id)initWithStatus:(long long)arg1 paymentSummaryItems:(id)arg2 ;
-(id)initWithStatus:(long long)arg1 errors:(id)arg2 paymentSummaryItems:(id)arg3 shippingMethods:(id)arg4 ;
@end

