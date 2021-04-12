/*
* Generated on Monday, March 1, 2021 at 2:35:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/FeedItemPlugins/AppRecommendations.healthplugin/AppRecommendations
*/

#import <HealthExperience/HealthExperience.ComposableAsyncOperation.h>

@interface AppRecommendations.AppRecommendationsFeedItemGenerator : HealthExperience.ComposableAsyncOperation {

	 context;
	 storeDataProvider;
	 managedProfileConnection;
	 isEnqueued;
	 minimumDaysBetweenRuns;
	 isUnitTest;

}
-(id)init;
-(void)cancel;
-(void)main;
-(void)assetDataIsNowAvailable:(id)arg1 ;
@end

