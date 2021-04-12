/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSString, NSURL;

@interface PKPaymentEligibilityResponse : PKPaymentWebServiceResponse {

	NSString* _identifier;
	long long _eligibilityStatus;
	long long _cardType;
	NSURL* _termsURL;
	NSString* _termsID;
	NSString* _applicationIdentifier;
	NSString* _region;
	NSString* _nonce;
	NSURL* _learnMoreURL;

}

@property (nonatomic,copy,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long eligibilityStatus;                        //@synthesize eligibilityStatus=_eligibilityStatus - In the implementation block
@property (nonatomic,readonly) long long cardType;                                 //@synthesize cardType=_cardType - In the implementation block
@property (nonatomic,copy,readonly) NSURL * termsURL;                              //@synthesize termsURL=_termsURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * termsID;                            //@synthesize termsID=_termsID - In the implementation block
@property (nonatomic,copy,readonly) NSString * applicationIdentifier;              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * region;                             //@synthesize region=_region - In the implementation block
@property (nonatomic,copy,readonly) NSString * nonce;                              //@synthesize nonce=_nonce - In the implementation block
@property (nonatomic,copy,readonly) NSURL * learnMoreURL;                          //@synthesize learnMoreURL=_learnMoreURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithData:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)applicationIdentifier;
-(NSString *)region;
-(NSString *)nonce;
-(long long)eligibilityStatus;
-(long long)cardType;
-(NSURL *)termsURL;
-(NSString *)termsID;
-(NSURL *)learnMoreURL;
@end

