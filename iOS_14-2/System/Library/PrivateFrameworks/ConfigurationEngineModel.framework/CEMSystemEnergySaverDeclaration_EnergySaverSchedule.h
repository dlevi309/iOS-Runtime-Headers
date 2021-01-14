/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMSystemEnergySaverDeclaration_RepeatingPowerItem;

@interface CEMSystemEnergySaverDeclaration_EnergySaverSchedule : CEMPayloadBase {

	CEMSystemEnergySaverDeclaration_RepeatingPowerItem* _payloadRepeatingPowerOn;
	CEMSystemEnergySaverDeclaration_RepeatingPowerItem* _payloadRepeatingPowerOff;

}

@property (nonatomic,copy) CEMSystemEnergySaverDeclaration_RepeatingPowerItem * payloadRepeatingPowerOn;               //@synthesize payloadRepeatingPowerOn=_payloadRepeatingPowerOn - In the implementation block
@property (nonatomic,copy) CEMSystemEnergySaverDeclaration_RepeatingPowerItem * payloadRepeatingPowerOff;              //@synthesize payloadRepeatingPowerOff=_payloadRepeatingPowerOff - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithRepeatingPowerOn:(id)arg1 withRepeatingPowerOff:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadRepeatingPowerOn:(CEMSystemEnergySaverDeclaration_RepeatingPowerItem *)arg1 ;
-(void)setPayloadRepeatingPowerOff:(CEMSystemEnergySaverDeclaration_RepeatingPowerItem *)arg1 ;
-(CEMSystemEnergySaverDeclaration_RepeatingPowerItem *)payloadRepeatingPowerOn;
-(CEMSystemEnergySaverDeclaration_RepeatingPowerItem *)payloadRepeatingPowerOff;
@end

