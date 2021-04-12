/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@class PKPaymentPass, NSArray, PKTransitPassProperties, NSSet;

@interface NPKTransitPassBalanceModel : NSObject {

	PKPaymentPass* _pass;
	NSArray* _transitBalanceFields;
	NSArray* _commutePlanFields;
	PKTransitPassProperties* _transitPassProperties;
	NSSet* _balances;

}

@property (nonatomic,readonly) PKPaymentPass * pass;                                       //@synthesize pass=_pass - In the implementation block
@property (nonatomic,readonly) NSArray * transitBalanceFields;                             //@synthesize transitBalanceFields=_transitBalanceFields - In the implementation block
@property (nonatomic,readonly) NSArray * commutePlanFields;                                //@synthesize commutePlanFields=_commutePlanFields - In the implementation block
@property (nonatomic,retain) PKTransitPassProperties * transitPassProperties;              //@synthesize transitPassProperties=_transitPassProperties - In the implementation block
@property (nonatomic,copy) NSSet * balances;                                               //@synthesize balances=_balances - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)initWithPass:(id)arg1 ;
-(PKPaymentPass *)pass;
-(NSSet *)balances;
-(void)setBalances:(NSSet *)arg1 ;
-(NSArray *)commutePlanFields;
-(void)updateItemFields;
-(id)_balanceByIDWithBalances:(id)arg1 ;
-(id)_primaryDisplayableBalanceFieldWithBalancesByID:(id)arg1 ;
-(id)_allPassBalanceFieldsWithBalancesByID:(id)arg1 ;
-(id)_commutePlanFieldsWithBalancesByID:(id)arg1 ;
-(id)_balanceFieldsWithBalancesByID:(id)arg1 passFields:(id)arg2 maximumCount:(unsigned long long)arg3 ;
-(id)_paymentBalanceFromTransitPassProperty:(id)arg1 ;
-(id)_actionWithIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
-(id)_balanceFieldWithBalance:(id)arg1 isPrimaryBalance:(BOOL)arg2 ;
-(id)_formattedValueWithCommutePlan:(id)arg1 balancesByID:(id)arg2 ;
-(PKTransitPassProperties *)transitPassProperties;
-(id)_commutePlanWithFelicaPassProperties:(id)arg1 ;
-(id)_identifierFromAction:(id)arg1 type:(unsigned long long)arg2 ;
-(NSArray *)transitBalanceFields;
-(void)setTransitPassProperties:(PKTransitPassProperties *)arg1 ;
@end

