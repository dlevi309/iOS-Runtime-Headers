/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentDataItem.h>

@class NSDate, NSTimeZone;

@interface PKPaymentDateDataItem : PKPaymentDataItem {

	NSDate* _paymentDate;
	NSTimeZone* _paymentTimeZone;
	long long _paymentFrequency;

}

@property (nonatomic,retain) NSDate * paymentDate;                      //@synthesize paymentDate=_paymentDate - In the implementation block
@property (nonatomic,retain) NSTimeZone * paymentTimeZone;              //@synthesize paymentTimeZone=_paymentTimeZone - In the implementation block
@property (assign,nonatomic) long long paymentFrequency;                //@synthesize paymentFrequency=_paymentFrequency - In the implementation block
+(long long)dataType;
-(id)initWithModel:(id)arg1 ;
-(NSDate *)paymentDate;
-(void)setPaymentDate:(NSDate *)arg1 ;
-(void)setPaymentFrequency:(long long)arg1 ;
-(void)setPaymentTimeZone:(NSTimeZone *)arg1 ;
-(long long)paymentFrequency;
-(NSTimeZone *)paymentTimeZone;
-(BOOL)isValidWithError:(id*)arg1 ;
@end

