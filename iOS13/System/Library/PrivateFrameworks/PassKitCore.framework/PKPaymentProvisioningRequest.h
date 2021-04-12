/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSNumber, NSArray, PKPaymentDeviceProvisioningData, PKPaymentEligibilityResponse, NSString, NSData, PKDSPContext;

@interface PKPaymentProvisioningRequest : PKPaymentWebServiceRequest {

	NSNumber* _primaryJSBLSequenceCounter;
	NSArray* _certChain;
	BOOL _devSigned;
	PKPaymentDeviceProvisioningData* _deviceData;
	long long _style;
	PKPaymentEligibilityResponse* _eligibilityResponse;
	NSString* _nonce;
	NSString* _cardholderName;
	NSString* _cardSecurityCode;
	NSData* _activationData;
	PKDSPContext* _context;
	NSData* _cryptogram;
	NSData* _challengeResponse;
	NSString* _referrerIdentifier;

}

@property (assign,nonatomic) long long style;                                                 //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) PKPaymentEligibilityResponse * eligibilityResponse;              //@synthesize eligibilityResponse=_eligibilityResponse - In the implementation block
@property (nonatomic,copy) NSString * nonce;                                                  //@synthesize nonce=_nonce - In the implementation block
@property (nonatomic,copy) NSString * cardholderName;                                         //@synthesize cardholderName=_cardholderName - In the implementation block
@property (nonatomic,copy) NSString * cardSecurityCode;                                       //@synthesize cardSecurityCode=_cardSecurityCode - In the implementation block
@property (nonatomic,copy) NSData * activationData;                                           //@synthesize activationData=_activationData - In the implementation block
@property (nonatomic,copy) PKDSPContext * context;                                            //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSData * cryptogram;                                               //@synthesize cryptogram=_cryptogram - In the implementation block
@property (nonatomic,copy) NSData * challengeResponse;                                        //@synthesize challengeResponse=_challengeResponse - In the implementation block
@property (nonatomic,copy) NSString * referrerIdentifier;                                     //@synthesize referrerIdentifier=_referrerIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKDSPContext *)context;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)setContext:(PKDSPContext *)arg1 ;
-(NSString *)nonce;
-(void)setNonce:(NSString *)arg1 ;
-(void)setReferrerIdentifier:(NSString *)arg1 ;
-(NSString *)cardSecurityCode;
-(NSString *)cardholderName;
-(NSString *)referrerIdentifier;
-(void)_updateRequestForRedirect:(id)arg1 overrides:(id)arg2 webService:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)_updateRequestForRetry:(id)arg1 retryFields:(id)arg2 webService:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(id)initWithEligibilityResponse:(id)arg1 ;
-(void)setCardholderName:(NSString *)arg1 ;
-(void)setChallengeResponse:(NSData *)arg1 ;
-(PKPaymentEligibilityResponse *)eligibilityResponse;
-(void)setEligibilityResponse:(PKPaymentEligibilityResponse *)arg1 ;
-(void)setCardSecurityCode:(NSString *)arg1 ;
-(NSData *)activationData;
-(void)setActivationData:(NSData *)arg1 ;
-(void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 certChain:(id)arg4 devSigned:(BOOL)arg5 deviceData:(id)arg6 webService:(id)arg7 completion:(/*^block*/id)arg8 ;
-(void)_requestBodyWithWebService:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCryptogram:(NSData *)arg1 ;
-(void)_deviceScoreWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateContextUsingWebService:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSData *)cryptogram;
-(NSData *)challengeResponse;
@end

