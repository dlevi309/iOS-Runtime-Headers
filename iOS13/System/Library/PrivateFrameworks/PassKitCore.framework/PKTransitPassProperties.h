/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString, PKCurrencyAmount, NSArray, PKFelicaPassProperties, NSDecimalNumber;

@interface PKTransitPassProperties : NSObject <NSCopying, NSSecureCoding> {

	BOOL _blacklisted;
	NSDate* _expirationDate;
	NSString* _appletFormat;
	PKCurrencyAmount* _balance;
	NSArray* _enrouteTransitTypes;

}

@property (nonatomic,readonly) PKFelicaPassProperties * felicaProperties; 
@property (nonatomic,copy) NSString * appletFormat;                                     //@synthesize appletFormat=_appletFormat - In the implementation block
@property (nonatomic,copy) PKCurrencyAmount * balance;                                  //@synthesize balance=_balance - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                                     //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,getter=isBlacklisted,nonatomic) BOOL blacklisted;                     //@synthesize blacklisted=_blacklisted - In the implementation block
@property (nonatomic,readonly) NSString * displayableTransitBalance; 
@property (nonatomic,readonly) NSDecimalNumber * decimalTransitBalance; 
@property (nonatomic,readonly) NSString * currencyCode; 
@property (nonatomic,copy) NSArray * enrouteTransitTypes;                               //@synthesize enrouteTransitTypes=_enrouteTransitTypes - In the implementation block
@property (nonatomic,readonly) BOOL isEnRoute; 
@property (nonatomic,copy,readonly) NSDecimalNumber * transitBalance; 
@property (nonatomic,copy,readonly) NSString * transitBalanceCurrencyCode; 
@property (getter=isInStation,nonatomic,readonly) BOOL inStation; 
+(BOOL)supportsSecureCoding;
+(id)passPropertiesForPass:(id)arg1 ;
+(Class)equalityClass;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)currencyCode;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(PKCurrencyAmount *)balance;
-(void)setBalance:(PKCurrencyAmount *)arg1 ;
-(NSArray *)enrouteTransitTypes;
-(void)setEnrouteTransitTypes:(NSArray *)arg1 ;
-(BOOL)isBlacklisted;
-(void)setBlacklisted:(BOOL)arg1 ;
-(BOOL)isInStation;
-(id)initWithTransitAppletState:(id)arg1 paymentApplication:(id)arg2 ;
-(PKFelicaPassProperties *)felicaProperties;
-(NSDecimalNumber *)transitBalance;
-(NSString *)transitBalanceCurrencyCode;
-(NSString *)displayableTransitBalance;
-(NSDecimalNumber *)decimalTransitBalance;
-(BOOL)isEnRoute;
-(NSString *)appletFormat;
-(void)setAppletFormat:(NSString *)arg1 ;
@end

