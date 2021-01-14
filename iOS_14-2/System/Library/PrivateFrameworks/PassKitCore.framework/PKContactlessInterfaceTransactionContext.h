/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSDate, PKPaymentPass, PKPaymentApplication, PKPaymentTransaction, NSArray, PKTransitAppletHistory, PKExpressTransactionState, PKFelicaAppletHistory;

@interface PKContactlessInterfaceTransactionContext : NSObject {

	BOOL _success;
	BOOL _incompatible;
	NSDate* _date;
	PKPaymentPass* _paymentPass;
	PKPaymentApplication* _paymentApplication;
	PKPaymentTransaction* _transaction;
	NSArray* _valueAddedServicePasses;
	NSArray* _valueAddedServiceTransactions;
	PKTransitAppletHistory* _transitHistory;
	PKExpressTransactionState* _expressState;

}

@property (assign,nonatomic) BOOL success;                                           //@synthesize success=_success - In the implementation block
@property (assign,getter=isIncompatible,nonatomic) BOOL incompatible;                //@synthesize incompatible=_incompatible - In the implementation block
@property (nonatomic,retain) NSDate * date;                                          //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) PKPaymentPass * paymentPass;                            //@synthesize paymentPass=_paymentPass - In the implementation block
@property (nonatomic,retain) PKPaymentApplication * paymentApplication;              //@synthesize paymentApplication=_paymentApplication - In the implementation block
@property (nonatomic,retain) PKPaymentTransaction * transaction;                     //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) NSArray * valueAddedServicePasses;                      //@synthesize valueAddedServicePasses=_valueAddedServicePasses - In the implementation block
@property (nonatomic,retain) NSArray * valueAddedServiceTransactions;                //@synthesize valueAddedServiceTransactions=_valueAddedServiceTransactions - In the implementation block
@property (nonatomic,retain) PKTransitAppletHistory * transitHistory;                //@synthesize transitHistory=_transitHistory - In the implementation block
@property (nonatomic,readonly) PKFelicaAppletHistory * felicaHistory; 
@property (nonatomic,retain) PKExpressTransactionState * expressState;               //@synthesize expressState=_expressState - In the implementation block
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(void)setTransaction:(PKPaymentTransaction *)arg1 ;
-(PKPaymentTransaction *)transaction;
-(void)setDate:(NSDate *)arg1 ;
-(PKPaymentPass *)paymentPass;
-(PKExpressTransactionState *)expressState;
-(PKFelicaAppletHistory *)felicaHistory;
-(BOOL)isIncompatible;
-(void)setIncompatible:(BOOL)arg1 ;
-(void)setPaymentPass:(PKPaymentPass *)arg1 ;
-(PKPaymentApplication *)paymentApplication;
-(void)setPaymentApplication:(PKPaymentApplication *)arg1 ;
-(NSArray *)valueAddedServicePasses;
-(void)setValueAddedServicePasses:(NSArray *)arg1 ;
-(NSArray *)valueAddedServiceTransactions;
-(void)setValueAddedServiceTransactions:(NSArray *)arg1 ;
-(PKTransitAppletHistory *)transitHistory;
-(void)setTransitHistory:(PKTransitAppletHistory *)arg1 ;
-(NSDate *)date;
-(void)setExpressState:(PKExpressTransactionState *)arg1 ;
@end

