/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)currencyCode;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(id)initWithRecord:(id)arg1 ;
-(NSDecimalNumber *)minimumDue;
-(void)setMinimumDue:(NSDecimalNumber *)arg1 ;
-(NSDate *)paymentDueDate;
-(void)setPaymentDueDate:(NSDate *)arg1 ;
-(void)encodeWithRecord:(id)arg1 ;
@end

