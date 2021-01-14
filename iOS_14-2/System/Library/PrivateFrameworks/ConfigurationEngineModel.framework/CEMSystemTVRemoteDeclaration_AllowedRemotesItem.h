/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMSystemTVRemoteDeclaration_AllowedRemotesItem : CEMPayloadBase {

	NSString* _payloadRemoteDeviceID;

}

@property (nonatomic,copy) NSString * payloadRemoteDeviceID;              //@synthesize payloadRemoteDeviceID=_payloadRemoteDeviceID - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithRemoteDeviceID:(id)arg1 ;
+(id)buildRequiredOnlyWithRemoteDeviceID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadRemoteDeviceID:(NSString *)arg1 ;
-(NSString *)payloadRemoteDeviceID;
@end

