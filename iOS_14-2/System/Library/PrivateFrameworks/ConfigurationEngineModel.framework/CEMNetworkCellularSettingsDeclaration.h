/*
* Generated on Thursday, January 14, 2021 at 2:24:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSNumber, NSString;

@interface CEMNetworkCellularSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadAllowDataRoaming;
	NSNumber* _payloadAllowVoiceRoaming;
	NSNumber* _payloadAllowPersonalHotspot;
	NSNumber* _payloadAllowGlobalBackgroundFetchWhenRoaming;
	NSNumber* _payloadAllowCellularPlanModification;
	NSNumber* _payloadAllowAppCellularDataModification;

}

@property (nonatomic,copy) NSNumber * payloadAllowDataRoaming;                                   //@synthesize payloadAllowDataRoaming=_payloadAllowDataRoaming - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowVoiceRoaming;                                  //@synthesize payloadAllowVoiceRoaming=_payloadAllowVoiceRoaming - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowPersonalHotspot;                               //@synthesize payloadAllowPersonalHotspot=_payloadAllowPersonalHotspot - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowGlobalBackgroundFetchWhenRoaming;              //@synthesize payloadAllowGlobalBackgroundFetchWhenRoaming=_payloadAllowGlobalBackgroundFetchWhenRoaming - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowCellularPlanModification;                      //@synthesize payloadAllowCellularPlanModification=_payloadAllowCellularPlanModification - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowAppCellularDataModification;                   //@synthesize payloadAllowAppCellularDataModification=_payloadAllowAppCellularDataModification - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)profileType;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withAllowDataRoaming:(id)arg2 withAllowVoiceRoaming:(id)arg3 withAllowPersonalHotspot:(id)arg4 withAllowGlobalBackgroundFetchWhenRoaming:(id)arg5 withAllowCellularPlanModification:(id)arg6 withAllowAppCellularDataModification:(id)arg7 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadAllowDataRoaming:(NSNumber *)arg1 ;
-(void)setPayloadAllowVoiceRoaming:(NSNumber *)arg1 ;
-(void)setPayloadAllowPersonalHotspot:(NSNumber *)arg1 ;
-(void)setPayloadAllowGlobalBackgroundFetchWhenRoaming:(NSNumber *)arg1 ;
-(void)setPayloadAllowCellularPlanModification:(NSNumber *)arg1 ;
-(void)setPayloadAllowAppCellularDataModification:(NSNumber *)arg1 ;
-(NSNumber *)payloadAllowDataRoaming;
-(NSNumber *)payloadAllowVoiceRoaming;
-(NSNumber *)payloadAllowPersonalHotspot;
-(NSNumber *)payloadAllowGlobalBackgroundFetchWhenRoaming;
-(NSNumber *)payloadAllowCellularPlanModification;
-(NSNumber *)payloadAllowAppCellularDataModification;
@end

