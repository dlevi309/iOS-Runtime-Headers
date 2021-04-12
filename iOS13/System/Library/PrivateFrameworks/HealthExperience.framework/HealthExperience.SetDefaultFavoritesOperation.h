/*
* Generated on Monday, March 1, 2021 at 2:34:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience
*/

#import <HealthExperience/HealthExperience.AsynchronousOperation.h>
#import <HealthExperience/HealthExperience.FavoritesProviderObserver.h>

@interface HealthExperience.SetDefaultFavoritesOperation : HealthExperience.AsynchronousOperation <HealthExperience.FavoritesProviderObserver> {

	 favoritesProvider;
	 healthStore;
	 precondition;
	 timeout;
	 $__lazy_storage_$_defaultFavoritablesProvider;
	 timeoutWork;

}
-(void)favoritesProviderIsReady:(id)arg1 ;
-(void)favoritesProviderDidUpdate:(id)arg1 ;
-(void)favoritesProviderDidUpdate:(id)arg1 specificType:(id)arg2 isFavorited:(BOOL)arg3 ;
-(id)init;
-(void)main;
@end

