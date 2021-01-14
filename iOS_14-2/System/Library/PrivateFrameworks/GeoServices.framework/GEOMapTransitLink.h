/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class NSString;


@protocol GEOMapTransitLink <GEOMapLine>
@property (nonatomic,readonly) unsigned long long transitLineID; 
@property (nonatomic,readonly) NSString * internalLineName; 
@property (nonatomic,readonly) unsigned minimumTravelTime; 
@property (nonatomic,readonly) id<GEOMapTransitStop> stopFrom; 
@property (nonatomic,readonly) id<GEOMapTransitStop> stopTo; 
@required
-(id<GEOMapTransitStop>)stopTo;
-(id<GEOMapTransitStop>)stopFrom;
-(unsigned)minimumTravelTime;
-(double)distanceInMetersFrom:(GEOCoarseLocationLatLng)arg1 outClosestCoordinateOnLine:(GEOCoarseLocationLatLng*)arg2;
-(unsigned long long)transitLineID;
-(NSString *)internalLineName;

@end

