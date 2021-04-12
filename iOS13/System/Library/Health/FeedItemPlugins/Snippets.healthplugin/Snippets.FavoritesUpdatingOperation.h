/*
* Generated on Monday, March 1, 2021 at 2:35:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/FeedItemPlugins/Snippets.healthplugin/Snippets
*/

#import <HealthExperience/HealthExperience.AsynchronousOperation.h>
#import <libobjc.A.dylib/HealthExperience.FavoritesProviderObserver.h>

@interface Snippets.FavoritesUpdatingOperation : HealthExperience.AsynchronousOperation <HealthExperience.FavoritesProviderObserver> {

	 favoritesProvider;
	 feedItemsResult;
	 dispatchGroup;
	 performUpdatesAndFinish;

}
-(void)favoritesProviderIsReady:(id)arg1 ;
-(void)favoritesProviderDidUpdate:(id)arg1 ;
-(void)favoritesProviderDidUpdate:(id)arg1 specificType:(id)arg2 isFavorited:(BOOL)arg3 ;
-(id)init;
-(void)main;
@end

