/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMSystemAirPlayDestinationsDeclaration_WhitelistItem : CEMPayloadBase {

	NSString* _payloadDeviceID;

}

@property (nonatomic,copy) NSString * payloadDeviceID;              //@synthesize payloadDeviceID=_payloadDeviceID - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithDeviceID:(id)arg1 ;
+(id)buildRequiredOnlyWithDeviceID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadDeviceID:(NSString *)arg1 ;
-(NSString *)payloadDeviceID;
@end

