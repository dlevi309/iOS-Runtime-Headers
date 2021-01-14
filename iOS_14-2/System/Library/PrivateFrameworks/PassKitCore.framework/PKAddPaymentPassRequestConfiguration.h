/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSSet;

@interface PKAddPaymentPassRequestConfiguration : NSObject <NSSecureCoding> {

	BOOL _requiresFelicaSecureElement;
	NSString* _encryptionScheme;
	long long _style;
	NSString* _cardholderName;
	NSString* _primaryAccountSuffix;
	NSArray* _cardDetails;
	NSString* _localizedDescription;
	NSString* _primaryAccountIdentifier;
	NSString* _paymentNetwork;
	NSSet* _productIdentifiers;

}

@property (getter=isPaymentAccount,nonatomic,readonly) BOOL paymentAccount; 
@property (nonatomic,copy,readonly) NSString * encryptionScheme;                         //@synthesize encryptionScheme=_encryptionScheme - In the implementation block
@property (assign,nonatomic) long long style;                                            //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * cardholderName;                                    //@synthesize cardholderName=_cardholderName - In the implementation block
@property (nonatomic,copy) NSString * primaryAccountSuffix;                              //@synthesize primaryAccountSuffix=_primaryAccountSuffix - In the implementation block
@property (nonatomic,copy) NSArray * cardDetails;                                        //@synthesize cardDetails=_cardDetails - In the implementation block
@property (nonatomic,copy) NSString * localizedDescription;                              //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,copy) NSString * primaryAccountIdentifier;                          //@synthesize primaryAccountIdentifier=_primaryAccountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * paymentNetwork;                                    //@synthesize paymentNetwork=_paymentNetwork - In the implementation block
@property (nonatomic,copy) NSSet * productIdentifiers;                                   //@synthesize productIdentifiers=_productIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL requiresFelicaSecureElement;                           //@synthesize requiresFelicaSecureElement=_requiresFelicaSecureElement - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSArray *)cardDetails;
-(void)setCardDetails:(NSArray *)arg1 ;
-(id)_effectiveDetails;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_filterWebServices:(id)arg1 primaryAccountIdentifierRequired:(BOOL)arg2 ;
-(id)description;
-(NSString *)localizedDescription;
-(NSString *)cardholderName;
-(NSString *)encryptionScheme;
-(void)setCardholderName:(NSString *)arg1 ;
-(void)setPrimaryAccountIdentifier:(NSString *)arg1 ;
-(BOOL)requiresFelicaSecureElement;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithEncryptionScheme:(id)arg1 ;
-(void)setPrimaryAccountSuffix:(NSString *)arg1 ;
-(NSSet *)productIdentifiers;
-(void)setProductIdentifiers:(NSSet *)arg1 ;
-(void)setRequiresFelicaSecureElement:(BOOL)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(NSString *)primaryAccountSuffix;
-(NSString *)primaryAccountIdentifier;
-(void)setStyle:(long long)arg1 ;
-(void)setPaymentNetwork:(NSString *)arg1 ;
-(NSString *)paymentNetwork;
-(BOOL)isPaymentAccount;
-(long long)style;
-(void)dealloc;
@end

