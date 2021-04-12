/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(id)initWithPaymentSummaryItems:(id)arg1 ;
-(NSArray *)paymentSummaryItems;
-(void)setPaymentSummaryItems:(NSArray *)arg1 ;
-(void)setContentItems:(NSArray *)arg1 ;
-(NSArray *)contentItems;
-(id)initWithStatus:(long long)arg1 paymentSummaryItems:(id)arg2 ;
@end

