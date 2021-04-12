/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOMapTransitStop <GEOMapTransitPoint>
@property (nonatomic,readonly) unsigned long long hallID; 
@required
-(unsigned long long)hallID;
-(id)findHall:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)findLinksIn:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)findLinksOut:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;

@end

