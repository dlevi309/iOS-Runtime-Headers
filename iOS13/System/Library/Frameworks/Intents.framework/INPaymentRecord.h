/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INCacheableContainer.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INPerson, INCurrencyAmount, NSString, INPaymentMethod;

@interface INPaymentRecord : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding> {

	INPerson* _payee;
	INPerson* _payer;
	INCurrencyAmount* _currencyAmount;
	NSString* _note;
	long long _status;
	INPaymentMethod* _paymentMethod;
	INCurrencyAmount* _feeAmount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) INPerson * payee;                               //@synthesize payee=_payee - In the implementation block
@property (nonatomic,copy,readonly) INPerson * payer;                               //@synthesize payer=_payer - In the implementation block
@property (nonatomic,copy,readonly) INCurrencyAmount * currencyAmount;              //@synthesize currencyAmount=_currencyAmount - In the implementation block
@property (nonatomic,copy,readonly) NSString * note;                                //@synthesize note=_note - In the implementation block
@property (nonatomic,readonly) long long status;                                    //@synthesize status=_status - In the implementation block
@property (nonatomic,copy,readonly) INPaymentMethod * paymentMethod;                //@synthesize paymentMethod=_paymentMethod - In the implementation block
@property (nonatomic,copy,readonly) INCurrencyAmount * feeAmount;                   //@synthesize feeAmount=_feeAmount - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)status;
-(id)_dictionaryRepresentation;
-(NSString *)note;
-(INPaymentMethod *)paymentMethod;
-(id)_intents_cacheableObjects;
-(void)_intents_updateContainerWithCache:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(INCurrencyAmount *)currencyAmount;
-(INPerson *)payee;
-(INCurrencyAmount *)feeAmount;
-(INPerson *)payer;
-(id)initWithPayee:(id)arg1 payer:(id)arg2 currencyAmount:(id)arg3 paymentMethod:(id)arg4 note:(id)arg5 status:(long long)arg6 feeAmount:(id)arg7 ;
-(id)initWithPayee:(id)arg1 payer:(id)arg2 currencyAmount:(id)arg3 paymentMethod:(id)arg4 note:(id)arg5 status:(long long)arg6 ;
@end

