/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMAccountCardDAVDeclaration_CommunicationServiceRulesDefaultServiceHandlers : CEMPayloadBase {

	NSString* _payloadAudioCall;

}

@property (nonatomic,copy) NSString * payloadAudioCall;              //@synthesize payloadAudioCall=_payloadAudioCall - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithAudioCall:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadAudioCall:(NSString *)arg1 ;
-(NSString *)payloadAudioCall;
@end

