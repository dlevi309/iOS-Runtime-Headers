/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKRecordObject.h>

@class NSDecimalNumber, NSString, NSDate;

@interface PKAccountPaymentReminder : NSObject <NSSecureCoding, PKRecordObject> {

	NSDecimalNumber* _minimumDue;
	NSString* _currencyCode;
	NSDate* _paymentDueDate;

}

@property (nonatomic,copy) NSDecimalNumber * minimumDue;              //@synthesize minimumDue=_minimumDue - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                   //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,copy) NSDate * paymentDueDate;                   //@synthesize paymentDueDate=_paymentDueDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)recordType;
+(id)recordNamePrefix;
-(NSString *)currencyCode;
-(NSDate *)paymentDueDate;
-(void)setPaymentDueDate:(NSDate *)arg1 ;
-(void)encodeWithRecord:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setMinimumDue:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)minimumDue;
-(id)initWithRecord:(id)arg1 ;
-(NSString *)description;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

