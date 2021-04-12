/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)capabilityBoolAnswer:(id)arg1 ;
-(void)setOverrides:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)overrides;
-(id)preferencesCapabilityAnswer:(id)arg1 ;
-(NSNumber *)overrideForAllBoolValues;
-(id)capabilityAnswer:(id)arg1 ;
-(id)supportsDisplayZoomCapability;
-(id)applicationDisplayIdentifiers;
-(id)supportsRaiseToWakeCapability;
-(id)supportsAutoWhiteBalanceCapability;
-(id)supportsNightShiftCapability;
-(id)supportsInStoreDemoModeCapability;
-(id)supportsInEDUModeCapability;
-(id)supportsPSTTYCapability;
-(id)supportsPSDeveloperSettingsCapability;
-(void)setOverrideValue:(id)arg1 forKey:(id)arg2 ;
-(void)setOverrideForAllBoolValues:(NSNumber *)arg1 ;
-(void)resetOverrides;
-(BOOL)hasCapabilities:(id)arg1 ;
@end

