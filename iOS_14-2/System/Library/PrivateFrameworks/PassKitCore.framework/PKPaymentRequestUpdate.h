/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface PKPaymentRequestUpdate : NSObject <NSSecureCoding> {

	long long _status;
	NSArray* _paymentSummaryItems;
	NSArray* _contentItems;

}

@property (nonatomic,copy) NSArray * contentItems;                     //@synthesize contentItems=_contentItems - In the implementation block
@property (assign,nonatomic) long long status;                         //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) NSArray * paymentSummaryItems;              //@synthesize paymentSummaryItems=_paymentSummaryItems - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)contentItems;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithPaymentSummaryItems:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPaymentSummaryItems:(NSArray *)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(void)setContentItems:(NSArray *)arg1 ;
-(id)initWithStatus:(long long)arg1 paymentSummaryItems:(id)arg2 ;
-(NSArray *)paymentSummaryItems;
-(long long)status;
@end

