/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@class PKPaymentPass, NSArray, PKTransitAppletState, PKTransitPassProperties, NSSet;

@interface NPKPassAssociatedInfoModel : NSObject {

	BOOL _commutePlanValueRequired;
	PKPaymentPass* _pass;
	NSArray* _balanceFields;
	NSArray* _commutePlanFields;
	PKTransitAppletState* _transitAppletState;
	PKTransitPassProperties* _transitPassProperties;
	NSSet* _balances;

}

@property (nonatomic,readonly) PKPaymentPass * pass;                                                       //@synthesize pass=_pass - In the implementation block
@property (nonatomic,readonly) NSArray * balanceFields;                                                    //@synthesize balanceFields=_balanceFields - In the implementation block
@property (nonatomic,readonly) NSArray * commutePlanFields;                                                //@synthesize commutePlanFields=_commutePlanFields - In the implementation block
@property (nonatomic,readonly) NSArray * allPassItemsFields; 
@property (nonatomic,retain) PKTransitAppletState * transitAppletState;                                    //@synthesize transitAppletState=_transitAppletState - In the implementation block
@property (nonatomic,retain) PKTransitPassProperties * transitPassProperties;                              //@synthesize transitPassProperties=_transitPassProperties - In the implementation block
@property (nonatomic,copy) NSSet * balances;                                                               //@synthesize balances=_balances - In the implementation block
@property (assign,getter=isCommutePlanValueRequired,nonatomic) BOOL commutePlanValueRequired;              //@synthesize commutePlanValueRequired=_commutePlanValueRequired - In the implementation block
-(NSSet *)balances;
-(void)setBalances:(NSSet *)arg1 ;
-(id)description;
-(PKPaymentPass *)pass;
-(NSArray *)balanceFields;
-(id)initWithPass:(id)arg1 ;
-(PKTransitAppletState *)transitAppletState;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTransitAppletState:(PKTransitAppletState *)arg1 ;
-(id)initWithPass:(id)arg1 transitProperties:(id)arg2 balances:(id)arg3 commutePlanValueRequired:(BOOL)arg4 ;
-(NSArray *)allPassItemsFields;
-(NSArray *)commutePlanFields;
-(void)updateItemFields;
-(id)_balanceByIDWithBalances:(id)arg1 ;
-(id)_primaryDisplayableBalanceFieldWithBalancesByID:(id)arg1 ;
-(id)_allPassBalanceFieldsWithBalancesByID:(id)arg1 ;
-(id)_commutePlanFieldsWithBalancesByID:(id)arg1 ;
-(id)_balancePassFieldsFromPass:(id)arg1 ;
-(id)_balanceFieldsWithBalancesByID:(id)arg1 passFields:(id)arg2 maximumCount:(unsigned long long)arg3 ;
-(id)_actionWithIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
-(id)_balanceFieldWithPassField:(id)arg1 balance:(id)arg2 isPrimaryBalance:(BOOL)arg3 ;
-(BOOL)_shouldAddCommutePlan:(id)arg1 action:(id)arg2 withBalancesByID:(id)arg3 ;
-(id)_formattedValueWithCommutePlan:(id)arg1 balancesByID:(id)arg2 ;
-(PKTransitPassProperties *)transitPassProperties;
-(id)_commutePlanWithFelicaPassProperties:(id)arg1 ;
-(BOOL)isCommutePlanValueRequired;
-(id)_identifierFromAction:(id)arg1 type:(unsigned long long)arg2 ;
-(void)setTransitPassProperties:(PKTransitPassProperties *)arg1 ;
-(void)setCommutePlanValueRequired:(BOOL)arg1 ;
@end

