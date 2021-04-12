/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString;

@interface PKExpressPassInformation : NSObject <NSSecureCoding> {

	NSDictionary* _configuration;
	BOOL _forceModernEncoding;
	long long _cardType;
	NSString* _passUniqueIdentifier;
	NSDictionary* _subcredentialCredentialIdentifiers;
	NSDictionary* _subcredentialEndpointIdentifiers;
	NSString* _paymentApplicationIdentifier;
	NSString* _expressMode;
	long long _expressPassType;

}

@property (nonatomic,readonly) long long cardType;                                             //@synthesize cardType=_cardType - In the implementation block
@property (nonatomic,readonly) NSString * passUniqueIdentifier;                                //@synthesize passUniqueIdentifier=_passUniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * subcredentialCredentialIdentifiers;              //@synthesize subcredentialCredentialIdentifiers=_subcredentialCredentialIdentifiers - In the implementation block
@property (nonatomic,readonly) NSDictionary * subcredentialEndpointIdentifiers;                //@synthesize subcredentialEndpointIdentifiers=_subcredentialEndpointIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL forceModernEncoding;                                         //@synthesize forceModernEncoding=_forceModernEncoding - In the implementation block
@property (nonatomic,readonly) NSString * paymentApplicationIdentifier;                        //@synthesize paymentApplicationIdentifier=_paymentApplicationIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * expressMode;                                         //@synthesize expressMode=_expressMode - In the implementation block
@property (nonatomic,readonly) long long expressPassType;                                      //@synthesize expressPassType=_expressPassType - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)expressMode;
-(id)init;
-(id)initForExpressMode:(id)arg1 withPassUniqueIdentifier:(id)arg2 paymentApplicationIdentifier:(id)arg3 ;
-(void)setForceModernEncoding:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)cardType;
-(id)description;
-(void)_createLegacyPropertiesIfNecessary;
-(id)_initForPaymentPass:(id)arg1 configuration:(id)arg2 subcredentialCredentialIdentifiers:(id)arg3 ;
-(void)_createModernPropertiesIfNecessary;
-(void)enumerateCriteriaWithHandler:(/*^block*/id)arg1 ;
-(NSDictionary *)subcredentialCredentialIdentifiers;
-(long long)expressPassType;
-(NSDictionary *)subcredentialEndpointIdentifiers;
-(BOOL)forceModernEncoding;
-(id)paymentApplicationIdentifiers;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)paymentApplicationIdentifier;
-(NSString *)passUniqueIdentifier;
-(id)criteriaForPaymentApplicationIdentifier:(id)arg1 ;
-(id)initForPaymentPass:(id)arg1 withTechologyTest:(/*^block*/id)arg2 ;
-(id)initDummyExpressInfoForAutomaticSelectionCriteriaUpgradeRequest:(id)arg1 paymentPass:(id)arg2 withTechologyTest:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
@end

