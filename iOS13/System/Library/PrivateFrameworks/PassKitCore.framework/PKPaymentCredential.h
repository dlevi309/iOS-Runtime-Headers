/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PKPaymentRequirementsResponse, PKPaymentEligibilityResponse;

@interface PKPaymentCredential : NSObject <NSSecureCoding> {

	long long _credentialType;
	NSString* _sanitizedPrimaryAccountNumber;
	NSString* _expiration;
	NSString* _longDescription;
	long long _cardType;
	PKPaymentRequirementsResponse* _requirementsResponse;
	PKPaymentEligibilityResponse* _eligibilityResponse;

}

@property (assign,nonatomic) long long credentialType;                                          //@synthesize credentialType=_credentialType - In the implementation block
@property (nonatomic,copy) NSString * sanitizedPrimaryAccountNumber;                            //@synthesize sanitizedPrimaryAccountNumber=_sanitizedPrimaryAccountNumber - In the implementation block
@property (nonatomic,copy) NSString * expiration;                                               //@synthesize expiration=_expiration - In the implementation block
@property (nonatomic,copy) NSString * longDescription;                                          //@synthesize longDescription=_longDescription - In the implementation block
@property (assign,nonatomic) long long cardType;                                                //@synthesize cardType=_cardType - In the implementation block
@property (nonatomic,retain) PKPaymentRequirementsResponse * requirementsResponse;              //@synthesize requirementsResponse=_requirementsResponse - In the implementation block
@property (nonatomic,retain) PKPaymentEligibilityResponse * eligibilityResponse;                //@synthesize eligibilityResponse=_eligibilityResponse - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)fakeRemoteCredentials;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)credentialType;
-(void)setCredentialType:(long long)arg1 ;
-(NSString *)longDescription;
-(NSString *)expiration;
-(void)setLongDescription:(NSString *)arg1 ;
-(long long)cardType;
-(void)setCardType:(long long)arg1 ;
-(void)setExpiration:(NSString *)arg1 ;
-(id)remoteCredential;
-(void)setSanitizedPrimaryAccountNumber:(NSString *)arg1 ;
-(NSString *)sanitizedPrimaryAccountNumber;
-(PKPaymentRequirementsResponse *)requirementsResponse;
-(void)setRequirementsResponse:(PKPaymentRequirementsResponse *)arg1 ;
-(PKPaymentEligibilityResponse *)eligibilityResponse;
-(void)setEligibilityResponse:(PKPaymentEligibilityResponse *)arg1 ;
-(BOOL)isRemoteCredential;
-(BOOL)isLocalPassCredential;
-(BOOL)isPeerPaymentCredential;
-(BOOL)isContactlessProductCredential;
-(BOOL)isDigitalIssuanceProductCredential;
-(BOOL)isPurchasedProductCredential;
-(BOOL)isAccountCredential;
-(BOOL)isLocalAppletSubcredentialPassCredential;
-(id)localPassCredential;
-(id)peerPaymentCredential;
-(id)contactlessProductCredential;
-(id)digitalIssuanceProductCredential;
-(id)purchasedProductCredential;
-(id)accountCredential;
-(id)localAppletSubcredentialPassCredential;
@end

