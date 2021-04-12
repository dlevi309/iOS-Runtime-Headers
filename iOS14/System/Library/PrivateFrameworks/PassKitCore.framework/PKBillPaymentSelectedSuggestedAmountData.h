/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKRecordObject.h>

@class NSString, NSDate, NSDecimalNumber;

@interface PKBillPaymentSelectedSuggestedAmountData : NSObject <NSSecureCoding, PKRecordObject> {

	NSString* _statementIdentifier;
	NSDate* _transactionDate;
	unsigned long long _suggestedAmountCategory;
	NSDecimalNumber* _transactionAmount;

}

@property (nonatomic,copy) NSString * statementIdentifier;                            //@synthesize statementIdentifier=_statementIdentifier - In the implementation block
@property (nonatomic,copy) NSDate * transactionDate;                                  //@synthesize transactionDate=_transactionDate - In the implementation block
@property (assign,nonatomic) unsigned long long suggestedAmountCategory;              //@synthesize suggestedAmountCategory=_suggestedAmountCategory - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * transactionAmount;                       //@synthesize transactionAmount=_transactionAmount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)recordType;
+(id)recordNamePrefix;
-(void)encodeWithRecord:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSuggestedAmountCategory:(unsigned long long)arg1 ;
-(id)initWithStatementIdentifier:(id)arg1 transactionDate:(id)arg2 transactionAmount:(id)arg3 suggestedAmountCategory:(unsigned long long)arg4 ;
-(unsigned long long)suggestedAmountCategory;
-(NSDate *)transactionDate;
-(void)setTransactionDate:(NSDate *)arg1 ;
-(id)initWithRecord:(id)arg1 ;
-(NSString *)description;
-(NSString *)statementIdentifier;
-(void)setStatementIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDecimalNumber *)transactionAmount;
-(void)setTransactionAmount:(NSDecimalNumber *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

