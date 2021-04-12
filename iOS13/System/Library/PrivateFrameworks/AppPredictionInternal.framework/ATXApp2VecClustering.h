/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class ATXApp2VecMapping;

@interface ATXApp2VecClustering : NSObject {

	ATXApp2VecMapping* _clusterCentroids;
	ATXApp2VecMapping* _appEmbeddings;
	long long _vectorLength;
	BOOL _loaded;

}
+(id)sharedInstance;
+(void)resetSharedInstance;
-(id)init;
-(id)getClusterCentroidsForBundleIds:(id)arg1 ;
-(id)_mergeClusterCentroids:(id)arg1 forBundleIds:(id)arg2 ;
-(id)getClosestClusterCentroidForBundleId:(id)arg1 ;
-(id)_getClosestClusterCentroidForVector:(const float*)arg1 ;
-(float)_getL2DistanceFrom:(const float*)arg1 to:(float*)arg2 ;
@end

