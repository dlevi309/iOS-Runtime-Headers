/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class CLSSimilarStacker, NSSet;

@interface CLSAssetsBeautifier : NSObject {

	BOOL _enableStatisticalSampling;
	BOOL _enableNetworkAccess;
	BOOL _enableIntermediateNaturalClustering;
	BOOL _enableFinalNaturalClustering;
	BOOL _enableFinalTimeClustering;
	CLSSimilarStacker* _similarStacker;
	BOOL _usesKMeans;
	NSSet* _identifiersOfRequiredItems;

}

@property (assign,nonatomic) BOOL enableStatisticalSampling;                        //@synthesize enableStatisticalSampling=_enableStatisticalSampling - In the implementation block
@property (assign,nonatomic) BOOL enableNetworkAccess;                              //@synthesize enableNetworkAccess=_enableNetworkAccess - In the implementation block
@property (assign,nonatomic) BOOL enableIntermediateNaturalClustering;              //@synthesize enableIntermediateNaturalClustering=_enableIntermediateNaturalClustering - In the implementation block
@property (assign,nonatomic) BOOL enableFinalNaturalClustering;                     //@synthesize enableFinalNaturalClustering=_enableFinalNaturalClustering - In the implementation block
@property (assign,nonatomic) BOOL enableFinalTimeClustering;                        //@synthesize enableFinalTimeClustering=_enableFinalTimeClustering - In the implementation block
@property (assign,nonatomic) BOOL usesKMeans;                                       //@synthesize usesKMeans=_usesKMeans - In the implementation block
@property (nonatomic,copy) NSSet * identifiersOfRequiredItems;                      //@synthesize identifiersOfRequiredItems=_identifiersOfRequiredItems - In the implementation block
+(id)beautifier;
-(BOOL)itemIsRequired:(id)arg1 ;
-(BOOL)usesKMeans;
-(id)_naturalClusteringBestItemInItems:(id)arg1 ;
-(id)init;
-(id)requiredItemsInItems:(id)arg1 ;
-(id)sortedItemsWithItems:(id)arg1 ;
-(BOOL)enableIntermediateNaturalClustering;
-(BOOL)enableNetworkAccess;
-(id)deduplicateItems:(id)arg1 withDuration:(double)arg2 andSimilarity:(long long)arg3 debugInfo:(id)arg4 ;
-(BOOL)enableStatisticalSampling;
-(id)_naturalClusteringWithItems:(id)arg1 withSimilarity:(long long)arg2 timestampSupport:(BOOL)arg3 debugInfo:(id)arg4 ;
-(void)setUsesKMeans:(BOOL)arg1 ;
-(void)setEnableIntermediateNaturalClustering:(BOOL)arg1 ;
-(void)setEnableFinalTimeClustering:(BOOL)arg1 ;
-(void)setEnableNetworkAccess:(BOOL)arg1 ;
-(id)performWithItems:(id)arg1 maximumNumberOfItemsToChoose:(unsigned long long)arg2 debugInfo:(id)arg3 progressBlock:(/*^block*/id)arg4 ;
-(BOOL)enableFinalTimeClustering;
-(id)deduplicateItems:(id)arg1 debugInfo:(id)arg2 ;
-(NSSet *)identifiersOfRequiredItems;
-(/*^block*/id)hierarchicalClusteringDistanceBlock;
-(id)rankSimilarItems:(id)arg1 ;
-(id)_clustersBySplittingZeroDiameterClustersInClusters:(id)arg1 targetingNumberOfClusters:(unsigned long long)arg2 ;
-(/*^block*/id)timeClusteringDistanceBlock;
-(void)setEnableStatisticalSampling:(BOOL)arg1 ;
-(id)bestItemInItems:(id)arg1 ;
-(id)sampledItemsInSortedItems:(id)arg1 maximumNumberOfItemsToChoose:(unsigned long long)arg2 debugInfo:(id)arg3 progressBlock:(/*^block*/id)arg4 ;
-(void)setIdentifiersOfRequiredItems:(NSSet *)arg1 ;
-(BOOL)enableFinalNaturalClustering;
-(void)setEnableFinalNaturalClustering:(BOOL)arg1 ;
-(id)performWithItems:(id)arg1 maximumNumberOfItemsToChoose:(unsigned long long)arg2 progressBlock:(/*^block*/id)arg3 ;
@end

