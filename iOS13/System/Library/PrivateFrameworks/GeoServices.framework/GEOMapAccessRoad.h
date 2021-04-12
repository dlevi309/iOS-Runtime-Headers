/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long coordinateCount; 
@property (nonatomic,readonly) SCD_Struct_GE32* coordinates; 
@property (nonatomic,readonly) double length; 
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
+(double)estimatedWidthForRoad:(SCD_Struct_GE74*)arg1 ;
-(NSString *)description;
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
-(id)initWithMap:(id)arg1 roadEdge:(shared_ptr<geo::MapEdgeRoad>*)arg2 ;
-(void)roadFeaturesWithHandler:(/*^block*/id)arg1 ;
-(void)roadEdgesWithHandler:(/*^block*/id)arg1 ;
-(id)findRoadsFrom:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)findRoadsFromPreviousIntersection:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)findRoadsToPreviousIntersection:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)findRoadsFromNextIntersection:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)findRoadsToNextIntersection:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)tileKeys;
@end

