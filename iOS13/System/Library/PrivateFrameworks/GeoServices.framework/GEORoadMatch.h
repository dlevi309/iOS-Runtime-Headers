/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSString;

@interface GEORoadMatch : NSObject {

	SCD_Struct_GE74* _roadFeature;
	NSString* _roadName;
	SCD_Struct_GE32 _coordinateOnRoad;
	double _courseOnRoad;
	double _distanceFromRoad;
	double _roadWidth;
	double _distanceFromJunction;
	double _junctionRadius;

}

@property (nonatomic,copy) NSString * roadName;                             //@synthesize roadName=_roadName - In the implementation block
@property (assign,nonatomic) SCD_Struct_GE32 coordinateOnRoad;              //@synthesize coordinateOnRoad=_coordinateOnRoad - In the implementation block
@property (assign,nonatomic) double courseOnRoad;                           //@synthesize courseOnRoad=_courseOnRoad - In the implementation block
@property (assign,nonatomic) double distanceFromRoad;                       //@synthesize distanceFromRoad=_distanceFromRoad - In the implementation block
@property (assign,nonatomic) double roadWidth;                              //@synthesize roadWidth=_roadWidth - In the implementation block
@property (assign,nonatomic) double distanceFromJunction;                   //@synthesize distanceFromJunction=_distanceFromJunction - In the implementation block
@property (assign,nonatomic) double junctionRadius;                         //@synthesize junctionRadius=_junctionRadius - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE74* roadFeature;                //@synthesize roadFeature=_roadFeature - In the implementation block
-(void)dealloc;
-(double)roadWidth;
-(double)distanceFromRoad;
-(double)courseOnRoad;
-(SCD_Struct_GE32)coordinateOnRoad;
-(void)setDistanceFromRoad:(double)arg1 ;
-(double)distanceFromJunction;
-(double)junctionRadius;
-(NSString *)roadName;
-(void)setRoadName:(NSString *)arg1 ;
-(id)initWithCoordinateOnRoad:(SCD_Struct_GE32)arg1 courseOnRoad:(double)arg2 ;
-(void)setRoadFeature:(SCD_Struct_GE74*)arg1 ;
-(SCD_Struct_GE74*)roadFeature;
-(void)setCoordinateOnRoad:(SCD_Struct_GE32)arg1 ;
-(void)setCourseOnRoad:(double)arg1 ;
-(void)setRoadWidth:(double)arg1 ;
-(void)setDistanceFromJunction:(double)arg1 ;
-(void)setJunctionRadius:(double)arg1 ;
@end

