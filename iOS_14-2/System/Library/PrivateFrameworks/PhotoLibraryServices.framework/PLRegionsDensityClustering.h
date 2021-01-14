/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLRegionsClustering.h>

@interface PLRegionsDensityClustering : PLRegionsClustering {

	BOOL _includeDefiniteClusters;
	BOOL _removeDefiniteClustersObjectsFromDataset;
	BOOL _includeExtensiveClusters;
	BOOL _removeExtensiveClustersObjectsFromDataset;
	BOOL _removeExtensiveClustersContainingDefiniteClusters;
	unsigned long long _algorithm;
	double _definiteClusterTimeIntervalDistance;
	double _definiteClusterMaximumDistanceUnit;
	double _definiteClusterMinimumNumberOfObjectsPercent;
	unsigned long long _definiteClusterMinimumNumberOfObjects;
	double _extensiveClusterTimeIntervalDistance;
	double _extensiveClusterMaximumDistanceUnit;
	double _extensiveClusterMinimumNumberOfObjectsPercent;
	unsigned long long _extensiveClusterMinimumNumberOfObjects;

}

@property (assign,nonatomic) unsigned long long algorithm;                                           //@synthesize algorithm=_algorithm - In the implementation block
@property (assign,nonatomic) BOOL includeDefiniteClusters;                                           //@synthesize includeDefiniteClusters=_includeDefiniteClusters - In the implementation block
@property (assign,nonatomic) double definiteClusterTimeIntervalDistance;                             //@synthesize definiteClusterTimeIntervalDistance=_definiteClusterTimeIntervalDistance - In the implementation block
@property (assign,nonatomic) double definiteClusterMaximumDistanceUnit;                              //@synthesize definiteClusterMaximumDistanceUnit=_definiteClusterMaximumDistanceUnit - In the implementation block
@property (assign,nonatomic) double definiteClusterMinimumNumberOfObjectsPercent;                    //@synthesize definiteClusterMinimumNumberOfObjectsPercent=_definiteClusterMinimumNumberOfObjectsPercent - In the implementation block
@property (assign,nonatomic) unsigned long long definiteClusterMinimumNumberOfObjects;               //@synthesize definiteClusterMinimumNumberOfObjects=_definiteClusterMinimumNumberOfObjects - In the implementation block
@property (assign,nonatomic) BOOL removeDefiniteClustersObjectsFromDataset;                          //@synthesize removeDefiniteClustersObjectsFromDataset=_removeDefiniteClustersObjectsFromDataset - In the implementation block
@property (assign,nonatomic) BOOL includeExtensiveClusters;                                          //@synthesize includeExtensiveClusters=_includeExtensiveClusters - In the implementation block
@property (assign,nonatomic) double extensiveClusterTimeIntervalDistance;                            //@synthesize extensiveClusterTimeIntervalDistance=_extensiveClusterTimeIntervalDistance - In the implementation block
@property (assign,nonatomic) double extensiveClusterMaximumDistanceUnit;                             //@synthesize extensiveClusterMaximumDistanceUnit=_extensiveClusterMaximumDistanceUnit - In the implementation block
@property (assign,nonatomic) double extensiveClusterMinimumNumberOfObjectsPercent;                   //@synthesize extensiveClusterMinimumNumberOfObjectsPercent=_extensiveClusterMinimumNumberOfObjectsPercent - In the implementation block
@property (assign,nonatomic) unsigned long long extensiveClusterMinimumNumberOfObjects;              //@synthesize extensiveClusterMinimumNumberOfObjects=_extensiveClusterMinimumNumberOfObjects - In the implementation block
@property (assign,nonatomic) BOOL removeExtensiveClustersObjectsFromDataset;                         //@synthesize removeExtensiveClustersObjectsFromDataset=_removeExtensiveClustersObjectsFromDataset - In the implementation block
@property (assign,nonatomic) BOOL removeExtensiveClustersContainingDefiniteClusters;                 //@synthesize removeExtensiveClustersContainingDefiniteClusters=_removeExtensiveClustersContainingDefiniteClusters - In the implementation block
-(unsigned long long)algorithm;
-(void)setExtensiveClusterMaximumDistanceUnit:(double)arg1 ;
-(BOOL)includeExtensiveClusters;
-(double)extensiveClusterMaximumDistanceUnit;
-(void)setAlgorithm:(unsigned long long)arg1 ;
-(void)setDefiniteClusterMinimumNumberOfObjectsPercent:(double)arg1 ;
-(id)init;
-(BOOL)includeDefiniteClusters;
-(double)definiteClusterMaximumDistanceUnit;
-(double)definiteClusterMinimumNumberOfObjectsPercent;
-(double)extensiveClusterTimeIntervalDistance;
-(void)setExtensiveClusterTimeIntervalDistance:(double)arg1 ;
-(BOOL)removeExtensiveClustersContainingDefiniteClusters;
-(void)setRemoveExtensiveClustersObjectsFromDataset:(BOOL)arg1 ;
-(unsigned long long)definiteClusterMinimumNumberOfObjects;
-(void)setRemoveExtensiveClustersContainingDefiniteClusters:(BOOL)arg1 ;
-(unsigned long long)extensiveClusterMinimumNumberOfObjects;
-(id)performWithDataset:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)setDefiniteClusterMaximumDistanceUnit:(double)arg1 ;
-(void)setRemoveDefiniteClustersObjectsFromDataset:(BOOL)arg1 ;
-(void)setIncludeDefiniteClusters:(BOOL)arg1 ;
-(/*^block*/id)_locationBasedClusteringBlock;
-(void)setExtensiveClusterMinimumNumberOfObjectsPercent:(double)arg1 ;
-(double)extensiveClusterMinimumNumberOfObjectsPercent;
-(void)setExtensiveClusterMinimumNumberOfObjects:(unsigned long long)arg1 ;
-(BOOL)removeExtensiveClustersObjectsFromDataset;
-(void)setDefiniteClusterMinimumNumberOfObjects:(unsigned long long)arg1 ;
-(double)definiteClusterTimeIntervalDistance;
-(void)setDefiniteClusterTimeIntervalDistance:(double)arg1 ;
-(void)setIncludeExtensiveClusters:(BOOL)arg1 ;
-(/*^block*/id)_timeAndLocationBasedClusteringBlockWithTimeIntervalDistance:(double)arg1 ;
-(BOOL)removeDefiniteClustersObjectsFromDataset;
@end

