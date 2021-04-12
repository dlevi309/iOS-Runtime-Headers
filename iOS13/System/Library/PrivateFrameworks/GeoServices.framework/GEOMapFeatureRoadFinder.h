/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithTileLoader:(id)arg1 ;
-(void)setFlipNegativeTravelDirectionRoads:(BOOL)arg1 ;
-(void)setVisitDoubleTravelDirectionRoadsTwice:(BOOL)arg1 ;
-(id)findRoadsNear:(SCD_Struct_GE32)arg1 radius:(double)arg2 handler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)flipNegativeTravelDirectionRoads;
-(BOOL)visitDoubleTravelDirectionRoadsTwice;
@end

