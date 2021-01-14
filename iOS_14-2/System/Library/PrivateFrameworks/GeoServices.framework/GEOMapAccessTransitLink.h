/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapAccessLine.h>
#import <libobjc.A.dylib/GEOMapTransitLink.h>

@protocol GEOMapTransitStop;
@class NSString;

@interface GEOMapAccessTransitLink : GEOMapAccessLine <GEOMapTransitLink> {

	shared_ptr<geo::MapEdgeTransit>* _transitEdge;
	vector<GEOLocationCoordinate2D, std::__1::allocator<GEOLocationCoordinate2D> >* _coords;
	id<GEOMapTransitStop> _stopFrom;
	id<GEOMapTransitStop> _stopTo;

}

@property (nonatomic,readonly) unsigned long long transitLineID; 
@property (nonatomic,readonly) NSString * internalLineName; 
@property (nonatomic,readonly) unsigned minimumTravelTime; 
@property (nonatomic,readonly) id<GEOMapTransitStop> stopFrom;                    //@synthesize stopFrom=_stopFrom - In the implementation block
@property (nonatomic,readonly) id<GEOMapTransitStop> stopTo;                      //@synthesize stopTo=_stopTo - In the implementation block
@property (nonatomic,readonly) unsigned long long coordinateCount; 
@property (nonatomic,readonly) GEOCoarseLocationLatLng* coordinates; 
@property (nonatomic,readonly) double length; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<GEOMapTransitStop>)stopTo;
-(NSString *)description;
-(id<GEOMapTransitStop>)stopFrom;
-(id)initWithMap:(id)arg1 transitEdge:(shared_ptr<geo::MapEdgeTransit>*)arg2 ;
-(unsigned)minimumTravelTime;
-(double)distanceInMetersFrom:(GEOCoarseLocationLatLng)arg1 outClosestCoordinateOnLine:(GEOCoarseLocationLatLng*)arg2 ;
-(unsigned long long)transitLineID;
-(NSString *)internalLineName;
@end

