/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKPaymentCredential, NSString, NSData, PKAddPaymentPassRequestConfiguration;

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
	PKAddPaymentPassRequestConfiguration* _addPaymentPassRequestConfiguration;
	NSString* _passOwnershipToken;

}

@property (nonatomic,copy) NSString * passOwnershipToken;                                                              //@synthesize passOwnershipToken=_passOwnershipToken - In the implementation block
@property (nonatomic,retain) PKPaymentCredential * paymentCredential;                                                  //@synthesize paymentCredential=_paymentCredential - In the implementation block
@property (nonatomic,copy) NSString * productIdentifier;                                                               //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (assign,nonatomic) long long cardholderNameInputMethod;                                                      //@synthesize cardholderNameInputMethod=_cardholderNameInputMethod - In the implementation block
@property (assign,nonatomic) long long primaryAccountNumberInputMethod;                                                //@synthesize primaryAccountNumberInputMethod=_primaryAccountNumberInputMethod - In the implementation block
@property (assign,nonatomic) long long expirationInputMethod;                                                          //@synthesize expirationInputMethod=_expirationInputMethod - In the implementation block
@property (nonatomic,copy) NSString * issuerIdentifier;                                                                //@synthesize issuerIdentifier=_issuerIdentifier - In the implementation block
@property (nonatomic,copy) NSString * hostApplicationIdentifier;                                                       //@synthesize hostApplicationIdentifier=_hostApplicationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * hostApplicationVersion;                                                          //@synthesize hostApplicationVersion=_hostApplicationVersion - In the implementation block
@property (nonatomic,copy) NSData * FPInfo;                                                                            //@synthesize FPInfo=_FPInfo - In the implementation block
@property (nonatomic,copy) NSString * encryptionVersion;                                                               //@synthesize encryptionVersion=_encryptionVersion - In the implementation block
@property (nonatomic,copy) NSString * cardholderName;                                                                  //@synthesize cardholderName=_cardholderName - In the implementation block
@property (nonatomic,copy) NSString * primaryAccountNumber;                                                            //@synthesize primaryAccountNumber=_primaryAccountNumber - In the implementation block
@property (nonatomic,copy) NSString * expiration;                                                                      //@synthesize expiration=_expiration - In the implementation block
@property (nonatomic,copy) NSData * encryptedCardData;                                                                 //@synthesize encryptedCardData=_encryptedCardData - In the implementation block
@property (nonatomic,copy) NSData * publicKeyHash;                                                                     //@synthesize publicKeyHash=_publicKeyHash - In the implementation block
@property (nonatomic,copy) NSData * ephemeralPublicKey;                                                                //@synthesize ephemeralPublicKey=_ephemeralPublicKey - In the implementation block
@property (nonatomic,copy) NSData * wrappedKey;                                                                        //@synthesize wrappedKey=_wrappedKey - In the implementation block
@property (nonatomic,copy) NSString * nonce;                                                                           //@synthesize nonce=_nonce - In the implementation block
@property (nonatomic,readonly) long long source;                                                                       //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * referrerIdentifier;                                                              //@synthesize referrerIdentifier=_referrerIdentifier - In the implementation block
@property (nonatomic,readonly) PKAddPaymentPassRequestConfiguration * addPaymentPassRequestConfiguration;              //@synthesize addPaymentPassRequestConfiguration=_addPaymentPassRequestConfiguration - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithSource:(long long)arg1 ;
-(id)init;
-(void)setNonce:(NSString *)arg1 ;
-(NSData *)FPInfo;
-(void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 certChain:(id)arg4 devSigned:(BOOL)arg5 deviceData:(id)arg6 webService:(id)arg7 completion:(/*^block*/id)arg8 ;
-(void)setEphemeralPublicKey:(NSData *)arg1 ;
-(NSData *)publicKeyHash;
-(NSData *)ephemeralPublicKey;
-(void)setPublicKeyHash:(NSData *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(NSString *)productIdentifier;
-(void)setReferrerIdentifier:(NSString *)arg1 ;
-(NSString *)encryptionVersion;
-(void)setFPInfo:(NSData *)arg1 ;
-(NSString *)expiration;
-(NSString *)cardholderName;
-(void)setEncryptionVersion:(NSString *)arg1 ;
-(void)setIssuerIdentifier:(NSString *)arg1 ;
-(void)setCardholderName:(NSString *)arg1 ;
-(void)_updateRequestForRedirect:(id)arg1 overrides:(id)arg2 webService:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)_updateRequestForRetry:(id)arg1 retryFields:(id)arg2 webService:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)setExpiration:(NSString *)arg1 ;
-(NSString *)primaryAccountNumber;
-(NSString *)referrerIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)wrappedKey;
-(void)setWrappedKey:(NSData *)arg1 ;
-(NSString *)hostApplicationVersion;
-(id)initWithPaymentCredential:(id)arg1 ;
-(NSString *)nonce;
-(void)setHostApplicationIdentifier:(NSString *)arg1 ;
-(void)setHostApplicationVersion:(NSString *)arg1 ;
-(PKPaymentCredential *)paymentCredential;
-(NSString *)issuerIdentifier;
-(NSData *)encryptedCardData;
-(PKAddPaymentPassRequestConfiguration *)addPaymentPassRequestConfiguration;
-(BOOL)requiresNonce;
-(NSString *)hostApplicationIdentifier;
-(void)setPaymentCredential:(PKPaymentCredential *)arg1 ;
-(void)setPrimaryAccountNumber:(NSString *)arg1 ;
-(NSString *)passOwnershipToken;
-(void)setPassOwnershipToken:(NSString *)arg1 ;
-(void)setEncryptedCardData:(NSData *)arg1 ;
-(unsigned long long)_requestHTTPMethod;
-(id)initWithAddRequestConfiguration:(id)arg1 addRequest:(id)arg2 ;
-(long long)cardholderNameInputMethod;
-(long long)expirationInputMethod;
-(void)setCardholderNameInputMethod:(long long)arg1 ;
-(long long)primaryAccountNumberInputMethod;
-(void)setPrimaryAccountNumberInputMethod:(long long)arg1 ;
-(void)setExpirationInputMethod:(long long)arg1 ;
-(long long)source;
@end

