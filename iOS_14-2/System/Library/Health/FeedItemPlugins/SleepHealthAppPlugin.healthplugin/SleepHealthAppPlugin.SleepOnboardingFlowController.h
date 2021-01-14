/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/SleepHealthAppPlugin.healthplugin/SleepHealthAppPlugin
*/

#import <OnBoardingKit/OBWelcomeController.h>
#import <libobjc.A.dylib/HKSPSleepStoreObserver.h>

@interface SleepHealthAppPlugin.SleepOnboardingFlowController : OBWelcomeController <HKSPSleepStoreObserver> {

	 userInfo;
	 delegate;

}
-(void)sleepStore:(id)arg1 sleepScheduleDidChange:(id)arg2 ;
-(void)sleepStore:(id)arg1 sleepSettingsDidChange:(id)arg2 ;
-(void)dealloc;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4 ;
@end

