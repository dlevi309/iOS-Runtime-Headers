/*
* Generated on Monday, March 1, 2021 at 2:35:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/FeedItemPlugins/MedicalID.healthplugin/MedicalID
*/

#import <HealthExperience/HealthExperience.AsyncOperation.h>

@interface MedicalID.MedicalIDFeedItemGenerator : HealthExperience.AsyncOperation {

	 context;
	 medicalIDCache;
	??? dateComponentsUntilRefresh;
	 availabilityProvider;
	 cancellationLock;

}
-(id)init;
-(void)cancel;
-(void)main;
-(void)medicalIDWasUpdated;
@end

