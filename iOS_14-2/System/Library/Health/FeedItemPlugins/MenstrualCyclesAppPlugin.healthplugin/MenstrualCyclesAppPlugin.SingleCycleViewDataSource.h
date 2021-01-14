/*
* Generated on Thursday, January 14, 2021 at 2:29:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
*/

#import <UIKit/UICollectionViewDataSource.h>

@interface MenstrualCyclesAppPlugin.SingleCycleViewDataSource : NSObject <UICollectionViewDataSource> {

	 dataFetchingState;
	 cycle;
	 cycleViewModelProvider;
	 today;

}
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)init;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
@end

