/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGGraphDataModelEnrichmentProcessor.h>

@class NSArray, NSString;

@interface PGGraphAssetRevGeocodeEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor> {

	NSArray* _homeLocations;
	double _sumNumberOfAssetClustersPerMoment;
	double _sumSquareNumberOfAssetClustersPerMoment;
	double _sumNumberOfAssetsPerCluster;
	double _sumSquareNumberOfAssetsPerCluster;
	double _numberOfAssetClustersWithin10mOfCenter;
	double _numberOfAssetClustersWithin20mOfCenter;
	double _numberOfAssetClustersWithin50mOfCenter;
	double _numberOfAssetClustersWithin100mOfCenter;
	double _numberOfAssetClusters100mPlusFromCenter;
	unsigned long long _numberOfMomentsRevGeocoded;
	unsigned long long _numberOfAssetClustersRevGeocoded;

}

@property (nonatomic,retain) NSArray * homeLocations;                                            //@synthesize homeLocations=_homeLocations - In the implementation block
@property (nonatomic,readonly) double sumNumberOfAssetClustersPerMoment;                         //@synthesize sumNumberOfAssetClustersPerMoment=_sumNumberOfAssetClustersPerMoment - In the implementation block
@property (nonatomic,readonly) double sumSquareNumberOfAssetClustersPerMoment;                   //@synthesize sumSquareNumberOfAssetClustersPerMoment=_sumSquareNumberOfAssetClustersPerMoment - In the implementation block
@property (nonatomic,readonly) double sumNumberOfAssetsPerCluster;                               //@synthesize sumNumberOfAssetsPerCluster=_sumNumberOfAssetsPerCluster - In the implementation block
@property (nonatomic,readonly) double sumSquareNumberOfAssetsPerCluster;                         //@synthesize sumSquareNumberOfAssetsPerCluster=_sumSquareNumberOfAssetsPerCluster - In the implementation block
@property (nonatomic,readonly) double numberOfAssetClustersWithin10mOfCenter;                    //@synthesize numberOfAssetClustersWithin10mOfCenter=_numberOfAssetClustersWithin10mOfCenter - In the implementation block
@property (nonatomic,readonly) double numberOfAssetClustersWithin20mOfCenter;                    //@synthesize numberOfAssetClustersWithin20mOfCenter=_numberOfAssetClustersWithin20mOfCenter - In the implementation block
@property (nonatomic,readonly) double numberOfAssetClustersWithin50mOfCenter;                    //@synthesize numberOfAssetClustersWithin50mOfCenter=_numberOfAssetClustersWithin50mOfCenter - In the implementation block
@property (nonatomic,readonly) double numberOfAssetClustersWithin100mOfCenter;                   //@synthesize numberOfAssetClustersWithin100mOfCenter=_numberOfAssetClustersWithin100mOfCenter - In the implementation block
@property (nonatomic,readonly) double numberOfAssetClusters100mPlusFromCenter;                   //@synthesize numberOfAssetClusters100mPlusFromCenter=_numberOfAssetClusters100mPlusFromCenter - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfMomentsRevGeocoded;                    //@synthesize numberOfMomentsRevGeocoded=_numberOfMomentsRevGeocoded - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfAssetClustersRevGeocoded;              //@synthesize numberOfAssetClustersRevGeocoded=_numberOfAssetClustersRevGeocoded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)backgroundJobName;
+(double)backgroundJobTimeout;
+(BOOL)supportsBackgroundJob;
+(id)_homeLocationsWithManager:(id)arg1 ;
-(id)init;
-(NSArray *)homeLocations;
-(void)setHomeLocations:(NSArray *)arg1 ;
-(BOOL)revGeocodeAssets:(id)arg1 manager:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(void)enrichDataModelWithManager:(id)arg1 graphUpdateInventory:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(BOOL)revGeoProviderDidChangeForPhotoLibrary:(id)arg1 ;
-(void)setCurrentGeoProviderForPhotoLibrary:(id)arg1 ;
-(void)invalidateReverseLocationDataForRevGeoProviderChangeUsingManager:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)_momentsRequiringRevGeocodingWithIdentifiers:(id)arg1 inPhotoLibrary:(id)arg2 defaultToAllAssets:(BOOL)arg3 ;
-(id)_clusterAssetsInMoment:(id)arg1 assetsWithInvalidLocationInMoment:(id*)arg2 withPhotoLibrary:(id)arg3 ;
-(BOOL)_revGeocodeAssetClusters:(id)arg1 manager:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(void)_processMetricsOfAssetClustersInMoment:(id)arg1 ;
-(BOOL)_populateCacheWithRegions:(id)arg1 manager:(id)arg2 withProgressBlock:(/*^block*/id)arg3 ;
-(void)_updateGeoInfoForAssetClusters:(id)arg1 manager:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)_revGeoLocationDataForRegion:(id)arg1 manager:(id)arg2 ;
-(BOOL)_setRevGeoLocationData:(id)arg1 onAssets:(id)arg2 withPhotoLibrary:(id)arg3 ;
-(BOOL)_regionIsHome:(id)arg1 ;
-(double)sumNumberOfAssetClustersPerMoment;
-(double)sumSquareNumberOfAssetClustersPerMoment;
-(double)sumNumberOfAssetsPerCluster;
-(double)sumSquareNumberOfAssetsPerCluster;
-(double)numberOfAssetClustersWithin10mOfCenter;
-(double)numberOfAssetClustersWithin20mOfCenter;
-(double)numberOfAssetClustersWithin50mOfCenter;
-(double)numberOfAssetClustersWithin100mOfCenter;
-(double)numberOfAssetClusters100mPlusFromCenter;
-(unsigned long long)numberOfMomentsRevGeocoded;
-(unsigned long long)numberOfAssetClustersRevGeocoded;
@end

