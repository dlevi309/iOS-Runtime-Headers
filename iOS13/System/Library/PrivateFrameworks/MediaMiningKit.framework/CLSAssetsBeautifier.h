/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class CLSSimilarStacker, NSSet;

@interface CLSAssetsBeautifier : NSObject {

	BOOL _enableStatisticalSampling;
	BOOL _enableNetworkAccess;
	BOOL _enableIntermediateNaturalClustering;
	BOOL _enableFinalNaturalClustering;
	BOOL _enableFinalTimeClustering;
	BOOL _usesVision;
	CLSSimilarStacker* _similarStacker;
	BOOL _usesKMeans;
	NSSet* _identifiersOfRequiredItems;

}

@property (assign,nonatomic) BOOL enableStatisticalSampling;                        //@synthesize enableStatisticalSampling=_enableStatisticalSampling - In the implementation block
@property (assign,nonatomic) BOOL enableNetworkAccess;                              //@synthesize enableNetworkAccess=_enableNetworkAccess - In the implementation block
@property (assign,nonatomic) BOOL enableIntermediateNaturalClustering;              //@synthesize enableIntermediateNaturalClustering=_enableIntermediateNaturalClustering - In the implementation block
@property (assign,nonatomic) BOOL enableFinalNaturalClustering;                     //@synthesize enableFinalNaturalClustering=_enableFinalNaturalClustering - In the implementation block
@property (assign,nonatomic) BOOL enableFinalTimeClustering;                        //@synthesize enableFinalTimeClustering=_enableFinalTimeClustering - In the implementation block
@property (assign,nonatomic) BOOL usesVision;                                       //@synthesize usesVision=_usesVision - In the implementation block
@property (assign,nonatomic) BOOL usesKMeans;                                       //@synthesize usesKMeans=_usesKMeans - In the implementation block
@property (nonatomic,copy) NSSet * identifiersOfRequiredItems;                      //@synthesize identifiersOfRequiredItems=_identifiersOfRequiredItems - In the implementation block
+(id)beautifier;
-(id)init;
-(/*^block*/id)hierarchicalClusteringDistanceBlock;
-(/*^block*/id)timeClusteringDistanceBlock;
-(id)sampledItemsInSortedItems:(id)arg1 maximumNumberOfItemsToChoose:(unsigned long long)arg2 debugInfo:(id)arg3 progressBlock:(/*^block*/id)arg4 ;
-(id)performWithItems:(id)arg1 maximumNumberOfItemsToChoose:(unsigned long long)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)performWithItems:(id)arg1 maximumNumberOfItemsToChoose:(unsigned long long)arg2 debugInfo:(id)arg3 progressBlock:(/*^block*/id)arg4 ;
-(id)deduplicateItems:(id)arg1 debugInfo:(id)arg2 ;
-(id)deduplicateItems:(id)arg1 withDuration:(double)arg2 andSimilarity:(long long)arg3 debugInfo:(id)arg4 ;
-(id)_clustersBySplittingZeroDiameterClustersInClusters:(id)arg1 targetingNumberOfClusters:(unsigned long long)arg2 ;
-(id)sortedItemsWithItems:(id)arg1 ;
-(id)bestItemInItems:(id)arg1 ;
-(id)_naturalClusteringBestItemInItems:(id)arg1 ;
-(id)_naturalClusteringWithItems:(id)arg1 withSimilarity:(long long)arg2 timestampSupport:(BOOL)arg3 debugInfo:(id)arg4 ;
-(id)rankSimilarItems:(id)arg1 ;
-(BOOL)itemIsRequired:(id)arg1 ;
-(id)requiredItemsInItems:(id)arg1 ;
-(BOOL)enableStatisticalSampling;
-(void)setEnableStatisticalSampling:(BOOL)arg1 ;
-(BOOL)enableNetworkAccess;
-(void)setEnableNetworkAccess:(BOOL)arg1 ;
-(BOOL)enableIntermediateNaturalClustering;
-(void)setEnableIntermediateNaturalClustering:(BOOL)arg1 ;
-(BOOL)enableFinalNaturalClustering;
-(void)setEnableFinalNaturalClustering:(BOOL)arg1 ;
-(BOOL)enableFinalTimeClustering;
-(void)setEnableFinalTimeClustering:(BOOL)arg1 ;
-(BOOL)usesVision;
-(void)setUsesVision:(BOOL)arg1 ;
-(BOOL)usesKMeans;
-(void)setUsesKMeans:(BOOL)arg1 ;
-(NSSet *)identifiersOfRequiredItems;
-(void)setIdentifiersOfRequiredItems:(NSSet *)arg1 ;
@end

