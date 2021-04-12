/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSNumber;

@interface CEMNetworkVPNDeclaration_SecurityAssociationParameters : CEMPayloadBase {

	NSString* _payloadEncryptionAlgorithm;
	NSString* _payloadIntegrityAlgorithm;
	NSNumber* _payloadDiffieHellmanGroup;
	NSNumber* _payloadLifeTimeInMinutes;

}

@property (nonatomic,copy) NSString * payloadEncryptionAlgorithm;              //@synthesize payloadEncryptionAlgorithm=_payloadEncryptionAlgorithm - In the implementation block
@property (nonatomic,copy) NSString * payloadIntegrityAlgorithm;               //@synthesize payloadIntegrityAlgorithm=_payloadIntegrityAlgorithm - In the implementation block
@property (nonatomic,copy) NSNumber * payloadDiffieHellmanGroup;               //@synthesize payloadDiffieHellmanGroup=_payloadDiffieHellmanGroup - In the implementation block
@property (nonatomic,copy) NSNumber * payloadLifeTimeInMinutes;                //@synthesize payloadLifeTimeInMinutes=_payloadLifeTimeInMinutes - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithEncryptionAlgorithm:(id)arg1 withIntegrityAlgorithm:(id)arg2 withDiffieHellmanGroup:(id)arg3 withLifeTimeInMinutes:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadEncryptionAlgorithm:(NSString *)arg1 ;
-(void)setPayloadIntegrityAlgorithm:(NSString *)arg1 ;
-(void)setPayloadDiffieHellmanGroup:(NSNumber *)arg1 ;
-(void)setPayloadLifeTimeInMinutes:(NSNumber *)arg1 ;
-(NSString *)payloadEncryptionAlgorithm;
-(NSString *)payloadIntegrityAlgorithm;
-(NSNumber *)payloadDiffieHellmanGroup;
-(NSNumber *)payloadLifeTimeInMinutes;
@end

