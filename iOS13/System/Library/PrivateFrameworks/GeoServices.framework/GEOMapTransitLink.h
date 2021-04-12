/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)distanceInMetersFrom:(SCD_Struct_GE32)arg1 outClosestCoordinateOnLine:(SCD_Struct_GE32*)arg2;
-(unsigned long long)transitLineID;
-(NSString *)internalLineName;
-(unsigned)minimumTravelTime;
-(id<GEOMapTransitStop>)stopFrom;
-(id<GEOMapTransitStop>)stopTo;

@end

