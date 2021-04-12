/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)roadID;
-(BOOL)isTunnel;
-(BOOL)isBridge;
-(int)rampType;
-(int)roadClass;
-(int)formOfWay;
-(int)travelDirection;
-(double)roadWidth;
-(unsigned long long)speedLimit;
-(BOOL)speedLimitIsMPH;
-(BOOL)isRail;
-(NSString *)internalRoadName;
-(void)roadFeaturesWithHandler:(/*^block*/id)arg1;
-(void)roadEdgesWithHandler:(/*^block*/id)arg1;
-(id)findRoadsFrom:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)findRoadsFromPreviousIntersection:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)findRoadsToPreviousIntersection:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)findRoadsFromNextIntersection:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)findRoadsToNextIntersection:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;

@end

