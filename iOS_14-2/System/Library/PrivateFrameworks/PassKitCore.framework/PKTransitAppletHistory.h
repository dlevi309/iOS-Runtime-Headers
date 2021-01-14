/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSDecimalNumber, NSDate, NSArray, NSSet;

@interface PKTransitAppletHistory : NSObject <NSSecureCoding> {

	BOOL _blacklisted;
	long long _source;
	NSString* _serviceProvider;
	NSNumber* _serverRefreshIdentifier;
	NSString* _currency;
	NSDecimalNumber* _balance;
	NSNumber* _loyaltyBalance;
	NSDate* _expirationDate;
	NSArray* _balances;
	NSArray* _historyRecords;
	NSArray* _inStationDetails;
	NSSet* _enrouteTransitTypes;

}

@property (assign,nonatomic) long long source;                                   //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * serviceProvider;                           //@synthesize serviceProvider=_serviceProvider - In the implementation block
@property (nonatomic,copy) NSNumber * serverRefreshIdentifier;                   //@synthesize serverRefreshIdentifier=_serverRefreshIdentifier - In the implementation block
@property (assign,getter=isBlacklisted,nonatomic) BOOL blacklisted;              //@synthesize blacklisted=_blacklisted - In the implementation block
@property (nonatomic,copy) NSString * currency;                                  //@synthesize currency=_currency - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * balance;                            //@synthesize balance=_balance - In the implementation block
@property (nonatomic,copy) NSNumber * loyaltyBalance;                            //@synthesize loyaltyBalance=_loyaltyBalance - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                            //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy) NSArray * balances;                                   //@synthesize balances=_balances - In the implementation block
@property (nonatomic,copy) NSArray * historyRecords;                             //@synthesize historyRecords=_historyRecords - In the implementation block
@property (nonatomic,copy) NSArray * inStationDetails;                           //@synthesize inStationDetails=_inStationDetails - In the implementation block
@property (nonatomic,copy) NSSet * enrouteTransitTypes;                          //@synthesize enrouteTransitTypes=_enrouteTransitTypes - In the implementation block
@property (getter=isInStation,nonatomic,readonly) BOOL inStation; 
+(BOOL)supportsSecureCoding;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(id)init;
-(NSDecimalNumber *)balance;
-(NSArray *)balances;
-(void)setBalance:(NSDecimalNumber *)arg1 ;
-(void)setServiceProvider:(NSString *)arg1 ;
-(void)setHistoryRecords:(NSArray *)arg1 ;
-(NSArray *)inStationDetails;
-(void)setInStationDetails:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setBalances:(NSArray *)arg1 ;
-(void)setLoyaltyBalance:(NSNumber *)arg1 ;
-(NSString *)currency;
-(NSNumber *)loyaltyBalance;
-(NSNumber *)serverRefreshIdentifier;
-(void)setServerRefreshIdentifier:(NSNumber *)arg1 ;
-(void)setSource:(long long)arg1 ;
-(NSDate *)expirationDate;
-(NSString *)serviceProvider;
-(id)initWithCoder:(id)arg1 ;
-(id)felicaHistory;
-(id)initWithDictionary:(id)arg1 source:(long long)arg2 ;
-(NSArray *)historyRecords;
-(BOOL)isBlacklisted;
-(void)setCurrency:(NSString *)arg1 ;
-(NSSet *)enrouteTransitTypes;
-(void)setEnrouteTransitTypes:(NSSet *)arg1 ;
-(void)setBlacklisted:(BOOL)arg1 ;
-(void)sanitizeValuesWithState:(id)arg1 ;
-(BOOL)isInStation;
-(void)dealloc;
-(long long)source;
@end

