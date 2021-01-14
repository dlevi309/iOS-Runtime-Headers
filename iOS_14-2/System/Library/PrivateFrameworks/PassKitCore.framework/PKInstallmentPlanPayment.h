/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDecimalNumber, NSDate, NSArray, PKCreditAccountStatement;

@interface PKInstallmentPlanPayment : NSObject <NSSecureCoding, NSCopying> {

	NSString* _identifier;
	NSString* _statementIdentifier;
	NSString* _currencyCode;
	NSDecimalNumber* _originalAmountDue;
	NSDecimalNumber* _amountDue;
	NSDecimalNumber* _amountPaid;
	NSDate* _dueDate;
	NSDate* _statementDate;
	NSArray* _lineItems;
	unsigned long long _paymentNumber;
	unsigned long long _paymentCount;
	PKCreditAccountStatement* _statement;

}

@property (nonatomic,copy) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * statementIdentifier;                      //@synthesize statementIdentifier=_statementIdentifier - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                             //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * originalAmountDue;               //@synthesize originalAmountDue=_originalAmountDue - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * amountDue;                       //@synthesize amountDue=_amountDue - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * amountPaid;                      //@synthesize amountPaid=_amountPaid - In the implementation block
@property (nonatomic,retain) NSDate * dueDate;                                  //@synthesize dueDate=_dueDate - In the implementation block
@property (nonatomic,retain) NSDate * statementDate;                            //@synthesize statementDate=_statementDate - In the implementation block
@property (nonatomic,copy) NSArray * lineItems;                                 //@synthesize lineItems=_lineItems - In the implementation block
@property (assign,nonatomic) unsigned long long paymentNumber;                  //@synthesize paymentNumber=_paymentNumber - In the implementation block
@property (assign,nonatomic) unsigned long long paymentCount;                   //@synthesize paymentCount=_paymentCount - In the implementation block
@property (getter=isPaid,nonatomic,readonly) BOOL paid; 
@property (nonatomic,retain) PKCreditAccountStatement * statement;              //@synthesize statement=_statement - In the implementation block
@property (nonatomic,readonly) NSString * localizedDisplay; 
+(BOOL)supportsSecureCoding;
-(PKCreditAccountStatement *)statement;
-(NSString *)currencyCode;
-(NSDate *)dueDate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setAmountDue:(NSDecimalNumber *)arg1 ;
-(BOOL)isPaid;
-(void)setDueDate:(NSDate *)arg1 ;
-(NSString *)statementIdentifier;
-(void)setStatementIdentifier:(NSString *)arg1 ;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(NSDecimalNumber *)amountPaid;
-(void)setStatement:(PKCreditAccountStatement *)arg1 ;
-(unsigned long long)paymentCount;
-(BOOL)isEqualToInstallmentPlanPayment:(id)arg1 ;
-(NSString *)localizedDisplay;
-(NSDecimalNumber *)originalAmountDue;
-(void)setOriginalAmountDue:(NSDecimalNumber *)arg1 ;
-(void)setAmountPaid:(NSDecimalNumber *)arg1 ;
-(NSDate *)statementDate;
-(void)setStatementDate:(NSDate *)arg1 ;
-(void)setLineItems:(NSArray *)arg1 ;
-(unsigned long long)paymentNumber;
-(void)setPaymentNumber:(unsigned long long)arg1 ;
-(void)setPaymentCount:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)lineItems;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSDecimalNumber *)amountDue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

