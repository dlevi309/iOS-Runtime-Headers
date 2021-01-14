/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PKPaymentRequirementsResponse, PKPaymentEligibilityResponse;

@interface PKPaymentCredential : NSObject <NSSecureCoding> {

	BOOL _deletable;
	long long _credentialType;
	NSString* _sanitizedPrimaryAccountNumber;
	NSString* _sanitizedPrimaryAccountName;
	NSString* _expiration;
	NSString* _longDescription;
	long long _cardType;
	PKPaymentRequirementsResponse* _requirementsResponse;
	PKPaymentEligibilityResponse* _eligibilityResponse;

}

@property (assign,nonatomic) long long credentialType;                                          //@synthesize credentialType=_credentialType - In the implementation block
@property (nonatomic,copy) NSString * sanitizedPrimaryAccountNumber;                            //@synthesize sanitizedPrimaryAccountNumber=_sanitizedPrimaryAccountNumber - In the implementation block
@property (nonatomic,copy) NSString * sanitizedPrimaryAccountName;                              //@synthesize sanitizedPrimaryAccountName=_sanitizedPrimaryAccountName - In the implementation block
@property (nonatomic,copy) NSString * expiration;                                               //@synthesize expiration=_expiration - In the implementation block
@property (nonatomic,copy) NSString * longDescription;                                          //@synthesize longDescription=_longDescription - In the implementation block
@property (assign,nonatomic) long long cardType;                                                //@synthesize cardType=_cardType - In the implementation block
@property (nonatomic,retain) PKPaymentRequirementsResponse * requirementsResponse;              //@synthesize requirementsResponse=_requirementsResponse - In the implementation block
@property (nonatomic,retain) PKPaymentEligibilityResponse * eligibilityResponse;                //@synthesize eligibilityResponse=_eligibilityResponse - In the implementation block
@property (assign,getter=isDeletable,nonatomic) BOOL deletable;                                 //@synthesize deletable=_deletable - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)fakeRemoteCredentials;
-(id)init;
-(PKPaymentEligibilityResponse *)eligibilityResponse;
-(PKPaymentRequirementsResponse *)requirementsResponse;
-(void)setRequirementsResponse:(PKPaymentRequirementsResponse *)arg1 ;
-(void)setEligibilityResponse:(PKPaymentEligibilityResponse *)arg1 ;
-(void)setDeletable:(BOOL)arg1 ;
-(BOOL)isRemoteCredential;
-(BOOL)isLocalPassCredential;
-(BOOL)isPeerPaymentCredential;
-(BOOL)isContactlessProductCredential;
-(BOOL)isDigitalIssuanceProductCredential;
-(BOOL)isPurchasedProductCredential;
-(BOOL)isAccountCredential;
-(BOOL)isShareableCredential;
-(BOOL)isLocalAppletSubcredentialPassCredential;
-(BOOL)isIssuerProvisioningExtensionCredential;
-(id)localPassCredential;
-(id)peerPaymentCredential;
-(id)contactlessProductCredential;
-(id)digitalIssuanceProductCredential;
-(id)purchasedProductCredential;
-(id)accountCredential;
-(id)shareableCredential;
-(id)localAppletSubcredentialPassCredential;
-(id)issuerProvisioningExtensionCredential;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCredentialType:(long long)arg1 ;
-(void)setLongDescription:(NSString *)arg1 ;
-(NSString *)longDescription;
-(long long)cardType;
-(NSString *)expiration;
-(void)setExpiration:(NSString *)arg1 ;
-(void)setSanitizedPrimaryAccountNumber:(NSString *)arg1 ;
-(void)setSanitizedPrimaryAccountName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)remoteCredential;
-(long long)credentialType;
-(void)setCardType:(long long)arg1 ;
-(BOOL)isDeletable;
-(NSString *)sanitizedPrimaryAccountName;
-(NSString *)sanitizedPrimaryAccountNumber;
@end

