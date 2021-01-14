/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/


@class NSSet, NSDictionary;

@interface GCDeviceConfigurationEvaluator : NSObject {

	NSSet* _configurationsIN;
	NSDictionary* _deviceManagersIN;
	NSDictionary* _physicalDevicesIN;
	NSSet* _viableConfigurationsOUT;
	NSDictionary* _deviceOwnersOUT;

}

@property (nonatomic,copy) NSSet * configurationsIN;                         //@synthesize configurationsIN=_configurationsIN - In the implementation block
@property (nonatomic,copy) NSDictionary * deviceManagersIN;                  //@synthesize deviceManagersIN=_deviceManagersIN - In the implementation block
@property (nonatomic,copy) NSDictionary * physicalDevicesIN;                 //@synthesize physicalDevicesIN=_physicalDevicesIN - In the implementation block
@property (nonatomic,readonly) NSSet * viableConfigurationsOUT;              //@synthesize viableConfigurationsOUT=_viableConfigurationsOUT - In the implementation block
@property (nonatomic,readonly) NSDictionary * deviceOwnersOUT;               //@synthesize deviceOwnersOUT=_deviceOwnersOUT - In the implementation block
-(void)evaluate;
-(void)setConfigurationsIN:(NSSet *)arg1 ;
-(void)setDeviceManagersIN:(NSDictionary *)arg1 ;
-(void)setPhysicalDevicesIN:(NSDictionary *)arg1 ;
-(NSSet *)viableConfigurationsOUT;
-(NSSet *)configurationsIN;
-(NSDictionary *)physicalDevicesIN;
-(NSDictionary *)deviceManagersIN;
-(unsigned long long)viableConfigurations:(id*)arg1 deviceOwners:(id*)arg2 ;
-(NSDictionary *)deviceOwnersOUT;
@end

