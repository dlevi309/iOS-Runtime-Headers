/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPaymentFrequency:(long long)arg1 ;
-(void)setPaymentTimeZone:(NSTimeZone *)arg1 ;
-(NSDate *)paymentDate;
-(void)setPaymentDate:(NSDate *)arg1 ;
-(long long)paymentFrequency;
-(NSTimeZone *)paymentTimeZone;
-(BOOL)isValidWithError:(id*)arg1 ;
-(id)initWithModel:(id)arg1 ;
@end

