/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAddSecureElementPassConfiguration.h>

@class NSArray, NSString;

@interface PKAddShareablePassConfiguration : PKAddSecureElementPassConfiguration {

	BOOL _noncesFetched;
	unsigned long long _primaryAction;
	NSArray* _credentialsMetadata;
	NSString* _provisioningPolicyIdentifier;

}

@property (assign,nonatomic) BOOL noncesFetched;                                     //@synthesize noncesFetched=_noncesFetched - In the implementation block
@property (nonatomic,readonly) unsigned long long primaryAction;                     //@synthesize primaryAction=_primaryAction - In the implementation block
@property (nonatomic,readonly) NSArray * credentialsMetadata;                        //@synthesize credentialsMetadata=_credentialsMetadata - In the implementation block
@property (nonatomic,readonly) NSString * provisioningPolicyIdentifier;              //@synthesize provisioningPolicyIdentifier=_provisioningPolicyIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)configurationForPassMetadata:(id)arg1 provisioningPolicyIdentifier:(id)arg2 primaryAction:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)noncesFetched;
-(id)description;
-(id)initWithPrimaryAction:(unsigned long long)arg1 credentialsMetadata:(id)arg2 provisioningPolicyIdentifier:(id)arg3 ;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(id)_PKAddShareablePassConfigurationPrimaryActionToString:(unsigned long long)arg1 ;
-(NSArray *)credentialsMetadata;
-(BOOL)hasRequiredDataForProvisioning;
-(NSString *)provisioningPolicyIdentifier;
-(void)setNoncesFetched:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)primaryAction;
@end

