/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INBillPayee, INCurrencyAmount, NSDateComponents, NSString;

@interface INBillDetails : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	INBillPayee* _billPayee;
	INCurrencyAmount* _amountDue;
	INCurrencyAmount* _minimumDue;
	INCurrencyAmount* _lateFee;
	NSDateComponents* _dueDate;
	NSDateComponents* _paymentDate;
	long long _billType;
	long long _paymentStatus;

}

@property (nonatomic,copy) INBillPayee * billPayee;                     //@synthesize billPayee=_billPayee - In the implementation block
@property (nonatomic,copy) INCurrencyAmount * amountDue;                //@synthesize amountDue=_amountDue - In the implementation block
@property (nonatomic,copy) INCurrencyAmount * minimumDue;               //@synthesize minimumDue=_minimumDue - In the implementation block
@property (nonatomic,copy) INCurrencyAmount * lateFee;                  //@synthesize lateFee=_lateFee - In the implementation block
@property (nonatomic,copy) NSDateComponents * dueDate;                  //@synthesize dueDate=_dueDate - In the implementation block
@property (nonatomic,copy) NSDateComponents * paymentDate;              //@synthesize paymentDate=_paymentDate - In the implementation block
@property (assign,nonatomic) long long billType;                        //@synthesize billType=_billType - In the implementation block
@property (assign,nonatomic) long long paymentStatus;                   //@synthesize paymentStatus=_paymentStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(INCurrencyAmount *)lateFee;
-(NSDateComponents *)dueDate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(long long)billType;
-(void)setBillPayee:(INBillPayee *)arg1 ;
-(void)setAmountDue:(INCurrencyAmount *)arg1 ;
-(void)setMinimumDue:(INCurrencyAmount *)arg1 ;
-(id)initWithBillType:(long long)arg1 paymentStatus:(long long)arg2 billPayee:(id)arg3 amountDue:(id)arg4 minimumDue:(id)arg5 lateFee:(id)arg6 dueDate:(id)arg7 paymentDate:(id)arg8 ;
-(INCurrencyAmount *)minimumDue;
-(void)setLateFee:(INCurrencyAmount *)arg1 ;
-(void)setDueDate:(NSDateComponents *)arg1 ;
-(NSDateComponents *)paymentDate;
-(void)setPaymentDate:(NSDateComponents *)arg1 ;
-(void)setBillType:(long long)arg1 ;
-(long long)paymentStatus;
-(void)setPaymentStatus:(long long)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(INBillPayee *)billPayee;
-(INCurrencyAmount *)amountDue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

