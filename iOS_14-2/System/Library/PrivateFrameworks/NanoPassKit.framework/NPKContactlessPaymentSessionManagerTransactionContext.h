/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@class PKPass, NSString, PKPaymentTransaction, NSArray, NPKPaymentBarcode;

@interface NPKContactlessPaymentSessionManagerTransactionContext : NSObject {

	BOOL _redeemedTicket;
	BOOL _enRoute;
	BOOL _authenticationRequested;
	PKPass* _transactionPass;
	PKPass* _valueAddedServicePass;
	NSString* _paymentMethodDescription;
	PKPaymentTransaction* _paymentTransaction;
	unsigned long long _transactionStatus;
	unsigned long long _transactionType;
	NSString* _transactionDescription;
	NSArray* _displayablePassItems;
	NPKPaymentBarcode* _paymentBarcode;

}

@property (nonatomic,retain) PKPass * transactionPass;                               //@synthesize transactionPass=_transactionPass - In the implementation block
@property (nonatomic,retain) PKPass * valueAddedServicePass;                         //@synthesize valueAddedServicePass=_valueAddedServicePass - In the implementation block
@property (nonatomic,retain) NSString * paymentMethodDescription;                    //@synthesize paymentMethodDescription=_paymentMethodDescription - In the implementation block
@property (nonatomic,retain) PKPaymentTransaction * paymentTransaction;              //@synthesize paymentTransaction=_paymentTransaction - In the implementation block
@property (assign,nonatomic) unsigned long long transactionStatus;                   //@synthesize transactionStatus=_transactionStatus - In the implementation block
@property (assign,nonatomic) unsigned long long transactionType;                     //@synthesize transactionType=_transactionType - In the implementation block
@property (assign,nonatomic) BOOL redeemedTicket;                                    //@synthesize redeemedTicket=_redeemedTicket - In the implementation block
@property (assign,nonatomic) BOOL enRoute;                                           //@synthesize enRoute=_enRoute - In the implementation block
@property (nonatomic,retain) NSString * transactionDescription;                      //@synthesize transactionDescription=_transactionDescription - In the implementation block
@property (nonatomic,retain) NSArray * displayablePassItems;                         //@synthesize displayablePassItems=_displayablePassItems - In the implementation block
@property (nonatomic,retain) NPKPaymentBarcode * paymentBarcode;                     //@synthesize paymentBarcode=_paymentBarcode - In the implementation block
@property (assign,nonatomic) BOOL authenticationRequested;                           //@synthesize authenticationRequested=_authenticationRequested - In the implementation block
-(id)init;
-(BOOL)enRoute;
-(void)setTransactionType:(unsigned long long)arg1 ;
-(PKPaymentTransaction *)paymentTransaction;
-(void)setPaymentTransaction:(PKPaymentTransaction *)arg1 ;
-(id)description;
-(void)setTransactionStatus:(unsigned long long)arg1 ;
-(unsigned long long)transactionStatus;
-(void)setEnRoute:(BOOL)arg1 ;
-(unsigned long long)transactionType;
-(void)setTransactionDescription:(NSString *)arg1 ;
-(void)setDisplayablePassItems:(NSArray *)arg1 ;
-(void)setRedeemedTicket:(BOOL)arg1 ;
-(PKPass *)transactionPass;
-(PKPass *)valueAddedServicePass;
-(NSString *)transactionDescription;
-(NSArray *)displayablePassItems;
-(NPKPaymentBarcode *)paymentBarcode;
-(BOOL)authenticationRequested;
-(void)updateWithConcreteTransactions:(id)arg1 ephemeralTransaction:(id)arg2 updatedPassTransitItems:(id)arg3 paymentApplication:(id)arg4 ;
-(void)forceToTransitTypeTransactionWithTransactionStatus:(unsigned long long)arg1 ;
-(void)setTransactionPass:(PKPass *)arg1 ;
-(void)setValueAddedServicePass:(PKPass *)arg1 ;
-(NSString *)paymentMethodDescription;
-(void)setPaymentMethodDescription:(NSString *)arg1 ;
-(BOOL)redeemedTicket;
-(void)setPaymentBarcode:(NPKPaymentBarcode *)arg1 ;
-(void)setAuthenticationRequested:(BOOL)arg1 ;
@end

