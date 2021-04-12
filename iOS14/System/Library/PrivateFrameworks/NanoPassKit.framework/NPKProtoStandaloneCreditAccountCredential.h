/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NPKProtoStandalonePaymentCredential, NPKProtoStandalonePaymentPass;

@interface NPKProtoStandaloneCreditAccountCredential : PBCodable <NSCopying> {

	double _creditLimit;
	double _currentBalance;
	NSString* _currencyCode;
	NPKProtoStandalonePaymentCredential* _paymentCredential;
	NPKProtoStandalonePaymentPass* _paymentPass;
	SCD_Struct_NP1 _has;

}

@property (nonatomic,retain) NPKProtoStandalonePaymentCredential * paymentCredential;              //@synthesize paymentCredential=_paymentCredential - In the implementation block
@property (nonatomic,readonly) BOOL hasPaymentPass; 
@property (nonatomic,retain) NPKProtoStandalonePaymentPass * paymentPass;                          //@synthesize paymentPass=_paymentPass - In the implementation block
@property (nonatomic,readonly) BOOL hasCurrencyCode; 
@property (nonatomic,retain) NSString * currencyCode;                                              //@synthesize currencyCode=_currencyCode - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentBalance; 
@property (assign,nonatomic) double currentBalance;                                                //@synthesize currentBalance=_currentBalance - In the implementation block
@property (assign,nonatomic) BOOL hasCreditLimit; 
@property (assign,nonatomic) double creditLimit;                                                   //@synthesize creditLimit=_creditLimit - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)currencyCode;
-(double)currentBalance;
-(void)setCreditLimit:(double)arg1 ;
-(double)creditLimit;
-(void)setCurrentBalance:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NPKProtoStandalonePaymentPass *)paymentPass;
-(void)setPaymentPass:(NPKProtoStandalonePaymentPass *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NPKProtoStandalonePaymentCredential *)paymentCredential;
-(BOOL)hasPaymentPass;
-(void)setPaymentCredential:(NPKProtoStandalonePaymentCredential *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasCurrencyCode;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasCurrentBalance:(BOOL)arg1 ;
-(BOOL)hasCurrentBalance;
-(void)setHasCreditLimit:(BOOL)arg1 ;
-(BOOL)hasCreditLimit;
@end

