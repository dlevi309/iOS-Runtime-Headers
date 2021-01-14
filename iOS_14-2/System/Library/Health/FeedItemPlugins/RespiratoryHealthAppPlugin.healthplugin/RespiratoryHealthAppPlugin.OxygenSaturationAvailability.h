/*
* Generated on Thursday, January 14, 2021 at 2:29:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/RespiratoryHealthAppPlugin.healthplugin/RespiratoryHealthAppPlugin
*/

#import <libobjc.A.dylib/HKRPOxygenSaturationSettingsObserver.h>

@interface RespiratoryHealthAppPlugin.OxygenSaturationAvailability : NSObject <HKRPOxygenSaturationSettingsObserver> {

	 healthStore;
	 manager;
	 settings;
	 oxygenSaturationFeatureStatusPublisher;
	 oxygenSaturationPromotionVisibilityPublisher;
	 oxygenSaturationPromotionVisibility;
	 onboardingCompletedKey;
	 respiratoryUserDefaults;
	 ageGatingUserDefaults;
	 ageGatingKey;

}
-(void)oxygenSaturationSettingsDidChange:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(void)pairedDevicesDidUpdate;
-(void)dealloc;
@end

