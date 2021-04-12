/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSString;

@interface GEORoadMatch : NSObject {

	SCD_Struct_GE77* _roadFeature;
	NSString* _roadName;
	GEOCoarseLocationLatLng _coordinateOnRoad;
	double _courseOnRoad;
	double _distanceFromRoad;
	double _roadWidth;
	double _distanceFromJunction;
	double _junctionRadius;

}

@property (nonatomic,copy) NSString * roadName;                                     //@synthesize roadName=_roadName - In the implementation block
@property (assign,nonatomic) GEOCoarseLocationLatLng coordinateOnRoad;              //@synthesize coordinateOnRoad=_coordinateOnRoad - In the implementation block
@property (assign,nonatomic) double courseOnRoad;                                   //@synthesize courseOnRoad=_courseOnRoad - In the implementation block
@property (assign,nonatomic) double distanceFromRoad;                               //@synthesize distanceFromRoad=_distanceFromRoad - In the implementation block
@property (assign,nonatomic) double roadWidth;                                      //@synthesize roadWidth=_roadWidth - In the implementation block
@property (assign,nonatomic) double distanceFromJunction;                           //@synthesize distanceFromJunction=_distanceFromJunction - In the implementation block
@property (assign,nonatomic) double junctionRadius;                                 //@synthesize junctionRadius=_junctionRadius - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE77* roadFeature;                        //@synthesize roadFeature=_roadFeature - In the implementation block
-(SCD_Struct_GE77*)roadFeature;
-(void)setRoadFeature:(SCD_Struct_GE77*)arg1 ;
-(id)initWithCoordinateOnRoad:(GEOCoarseLocationLatLng)arg1 courseOnRoad:(double)arg2 ;
-(void)setCoordinateOnRoad:(GEOCoarseLocationLatLng)arg1 ;
-(void)setCourseOnRoad:(double)arg1 ;
-(void)setRoadWidth:(double)arg1 ;
-(void)setDistanceFromJunction:(double)arg1 ;
-(void)setJunctionRadius:(double)arg1 ;
-(NSString *)roadName;
-(double)roadWidth;
-(double)distanceFromRoad;
-(double)courseOnRoad;
-(GEOCoarseLocationLatLng)coordinateOnRoad;
-(void)setDistanceFromRoad:(double)arg1 ;
-(double)distanceFromJunction;
-(double)junctionRadius;
-(void)setRoadName:(NSString *)arg1 ;
-(void)dealloc;
@end

