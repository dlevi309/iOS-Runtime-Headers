/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMAccountGoogleDeclaration_CommunicationServiceRulesDefaultServiceHandlers;

@interface CEMAccountGoogleDeclaration_CommunicationServiceRules : CEMPayloadBase {

	CEMAccountGoogleDeclaration_CommunicationServiceRulesDefaultServiceHandlers* _payloadDefaultServiceHandlers;

}

@property (nonatomic,copy) CEMAccountGoogleDeclaration_CommunicationServiceRulesDefaultServiceHandlers * payloadDefaultServiceHandlers;              //@synthesize payloadDefaultServiceHandlers=_payloadDefaultServiceHandlers - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithDefaultServiceHandlers:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadDefaultServiceHandlers:(CEMAccountGoogleDeclaration_CommunicationServiceRulesDefaultServiceHandlers *)arg1 ;
-(CEMAccountGoogleDeclaration_CommunicationServiceRulesDefaultServiceHandlers *)payloadDefaultServiceHandlers;
@end

