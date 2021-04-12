/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
*/

#import <UIKit/UITableViewDataSourcePrefetching.h>
#import <UIKit/UICollectionViewDataSourcePrefetching.h>

@interface HealthExperienceUI.InteractiveFeedItemGeneratorManager : NSObject <UITableViewDataSourcePrefetching, UICollectionViewDataSourcePrefetching> {

	 availablePlugins;
	 storageContext;
	 healthStore;
	 favoritesProvider;
	 dataSource;
	??? dateRange;
	 eventHandler;
	 $__lazy_storage_$_identifier;
	 runningPrefetchOperations;

}
-(void)tableView:(id)arg1 prefetchRowsAtIndexPaths:(id)arg2 ;
-(void)tableView:(id)arg1 cancelPrefetchingForRowsAtIndexPaths:(id)arg2 ;
-(void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2 ;
-(void)collectionView:(id)arg1 cancelPrefetchingForItemsAtIndexPaths:(id)arg2 ;
-(id)init;
@end

