/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@protocol OS_os_log;
@class CLSSimilarStacker, PLKMeansClustering, NSObject;

@interface PGDejunkerDeduper : NSObject {

	CLSSimilarStacker* _similarStacker;
	PLKMeansClustering* _kMeanTimeClusterer;
	NSObject*<OS_os_log> _loggingConnection;

}

@property (nonatomic,retain) NSObject*<OS_os_log> loggingConnection;              //@synthesize loggingConnection=_loggingConnection - In the implementation block
-(NSObject*<OS_os_log>)loggingConnection;
-(id)init;
-(void)setLoggingConnection:(NSObject*<OS_os_log>)arg1 ;
-(id)dejunkedDedupedItemsInItems:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(/*^block*/id)arg4 ;
-(id)identicallyDedupedItemsInItems:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(/*^block*/id)arg4 ;
-(id)semanticallyDedupedItemsInItems:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(/*^block*/id)arg4 ;
-(id)dejunkedItemsWithItems:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(/*^block*/id)arg4 ;
-(id)finalItemsWithItems:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(/*^block*/id)arg4 ;
-(BOOL)shouldPerformIdenticalDedupingForItemFeature:(id)arg1 options:(id)arg2 ;
-(double)identicalDedupingTimeIntervalForItemFeature:(id)arg1 options:(id)arg2 ;
-(double)identicalDedupingSimilarityForItemFeature:(id)arg1 options:(id)arg2 ;
-(BOOL)shouldPerformSemanticalDedupingForItemFeature:(id)arg1 options:(id)arg2 ;
-(double)semanticalDedupingTimeIntervalForItemFeature:(id)arg1 options:(id)arg2 ;
-(double)semanticalDedupingSimilarityForItemFeature:(id)arg1 options:(id)arg2 ;
-(id)timeGroupsOfTimeSortedItemsWithTimeSortedItems:(id)arg1 timeInterval:(double)arg2 maximumTimeGroupExtension:(double)arg3 ;
-(id)splitItemGroupsWithTimeSortedItems:(id)arg1 numberOfBuckets:(unsigned long long)arg2 ;
-(id)splitItemGroupsWithItemGroups:(id)arg1 maximumNumberOfItemsPerGroup:(unsigned long long)arg2 debugInfo:(id)arg3 ;
-(id)bestItemGroupsBasedOnFaceprintsWithItemGroups:(id)arg1 options:(id)arg2 ;
-(id)bestItemGroupsBasedOnSceneprintsWithItemGroups:(id)arg1 options:(id)arg2 ;
-(id)timeSortedItemsWithItems:(id)arg1 ;
-(id)itemsByFeatureWithItems:(id)arg1 ;
-(id)bestItemsInItems:(id)arg1 options:(id)arg2 ;
-(BOOL)isJunkForItem:(id)arg1 ;
-(id)debugPersonStringForItem:(id)arg1 ;
-(id)faceprintByPersonLocalIdentifierByItemIdentifierWithItems:(id)arg1 ;
-(id)featureWithItem:(id)arg1 ;
-(id)itemsSortedByScoreWithItems:(id)arg1 options:(id)arg2 ;
-(id)requiredItemsInItems:(id)arg1 options:(id)arg2 containStronglyRequiredItems:(BOOL*)arg3 ;
@end

