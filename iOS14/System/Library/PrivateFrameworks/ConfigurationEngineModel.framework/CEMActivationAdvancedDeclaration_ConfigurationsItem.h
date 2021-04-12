/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, CEMAnyPayload;

@interface CEMActivationAdvancedDeclaration_ConfigurationsItem : CEMPayloadBase {

	NSString* _payloadIdentifier;
	CEMAnyPayload* _payloadOverrides;

}

@property (nonatomic,copy) NSString * payloadIdentifier;                  //@synthesize payloadIdentifier=_payloadIdentifier - In the implementation block
@property (nonatomic,copy) CEMAnyPayload * payloadOverrides;              //@synthesize payloadOverrides=_payloadOverrides - In the implementation block
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)allowedPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withOverrides:(id)arg2 ;
-(NSString *)payloadIdentifier;
-(void)setPayloadIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadOverrides:(CEMAnyPayload *)arg1 ;
-(CEMAnyPayload *)payloadOverrides;
@end

