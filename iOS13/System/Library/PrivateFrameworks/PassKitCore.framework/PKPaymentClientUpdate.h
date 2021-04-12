/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(long long)status;
-(id)protobuf;
-(NSArray *)paymentSummaryItems;
-(NSArray *)shippingMethods;
-(id)initWithPaymentSummaryItems:(id)arg1 shippingMethods:(id)arg2 status:(long long)arg3 selectedAID:(id)arg4 ;
-(NSString *)selectedAID;
@end

