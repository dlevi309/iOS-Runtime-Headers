/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience
*/

#import <HealthExperience/HealthExperience.AsynchronousOperation.h>
#import <HealthExperience/HealthPlatform.FavoritesProviderObserver.h>

@interface HealthExperience.SetDefaultFavoritesOperation : HealthExperience.AsynchronousOperation <HealthPlatform.FavoritesProviderObserver> {

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

