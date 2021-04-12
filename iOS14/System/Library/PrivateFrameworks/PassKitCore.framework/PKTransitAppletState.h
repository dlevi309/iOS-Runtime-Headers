/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSDecimalNumber, NSString, NSDate, NSArray, PKFelicaTransitAppletState;

@interface PKTransitAppletState : NSObject <NSCopying, NSSecureCoding> {

	BOOL _blacklisted;
	BOOL _needsStationProcessing;
	BOOL _appletStateDirty;
	NSNumber* _historySequenceNumber;
	NSNumber* _serverRefreshIdentifier;
	NSDecimalNumber* _balance;
	NSNumber* _loyaltyBalance;
	NSString* _currency;
	NSDate* _expirationDate;
	NSArray* _balances;
	NSArray* _enrouteTransitTypes;

}

@property (nonatomic,readonly) PKFelicaTransitAppletState * felicaState; 
@property (assign,getter=isBlacklisted,nonatomic) BOOL blacklisted;                   //@synthesize blacklisted=_blacklisted - In the implementation block
@property (nonatomic,copy) NSNumber * historySequenceNumber;                          //@synthesize historySequenceNumber=_historySequenceNumber - In the implementation block
@property (nonatomic,copy) NSNumber * serverRefreshIdentifier;                        //@synthesize serverRefreshIdentifier=_serverRefreshIdentifier - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * balance;                                 //@synthesize balance=_balance - In the implementation block
@property (nonatomic,copy) NSNumber * loyaltyBalance;                                 //@synthesize loyaltyBalance=_loyaltyBalance - In the implementation block
@property (nonatomic,copy) NSString * currency;                                       //@synthesize currency=_currency - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                                   //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy) NSArray * balances;                                        //@synthesize balances=_balances - In the implementation block
@property (nonatomic,copy) NSArray * enrouteTransitTypes;                             //@synthesize enrouteTransitTypes=_enrouteTransitTypes - In the implementation block
@property (assign,nonatomic) BOOL needsStationProcessing;                             //@synthesize needsStationProcessing=_needsStationProcessing - In the implementation block
@property (assign,nonatomic) BOOL appletStateDirty;                                   //@synthesize appletStateDirty=_appletStateDirty - In the implementation block
@property (getter=isInStation,nonatomic,readonly) BOOL inStation; 
+(BOOL)supportsSecureCoding;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)_resolveTransactionsFromState:(id)arg1 toState:(id)arg2 withHistoryRecords:(id)arg3 concreteTransactions:(id*)arg4 ephemeralTransaction:(id*)arg5 balanceLabels:(id)arg6 unitDictionary:(id)arg7 ;
-(NSDecimalNumber *)balance;
-(NSArray *)balances;
-(void)setBalance:(NSDecimalNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)appletStateDirty;
-(void)setBalances:(NSArray *)arg1 ;
-(void)setLoyaltyBalance:(NSNumber *)arg1 ;
-(NSString *)currency;
-(NSNumber *)loyaltyBalance;
-(NSNumber *)serverRefreshIdentifier;
-(void)setServerRefreshIdentifier:(NSNumber *)arg1 ;
-(void)setAppletStateDirty:(BOOL)arg1 ;
-(id)processUpdateWithAppletHistory:(id)arg1 concreteTransactions:(id*)arg2 ephemeralTransaction:(id*)arg3 mutatedBalances:(id*)arg4 ;
-(id)processUpdateWithAppletHistory:(id)arg1 concreteTransactions:(id*)arg2 ephemeralTransaction:(id*)arg3 mutatedBalances:(id*)arg4 balanceLabelDictionary:(id)arg5 ;
-(id)processUpdateWithAppletHistory:(id)arg1 concreteTransactions:(id*)arg2 ephemeralTransaction:(id*)arg3 mutatedBalances:(id*)arg4 balanceLabelDictionary:(id)arg5 unitDictionary:(id)arg6 ;
-(NSDate *)expirationDate;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isBlacklisted;
-(void)setCurrency:(NSString *)arg1 ;
-(NSArray *)enrouteTransitTypes;
-(void)setEnrouteTransitTypes:(NSArray *)arg1 ;
-(void)addEnrouteTransitType:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBlacklisted:(BOOL)arg1 ;
-(id)processUpdateWithAppletHistory:(id)arg1 concreteTransactions:(id*)arg2 ephemeralTransaction:(id*)arg3 ;
-(id)updatedEnrouteTransitTypesFromExistingTypes:(id)arg1 newTypes:(id)arg2 ;
-(BOOL)isInStation;
-(BOOL)needsStationProcessing;
-(void)setNeedsStationProcessing:(BOOL)arg1 ;
-(NSNumber *)historySequenceNumber;
-(void)setHistorySequenceNumber:(NSNumber *)arg1 ;
-(id)transitPassPropertiesWithPaymentApplication:(id)arg1 ;
-(PKFelicaTransitAppletState *)felicaState;
-(BOOL)isEqual:(id)arg1 ;
@end

