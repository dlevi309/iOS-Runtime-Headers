/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapAccessLine.h>
#import <libobjc.A.dylib/GEOMapRoad.h>

@class NSString;

@interface GEOMapAccessRoad : GEOMapAccessLine <GEOMapRoad> {

	shared_ptr<geo::MapEdgeRoad>* _roadEdge;
	unsigned long long _roadID;

}

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
@property (nonatomic,readonly) unsigned long long coordinateCount; 
@property (nonatomic,readonly) GEOCoarseLocationLatLng* coordinates; 
@property (nonatomic,readonly) double length; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)estimatedWidthForRoad:(SCD_Struct_GE77*)arg1 ;
-(BOOL)isBridge;
-(void)roadFeaturesWithHandler:(/*^block*/id)arg1 ;
-(void)roadEdgesWithHandler:(/*^block*/id)arg1 ;
-(id)findRoadsFrom:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)findRoadsFromPreviousIntersection:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)findRoadsToPreviousIntersection:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)findRoadsFromNextIntersection:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)findRoadsToNextIntersection:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)roadID;
-(BOOL)isRail;
-(unsigned long long)speedLimit;
-(NSString *)description;
-(BOOL)isTunnel;
-(id)tileKeys;
-(int)roadClass;
-(int)travelDirection;
-(NSString *)internalRoadName;
-(BOOL)speedLimitIsMPH;
-(int)formOfWay;
-(double)roadWidth;
-(int)rampType;
-(id)initWithMap:(id)arg1 roadEdge:(shared_ptr<geo::MapEdgeRoad>*)arg2 ;
@end

