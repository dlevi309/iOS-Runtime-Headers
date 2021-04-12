/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long coordinateCount; 
@property (nonatomic,readonly) SCD_Struct_GE32* coordinates; 
@property (nonatomic,readonly) double length; 
@property (nonatomic,readonly) unsigned long long transitLineID; 
@property (nonatomic,readonly) NSString * internalLineName; 
@property (nonatomic,readonly) unsigned minimumTravelTime; 
@property (nonatomic,readonly) id<GEOMapTransitStop> stopFrom;                  //@synthesize stopFrom=_stopFrom - In the implementation block
@property (nonatomic,readonly) id<GEOMapTransitStop> stopTo;                    //@synthesize stopTo=_stopTo - In the implementation block
-(NSString *)description;
-(id)initWithMap:(id)arg1 transitEdge:(shared_ptr<geo::MapEdgeTransit>*)arg2 ;
-(double)distanceInMetersFrom:(SCD_Struct_GE32)arg1 outClosestCoordinateOnLine:(SCD_Struct_GE32*)arg2 ;
-(unsigned long long)transitLineID;
-(NSString *)internalLineName;
-(unsigned)minimumTravelTime;
-(id<GEOMapTransitStop>)stopFrom;
-(id<GEOMapTransitStop>)stopTo;
@end

