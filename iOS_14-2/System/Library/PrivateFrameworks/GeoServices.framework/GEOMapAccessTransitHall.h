/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapAccessTransitNodeBase.h>
#import <libobjc.A.dylib/GEOMapTransitHall.h>

@protocol GEOMapTransitStation;
@class NSString;

@interface GEOMapAccessTransitHall : GEOMapAccessTransitNodeBase <GEOMapTransitHall> {

	id<GEOMapTransitStation> _station;

}

@property (nonatomic,readonly) unsigned long long stationID; 
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
-(unsigned long long)stationID;
-(id)findStops:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)findStation:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

