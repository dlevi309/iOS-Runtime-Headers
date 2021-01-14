/*
* Generated on Thursday, January 14, 2021 at 2:29:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/Heart.healthplugin/Heart
*/

#import <libobjc.A.dylib/HKHeartRhythmAvailabilityObserver.h>

@interface Heart.HeartFeatureStatusAvailability : NSObject <HKHeartRhythmAvailabilityObserver> {

	 ageGatingKeys;
	 privacyKeys;
	 bradycardiaKeys;
	 tachycardiaKeys;
	 atrialFibrillationKeys;
	 electrocardiogramKeys;
	 ageGatingDefaults;
	 privacyDefaults;
	 heartRateDefaults;
	 healthStore;
	 heartRhythmAvailability;
	 ageGatingKeyPaths;
	 privacyKeyPaths;
	 heartRateKeyPaths;

}
-(void)heartRhythmAvailabilityDidUpdate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(void)pairedDevicesDidUpdate;
-(void)dealloc;
@end

