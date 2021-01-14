/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDecimalNumber, NSString, NSArray;

@interface PKDisbursementRequest : NSObject <NSSecureCoding> {

	NSDecimalNumber* _amount;
	NSString* _currencyCode;
	NSString* _countryCode;
	long long _requestSchedule;
	NSArray* _summaryItems;

}

@property (nonatomic,copy) NSDecimalNumber * amount;                 //@synthesize amount=_amount - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                  //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,copy) NSString * countryCode;                   //@synthesize countryCode=_countryCode - In the implementation block
@property (assign,nonatomic) long long requestSchedule;              //@synthesize requestSchedule=_requestSchedule - In the implementation block
@property (nonatomic,copy) NSArray * summaryItems;                   //@synthesize summaryItems=_summaryItems - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)currencyCode;
-(NSString *)countryCode;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDecimalNumber *)amount;
-(NSArray *)summaryItems;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToDisbursementRequest:(id)arg1 ;
-(long long)requestSchedule;
-(void)setRequestSchedule:(long long)arg1 ;
-(void)setSummaryItems:(NSArray *)arg1 ;
@end

