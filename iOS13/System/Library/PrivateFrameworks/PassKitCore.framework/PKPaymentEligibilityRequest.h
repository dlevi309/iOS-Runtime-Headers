/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKPaymentCredential, NSString, NSData;

@interface PKPaymentEligibilityRequest : PKPaymentWebServiceRequest {

	PKPaymentCredential* _paymentCredential;
	NSString* _productIdentifier;
	long long _cardholderNameInputMethod;
	long long _primaryAccountNumberInputMethod;
	long long _expirationInputMethod;
	NSString* _issuerIdentifier;
	NSString* _hostApplicationIdentifier;
	NSString* _hostApplicationVersion;
	NSData* _FPInfo;
	NSString* _encryptionVersion;
	NSString* _cardholderName;
	NSString* _primaryAccountNumber;
	NSString* _expiration;
	NSData* _encryptedCardData;
	NSData* _publicKeyHash;
	NSData* _ephemeralPublicKey;
	NSData* _wrappedKey;
	NSString* _nonce;
	long long _source;
	NSString* _referrerIdentifier;
	NSString* _passOwnershipToken;

}

@property (nonatomic,copy) NSString * passOwnershipToken;                            //@synthesize passOwnershipToken=_passOwnershipToken - In the implementation block
@property (nonatomic,retain) PKPaymentCredential * paymentCredential;                //@synthesize paymentCredential=_paymentCredential - In the implementation block
@property (nonatomic,copy) NSString * productIdentifier;                             //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (assign,nonatomic) long long cardholderNameInputMethod;                    //@synthesize cardholderNameInputMethod=_cardholderNameInputMethod - In the implementation block
@property (assign,nonatomic) long long primaryAccountNumberInputMethod;              //@synthesize primaryAccountNumberInputMethod=_primaryAccountNumberInputMethod - In the implementation block
@property (assign,nonatomic) long long expirationInputMethod;                        //@synthesize expirationInputMethod=_expirationInputMethod - In the implementation block
@property (nonatomic,copy) NSString * issuerIdentifier;                              //@synthesize issuerIdentifier=_issuerIdentifier - In the implementation block
@property (nonatomic,copy) NSString * hostApplicationIdentifier;                     //@synthesize hostApplicationIdentifier=_hostApplicationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * hostApplicationVersion;                        //@synthesize hostApplicationVersion=_hostApplicationVersion - In the implementation block
@property (nonatomic,copy) NSData * FPInfo;                                          //@synthesize FPInfo=_FPInfo - In the implementation block
@property (nonatomic,copy) NSString * encryptionVersion;                             //@synthesize encryptionVersion=_encryptionVersion - In the implementation block
@property (nonatomic,copy) NSString * cardholderName;                                //@synthesize cardholderName=_cardholderName - In the implementation block
@property (nonatomic,copy) NSString * primaryAccountNumber;                          //@synthesize primaryAccountNumber=_primaryAccountNumber - In the implementation block
@property (nonatomic,copy) NSString * expiration;                                    //@synthesize expiration=_expiration - In the implementation block
@property (nonatomic,copy) NSData * encryptedCardData;                               //@synthesize encryptedCardData=_encryptedCardData - In the implementation block
@property (nonatomic,copy) NSData * publicKeyHash;                                   //@synthesize publicKeyHash=_publicKeyHash - In the implementation block
@property (nonatomic,copy) NSData * ephemeralPublicKey;                              //@synthesize ephemeralPublicKey=_ephemeralPublicKey - In the implementation block
@property (nonatomic,copy) NSData * wrappedKey;                                      //@synthesize wrappedKey=_wrappedKey - In the implementation block
@property (nonatomic,copy) NSString * nonce;                                         //@synthesize nonce=_nonce - In the implementation block
@property (nonatomic,readonly) long long source;                                     //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * referrerIdentifier;                            //@synthesize referrerIdentifier=_referrerIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)source;
-(NSString *)nonce;
-(void)setNonce:(NSString *)arg1 ;
-(NSString *)expiration;
-(id)initWithSource:(long long)arg1 ;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(NSString *)productIdentifier;
-(void)setReferrerIdentifier:(NSString *)arg1 ;
-(NSString *)hostApplicationIdentifier;
-(void)setHostApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)cardholderName;
-(void)setExpiration:(NSString *)arg1 ;
-(NSString *)referrerIdentifier;
-(NSData *)publicKeyHash;
-(void)setPublicKeyHash:(NSData *)arg1 ;
-(void)_updateRequestForRedirect:(id)arg1 overrides:(id)arg2 webService:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)_updateRequestForRetry:(id)arg1 retryFields:(id)arg2 webService:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(NSString *)issuerIdentifier;
-(void)setIssuerIdentifier:(NSString *)arg1 ;
-(id)initWithPaymentCredential:(id)arg1 ;
-(void)setCardholderName:(NSString *)arg1 ;
-(NSString *)encryptionVersion;
-(NSData *)ephemeralPublicKey;
-(void)setEphemeralPublicKey:(NSData *)arg1 ;
-(NSString *)primaryAccountNumber;
-(PKPaymentCredential *)paymentCredential;
-(NSData *)encryptedCardData;
-(BOOL)requiresNonce;
-(NSData *)wrappedKey;
-(void)setWrappedKey:(NSData *)arg1 ;
-(void)setEncryptionVersion:(NSString *)arg1 ;
-(NSString *)hostApplicationVersion;
-(void)setHostApplicationVersion:(NSString *)arg1 ;
-(NSData *)FPInfo;
-(void)setFPInfo:(NSData *)arg1 ;
-(void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 certChain:(id)arg4 devSigned:(BOOL)arg5 deviceData:(id)arg6 webService:(id)arg7 completion:(/*^block*/id)arg8 ;
-(void)setPaymentCredential:(PKPaymentCredential *)arg1 ;
-(void)setPrimaryAccountNumber:(NSString *)arg1 ;
-(NSString *)passOwnershipToken;
-(void)setPassOwnershipToken:(NSString *)arg1 ;
-(unsigned long long)_requestHTTPMethod;
-(long long)cardholderNameInputMethod;
-(void)setCardholderNameInputMethod:(long long)arg1 ;
-(long long)primaryAccountNumberInputMethod;
-(void)setPrimaryAccountNumberInputMethod:(long long)arg1 ;
-(long long)expirationInputMethod;
-(void)setExpirationInputMethod:(long long)arg1 ;
-(void)setEncryptedCardData:(NSData *)arg1 ;
@end

