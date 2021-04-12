/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class CLSAssetsBeautifier, CLSSimilarStacker;

@interface PGKeyCurator : NSObject {

	CLSAssetsBeautifier* _beautifier;
	CLSSimilarStacker* _similarStacker;

}
-(id)init;
-(id)keyItemIdentifierWithItems:(id)arg1 options:(id)arg2 debugInfo:(out id*)arg3 ;
-(id)keyItemWithFeeder:(id)arg1 options:(id)arg2 criteria:(id)arg3 debugInfo:(id)arg4 progressBlock:(/*^block*/id)arg5 ;
-(id)bestItemIdentifierWithItems:(id)arg1 options:(id)arg2 debugInfo:(out id*)arg3 criteria:(id)arg4 curationOptions:(id)arg5 ;
-(id)_keyItemWithFeeder:(id)arg1 options:(id)arg2 criteria:(id)arg3 debugInfo:(id)arg4 progressBlock:(/*^block*/id)arg5 ;
-(BOOL)item:(id)arg1 passesCriteria:(id)arg2 score:(double*)arg3 ;
-(id)clusterWithSubclusters:(id)arg1 keyItem:(id)arg2 ;
-(BOOL)scoreLevelOfCluster:(id)arg1 isAboveScoreLevelOfCluster:(id)arg2 ;
-(BOOL)cluster:(id)arg1 scoresBetterThanCluster:(id)arg2 ;
-(BOOL)cluster:(id)arg1 isBetterThanCluster:(id)arg2 ;
-(id)bestItemInItems:(id)arg1 options:(id)arg2 criteria:(id)arg3 minimumCriteriaScore:(double)arg4 ;
@end

