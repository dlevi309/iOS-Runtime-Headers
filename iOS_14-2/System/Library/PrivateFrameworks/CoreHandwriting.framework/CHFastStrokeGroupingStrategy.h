/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHStrokeGroupingStrategy.h>

@class NSArray, CHStrokeClutterFilter;

@interface CHFastStrokeGroupingStrategy : CHStrokeGroupingStrategy {

	NSArray* _locales;
	CHStrokeClutterFilter* _clutterFilter;

}
-(void)dealloc;
-(id)strategyIdentifier;
-(id)initWithStrokeProvider:(id)arg1 locales:(id)arg2 clutterFilter:(id)arg3 ;
-(id)groupingResultUsingStrokes:(id)arg1 distanceMetric:(int)arg2 mergingDistanceThreshold:(double)arg3 shouldCancel:(/*^block*/id)arg4 ;
-(id)lineGroupingResultUsingStrokes:(id)arg1 shouldCancel:(/*^block*/id)arg2 ;
-(id)groupingResultForContextStrokes:(id)arg1 clusteredStrokes:(id)arg2 fastGroupingResult:(id)arg3 point:(CGPoint)arg4 tokenizationLevel:(long long)arg5 ;
-(vector<CHFastGroupingCluster, std::__1::allocator<CHFastGroupingCluster> >*)clustersForStrokes:(id)arg1 shouldMakeSingleCluster:(BOOL)arg2 ;
-(id)fastGroupingResultWithFastGroupingClusters:(vector<CHFastGroupingCluster, std::__1::allocator<CHFastGroupingCluster> >*)arg1 clusteredStrokes:(id)arg2 ;
-(vector<CHFastGroupingCluster, std::__1::allocator<CHFastGroupingCluster> >*)_agglomerativeClusteringUsingInitialClusters:(vector<CHFastGroupingCluster, std::__1::allocator<CHFastGroupingCluster> >*)arg1 distanceMetric:(int)arg2 maxDistanceThreshold:(float)arg3 shouldCancel:(/*^block*/id)arg4 ;
-(float)_maxDistanceThresholdForTokenizationLevel:(long long)arg1 ;
-(void)_filterClusters:(vector<CHFastGroupingCluster, std::__1::allocator<CHFastGroupingCluster> >*)arg1 usingContextStrokes:(id)arg2 clusteredStrokes:(id)arg3 ;
-(vector<CHFastGroupingCluster, std::__1::allocator<CHFastGroupingCluster> >*)_wordClustersForInitialClusters:(vector<CHFastGroupingCluster, std::__1::allocator<CHFastGroupingCluster> >*)arg1 ;
-(id)_strokeIdentifiersForContextStrokes:(id)arg1 clusters:(vector<CHFastGroupingCluster, std::__1::allocator<CHFastGroupingCluster> >*)arg2 clusteredStrokes:(id)arg3 tokenizationLevel:(long long)arg4 fastGroupingResult:(id)arg5 ;
@end

