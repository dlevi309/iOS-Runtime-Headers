/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOMapTransitAccessPoint.h>

@protocol GEOMapTransitStation;
@class GEOMapAccess, NSString;

@interface GEOMapAccessTransitAccessPoint : NSObject <GEOMapTransitAccessPoint> {

	GEOMapAccess* _map;
	shared_ptr<geo::MapAccessPointFeature>* _accessPoint;
	id<GEOMapTransitStation> _station;

}

@property (nonatomic,readonly) unsigned long long stationID; 
@property (nonatomic,readonly) double groundRadius; 
@property (nonatomic,readonly) unsigned char entranceExitType; 
@property (nonatomic,readonly) unsigned short accessType; 
@property (nonatomic,readonly) GEOCoarseLocationLatLng coordinate; 
@property (nonatomic,readonly) unsigned long long transitID; 
@property (nonatomic,readonly) NSString * internalName; 
@property (nonatomic,readonly) double boundingRadius; 
@property (nonatomic,readonly) SCD_Struct_GE36 boundingRect; 
@property (nonatomic,readonly) GEOCoarseLocationLatLng* polygonPoints; 
@property (nonatomic,readonly) long long polygonPointsCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)internalName;
-(GEOCoarseLocationLatLng)coordinate;
-(SCD_Struct_GE36)boundingRect;
-(unsigned long long)transitID;
-(unsigned long long)stationID;
-(double)boundingRadius;
-(GEOCoarseLocationLatLng*)polygonPoints;
-(id)findAccessPoints:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)findGeometryWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)polygonPointsCount;
-(double)distanceInMetersFrom:(GEOCoarseLocationLatLng)arg1 ;
-(id)findStops:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned char)entranceExitType;
-(double)groundRadius;
-(id)findStation:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithMap:(id)arg1 accessPoint:(shared_ptr<geo::MapAccessPointFeature>*)arg2 ;
-(unsigned short)accessType;
@end

