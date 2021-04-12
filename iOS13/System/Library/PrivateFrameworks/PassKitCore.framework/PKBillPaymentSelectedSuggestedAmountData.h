/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)transactionDate;
-(void)setTransactionDate:(NSDate *)arg1 ;
-(id)initWithRecord:(id)arg1 ;
-(NSDecimalNumber *)transactionAmount;
-(void)setTransactionAmount:(NSDecimalNumber *)arg1 ;
-(void)encodeWithRecord:(id)arg1 ;
-(NSString *)statementIdentifier;
-(void)setStatementIdentifier:(NSString *)arg1 ;
-(id)initWithStatementIdentifier:(id)arg1 transactionDate:(id)arg2 transactionAmount:(id)arg3 suggestedAmountCategory:(unsigned long long)arg4 ;
-(unsigned long long)suggestedAmountCategory;
-(void)setSuggestedAmountCategory:(unsigned long long)arg1 ;
@end

