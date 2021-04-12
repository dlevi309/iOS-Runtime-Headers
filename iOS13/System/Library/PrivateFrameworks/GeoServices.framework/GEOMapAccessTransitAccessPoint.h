/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_GE32 coordinate; 
@property (nonatomic,readonly) unsigned long long transitID; 
@property (nonatomic,readonly) NSString * internalName; 
@property (nonatomic,readonly) double boundingRadius; 
@property (nonatomic,readonly) SCD_Struct_GE40 boundingRect; 
@property (nonatomic,readonly) SCD_Struct_GE32* polygonPoints; 
@property (nonatomic,readonly) long long polygonPointsCount; 
@property (nonatomic,readonly) unsigned long long stationID; 
@property (nonatomic,readonly) double groundRadius; 
@property (nonatomic,readonly) unsigned char entranceExitType; 
@property (nonatomic,readonly) unsigned short accessType; 
-(SCD_Struct_GE32)coordinate;
-(unsigned short)accessType;
-(SCD_Struct_GE40)boundingRect;
-(unsigned long long)transitID;
-(id)findGeometryWithCompletionHandler:(/*^block*/id)arg1 ;
-(double)distanceInMetersFrom:(SCD_Struct_GE32)arg1 ;
-(id)findAccessPoints:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)internalName;
-(double)boundingRadius;
-(SCD_Struct_GE32*)polygonPoints;
-(long long)polygonPointsCount;
-(id)findStops:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)findStation:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)stationID;
-(double)groundRadius;
-(unsigned char)entranceExitType;
-(id)initWithMap:(id)arg1 accessPoint:(shared_ptr<geo::MapAccessPointFeature>*)arg2 ;
@end

