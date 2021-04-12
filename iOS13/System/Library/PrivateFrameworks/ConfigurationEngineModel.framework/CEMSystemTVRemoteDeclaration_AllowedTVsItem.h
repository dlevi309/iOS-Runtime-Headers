/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMSystemTVRemoteDeclaration_AllowedTVsItem : CEMPayloadBase {

	NSString* _payloadTVDeviceID;

}

@property (nonatomic,copy) NSString * payloadTVDeviceID;              //@synthesize payloadTVDeviceID=_payloadTVDeviceID - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithTVDeviceID:(id)arg1 ;
+(id)buildRequiredOnlyWithTVDeviceID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadTVDeviceID:(NSString *)arg1 ;
-(NSString *)payloadTVDeviceID;
@end

