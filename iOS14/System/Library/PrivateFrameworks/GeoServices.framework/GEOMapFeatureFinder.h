/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequest.h>

@class GEOMapTileFinder, GEOMapAccess;

@interface GEOMapFeatureFinder : GEOMapRequest {

	GEOCoarseLocationLatLng _coordinate;
	GEOMapTileFinder* _tileFinder;
	/*^block*/id _roadHandler;
	/*^block*/id _pointHandler;
	/*^block*/id _polygonHandler;
	BOOL _ignoreUnnamedFeatures;

}

@property (nonatomic,copy) id roadHandler;                            //@synthesize roadHandler=_roadHandler - In the implementation block
@property (nonatomic,copy) id pointHandler;                           //@synthesize pointHandler=_pointHandler - In the implementation block
@property (nonatomic,copy) id polygonHandler;                         //@synthesize polygonHandler=_polygonHandler - In the implementation block
@property (nonatomic,readonly) GEOMapAccess * map; 
@property (assign,nonatomic) BOOL ignoreUnnamedFeatures;              //@synthesize ignoreUnnamedFeatures=_ignoreUnnamedFeatures - In the implementation block
-(GEOMapAccess *)map;
-(id)roadHandler;
-(void)setRoadHandler:(id)arg1 ;
-(void)setPointHandler:(id)arg1 ;
-(void)setPolygonHandler:(id)arg1 ;
-(id)initWithMap:(id)arg1 center:(GEOCoarseLocationLatLng)arg2 ;
-(id)pointHandler;
-(void)_pickRoadInTile:(id)arg1 tileRect:(const SCD_Struct_GE36*)arg2 localPoint:(const Matrix<float, 2, 1>*)arg3 ;
-(BOOL)ignoreUnnamedFeatures;
-(void)setIgnoreUnnamedFeatures:(BOOL)arg1 ;
-(void)findFeatures:(/*^block*/id)arg1 pointHandler:(/*^block*/id)arg2 polygonHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)polygonHandler;
-(void)cancel;
@end

