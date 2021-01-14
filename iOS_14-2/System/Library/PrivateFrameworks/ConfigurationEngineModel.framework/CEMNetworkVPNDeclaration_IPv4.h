/*
* Generated on Thursday, January 14, 2021 at 2:24:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber;

@interface CEMNetworkVPNDeclaration_IPv4 : CEMPayloadBase {

	NSNumber* _payloadOverridePrimary;

}

@property (nonatomic,copy) NSNumber * payloadOverridePrimary;              //@synthesize payloadOverridePrimary=_payloadOverridePrimary - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithOverridePrimary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadOverridePrimary:(NSNumber *)arg1 ;
-(NSNumber *)payloadOverridePrimary;
@end

