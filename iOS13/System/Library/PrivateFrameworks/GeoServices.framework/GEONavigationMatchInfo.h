/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@interface GEONavigationMatchInfo : NSObject {

	double routeMatchScore;
	double distanceFromRoute;
	double maxDistance;
	double distanceMatchScore;
	double distanceWeight;
	double courseDelta;
	double maxCourseDelta;
	double courseMatchScore;
	double courseWeight;
	double roadWidthOnRoute;
	double distanceFromRoad;
	double roadCourseDelta;
	double distanceFromNearestJunction;

}

@property (assign,nonatomic) double routeMatchScore; 
@property (assign,nonatomic) double distanceFromRoute; 
@property (assign,nonatomic) double maxDistance; 
@property (assign,nonatomic) double distanceMatchScore; 
@property (assign,nonatomic) double distanceWeight; 
@property (assign,nonatomic) double courseDelta; 
@property (assign,nonatomic) double maxCourseDelta; 
@property (assign,nonatomic) double courseMatchScore; 
@property (assign,nonatomic) double courseWeight; 
@property (assign,nonatomic) double roadWidthOnRoute; 
@property (assign,nonatomic) double distanceFromRoad; 
@property (assign,nonatomic) double roadCourseDelta; 
@property (assign,nonatomic) double distanceFromNearestJunction; 
-(id)description;
-(void)setDistanceFromRoute:(double)arg1 ;
-(double)distanceFromRoute;
-(double)distanceFromRoad;
-(void)setDistanceFromRoad:(double)arg1 ;
-(void)setRoadCourseDelta:(double)arg1 ;
-(void)setDistanceFromNearestJunction:(double)arg1 ;
-(void)setRouteMatchScore:(double)arg1 ;
-(double)maxDistance;
-(void)setMaxDistance:(double)arg1 ;
-(double)distanceMatchScore;
-(void)setDistanceMatchScore:(double)arg1 ;
-(double)distanceWeight;
-(void)setDistanceWeight:(double)arg1 ;
-(double)courseDelta;
-(void)setCourseDelta:(double)arg1 ;
-(double)maxCourseDelta;
-(void)setMaxCourseDelta:(double)arg1 ;
-(double)courseMatchScore;
-(void)setCourseMatchScore:(double)arg1 ;
-(double)courseWeight;
-(void)setCourseWeight:(double)arg1 ;
-(void)setRoadWidthOnRoute:(double)arg1 ;
-(double)routeMatchScore;
-(double)roadWidthOnRoute;
-(double)roadCourseDelta;
-(double)distanceFromNearestJunction;
@end

