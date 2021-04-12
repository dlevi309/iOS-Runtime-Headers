/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSDictionary;

@interface CEMAnyPayload : CEMPayloadBase {

	NSDictionary* _payloadKeys;

}

@property (copy) NSDictionary * payloadKeys;              //@synthesize payloadKeys=_payloadKeys - In the implementation block
+(id)buildFromDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(id)serializePayload;
-(NSDictionary *)payloadKeys;
-(void)setPayloadKeys:(NSDictionary *)arg1 ;
@end

