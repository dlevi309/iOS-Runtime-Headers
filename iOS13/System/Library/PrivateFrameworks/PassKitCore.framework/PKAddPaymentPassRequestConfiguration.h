/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (nonatomic,copy,readonly) NSString * encryptionScheme;              //@synthesize encryptionScheme=_encryptionScheme - In the implementation block
@property (assign,nonatomic) long long style;                                 //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * cardholderName;                         //@synthesize cardholderName=_cardholderName - In the implementation block
@property (nonatomic,copy) NSString * primaryAccountSuffix;                   //@synthesize primaryAccountSuffix=_primaryAccountSuffix - In the implementation block
@property (nonatomic,copy) NSArray * cardDetails;                             //@synthesize cardDetails=_cardDetails - In the implementation block
@property (nonatomic,copy) NSString * localizedDescription;                   //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,copy) NSString * primaryAccountIdentifier;               //@synthesize primaryAccountIdentifier=_primaryAccountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * paymentNetwork;                         //@synthesize paymentNetwork=_paymentNetwork - In the implementation block
@property (nonatomic,copy) NSSet * productIdentifiers;                        //@synthesize productIdentifiers=_productIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL requiresFelicaSecureElement;                //@synthesize requiresFelicaSecureElement=_requiresFelicaSecureElement - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(NSString *)localizedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(NSString *)paymentNetwork;
-(void)setPaymentNetwork:(NSString *)arg1 ;
-(NSString *)primaryAccountIdentifier;
-(NSString *)cardholderName;
-(void)setCardholderName:(NSString *)arg1 ;
-(void)setPrimaryAccountIdentifier:(NSString *)arg1 ;
-(BOOL)requiresFelicaSecureElement;
-(id)initWithEncryptionScheme:(id)arg1 ;
-(NSString *)encryptionScheme;
-(NSString *)primaryAccountSuffix;
-(void)setPrimaryAccountSuffix:(NSString *)arg1 ;
-(NSArray *)cardDetails;
-(void)setCardDetails:(NSArray *)arg1 ;
-(NSSet *)productIdentifiers;
-(void)setProductIdentifiers:(NSSet *)arg1 ;
-(void)setRequiresFelicaSecureElement:(BOOL)arg1 ;
@end

