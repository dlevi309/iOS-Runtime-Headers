/*
* Generated on Monday, March 1, 2021 at 2:35:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
*/

#import <HealthExperience/HealthExperience.AsyncOperation.h>
#import <libobjc.A.dylib/HKMCAnalysisProviderObserver.h>

@interface MenstrualCyclesAppPlugin.MenstrualCyclesOnboardingFeedItemGenerator : HealthExperience.AsyncOperation <HKMCAnalysisProviderObserver> {

	 context;
	 onboardingAvailability;
	 menstrualCyclesAvailabilityProvider;
	 analysisProvider;

}
-(void)analysisProvider:(id)arg1 didUpdateAnalysis:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)cancel;
-(void)main;
@end

