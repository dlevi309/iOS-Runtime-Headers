/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


@class NSMutableDictionary, NSNumber;

@interface PSCapabilityManager : NSObject {

	NSMutableDictionary* _overrides;
	NSNumber* _overrideForAllBoolValues;

}

@property (nonatomic,retain) NSMutableDictionary * overrides;                  //@synthesize overrides=_overrides - In the implementation block
@property (nonatomic,retain) NSNumber * overrideForAllBoolValues;              //@synthesize overrideForAllBoolValues=_overrideForAllBoolValues - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)setOverrides:(NSMutableDictionary *)arg1 ;
-(id)supportsListeningExperienceCapbility;
-(BOOL)hasCapabilities:(id)arg1 ;
-(id)supportsPSExposureNotificationsCapability;
-(id)supportsNightShiftCapability;
-(id)supportsLightningAdapterCapability;
-(id)supportsPSTTYCapability;
-(BOOL)capabilityBoolAnswer:(id)arg1 ;
-(id)supportsInStoreDemoModeCapability;
-(id)supportsPSTrackpadAndMouseCapability;
-(id)supportsPictureInPictureCapability;
-(id)applicationDisplayIdentifiers;
-(id)capabilityAnswer:(id)arg1 ;
-(id)supportsDisplayZoomCapability;
-(NSNumber *)overrideForAllBoolValues;
-(id)supportsRaiseToWakeCapability;
-(id)supportsPSTrackpadOnlyCapability;
-(id)supportsWalletApplePayCapability;
-(id)supportsPSCellularDataPlanCapability;
-(void)setOverrideValue:(id)arg1 forKey:(id)arg2 ;
-(NSMutableDictionary *)overrides;
-(id)supportsAutoWhiteBalanceCapability;
-(id)supportsInEDUModeCapability;
-(id)supportsPSDeveloperSettingsCapability;
-(void)setOverrideForAllBoolValues:(NSNumber *)arg1 ;
-(id)supportsPSHomeScreenPhoneCapability;
-(void)resetOverrides;
-(id)supportsPSPencilCapability;
-(id)preferencesCapabilityAnswer:(id)arg1 ;
@end

