/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOMapTransitHall <GEOMapTransitPoint>
@property (nonatomic,readonly) unsigned long long stationID; 
@required
-(id)findStops:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)findStation:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(unsigned long long)stationID;

@end

