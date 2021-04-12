/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PhotosGraph-Structs.h>
#import <libobjc.A.dylib/PGGraphIngestProcessor.h>

@class NSDictionary, NSString;

@interface PGGraphIngestPointsOfInterestProcessor : NSObject <PGGraphIngestProcessor> {

	NSDictionary* _momentNodesToResolvePOIByRegion;
	NSDictionary* _momentNodesToResolvePOIAndEnrichByBusinessItemMuid;

}

@property (nonatomic,readonly) NSDictionary * momentNodesToResolvePOIByRegion;                                 //@synthesize momentNodesToResolvePOIByRegion=_momentNodesToResolvePOIByRegion - In the implementation block
@property (nonatomic,readonly) NSDictionary * momentNodesToResolvePOIAndEnrichByBusinessItemMuid;              //@synthesize momentNodesToResolvePOIAndEnrichByBusinessItemMuid=_momentNodesToResolvePOIAndEnrichByBusinessItemMuid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_fetchPointsOfInterestForRegions:(id)arg1 graph:(id)arg2 progress:(/*^block*/id)arg3 ;
-(NSDictionary *)momentNodesToResolvePOIAndEnrichByBusinessItemMuid;
-(NSDictionary *)momentNodesToResolvePOIByRegion;
-(void)_insertPointOfInterestTypeStrings:(id)arg1 graph:(id)arg2 withMomentNodes:(id)arg3 ;
-(void)runWithGraphUpdate:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(BOOL)shouldRunWithGraphUpdate:(id)arg1 ;
-(id)_pointOfInterestTypeStringsFromBusinessItems:(id)arg1 withOriginalCoordinate:(CLLocationCoordinate2D)arg2 ;
-(void)disambiguatePointsOfInterestWithMomentNodes:(id)arg1 graphUpdate:(id)arg2 progress:(/*^block*/id)arg3 ;
-(void)_collectPOIsToResolveWithMomentNodes:(id)arg1 graphUpdate:(id)arg2 progress:(/*^block*/id)arg3 ;
@end

