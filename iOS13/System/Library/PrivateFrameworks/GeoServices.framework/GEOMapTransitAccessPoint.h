/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOMapTransitAccessPoint <GEOMapTransitPoint>
@property (nonatomic,readonly) unsigned long long stationID; 
@property (nonatomic,readonly) double groundRadius; 
@property (nonatomic,readonly) unsigned char entranceExitType; 
@property (nonatomic,readonly) unsigned short accessType; 
@required
-(unsigned short)accessType;
-(id)findStops:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)findStation:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(unsigned long long)stationID;
-(double)groundRadius;
-(unsigned char)entranceExitType;

@end

