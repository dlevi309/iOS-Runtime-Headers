/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOMapTransitAccessPoint <GEOMapTransitPoint>
@property (nonatomic,readonly) unsigned long long stationID; 
@property (nonatomic,readonly) double groundRadius; 
@property (nonatomic,readonly) unsigned char entranceExitType; 
@property (nonatomic,readonly) unsigned short accessType; 
@required
-(unsigned long long)stationID;
-(id)findStops:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(unsigned char)entranceExitType;
-(double)groundRadius;
-(id)findStation:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(unsigned short)accessType;

@end

