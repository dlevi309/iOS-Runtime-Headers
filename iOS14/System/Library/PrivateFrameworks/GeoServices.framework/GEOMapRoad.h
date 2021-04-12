/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class NSString;


@protocol GEOMapRoad <GEOMapLine>
@property (nonatomic,readonly) int roadClass; 
@property (nonatomic,readonly) int formOfWay; 
@property (nonatomic,readonly) int travelDirection; 
@property (nonatomic,readonly) double roadWidth; 
@property (nonatomic,readonly) unsigned long long speedLimit; 
@property (nonatomic,readonly) BOOL speedLimitIsMPH; 
@property (nonatomic,readonly) unsigned long long roadID; 
@property (nonatomic,readonly) BOOL isTunnel; 
@property (nonatomic,readonly) BOOL isBridge; 
@property (nonatomic,readonly) BOOL isRail; 
@property (nonatomic,readonly) int rampType; 
@property (nonatomic,readonly) NSString * internalRoadName; 
@required
-(BOOL)isBridge;
-(void)roadFeaturesWithHandler:(/*^block*/id)arg1;
-(void)roadEdgesWithHandler:(/*^block*/id)arg1;
-(id)findRoadsFrom:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)findRoadsFromPreviousIntersection:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)findRoadsToPreviousIntersection:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)findRoadsFromNextIntersection:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)findRoadsToNextIntersection:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(unsigned long long)roadID;
-(BOOL)isRail;
-(unsigned long long)speedLimit;
-(BOOL)isTunnel;
-(int)roadClass;
-(int)travelDirection;
-(NSString *)internalRoadName;
-(BOOL)speedLimitIsMPH;
-(int)formOfWay;
-(double)roadWidth;
-(int)rampType;

@end

