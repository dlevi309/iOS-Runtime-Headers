/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapFeatureAccessFinder.h>

@class GEOTileLoader;

@interface GEOMapFeatureRoadFinder : GEOMapFeatureAccessFinder {

	BOOL _flipNegativeTravelDirectionRoads;
	BOOL _visitDoubleTravelDirectionRoadsTwice;
	GEOTileLoader* _tileLoader;

}

@property (assign,nonatomic) BOOL flipNegativeTravelDirectionRoads;                  //@synthesize flipNegativeTravelDirectionRoads=_flipNegativeTravelDirectionRoads - In the implementation block
@property (assign,nonatomic) BOOL visitDoubleTravelDirectionRoadsTwice;              //@synthesize visitDoubleTravelDirectionRoadsTwice=_visitDoubleTravelDirectionRoadsTwice - In the implementation block
-(id)findRoadsNear:(GEOCoarseLocationLatLng)arg1 radius:(double)arg2 handler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)visitDoubleTravelDirectionRoadsTwice;
-(id)initWithTileLoader:(id)arg1 ;
-(void)setFlipNegativeTravelDirectionRoads:(BOOL)arg1 ;
-(void)setVisitDoubleTravelDirectionRoadsTwice:(BOOL)arg1 ;
-(BOOL)flipNegativeTravelDirectionRoads;
@end

