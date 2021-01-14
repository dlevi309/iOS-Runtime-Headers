/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface PKPaymentClientUpdate : NSObject <NSSecureCoding> {

	NSArray* _paymentSummaryItems;
	NSArray* _shippingMethods;
	long long _status;
	NSString* _selectedAID;

}

@property (nonatomic,readonly) NSArray * paymentSummaryItems;              //@synthesize paymentSummaryItems=_paymentSummaryItems - In the implementation block
@property (nonatomic,readonly) NSArray * shippingMethods;                  //@synthesize shippingMethods=_shippingMethods - In the implementation block
@property (nonatomic,readonly) long long status;                           //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) NSString * selectedAID;                     //@synthesize selectedAID=_selectedAID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)paymentUpdateResponseWithProtobuf:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithPaymentSummaryItems:(id)arg1 shippingMethods:(id)arg2 status:(long long)arg3 selectedAID:(id)arg4 ;
-(id)protobuf;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)selectedAID;
-(NSArray *)paymentSummaryItems;
-(NSArray *)shippingMethods;
-(long long)status;
@end

