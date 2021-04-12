/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
*/


#import <CoreIndoor/CoreIndoor-Structs.h>
@interface ECEFCoordinate : NSObject {

	double _x;
	double _y;
	double _z;

}

@property (assign,x,nonatomic) double x;              //@synthesize x=_x - In the implementation block
@property (assign,y,nonatomic) double y;              //@synthesize y=_y - In the implementation block
@property (assign,z,nonatomic) double z;              //@synthesize z=_z - In the implementation block
+(id)fromLatLon:(id)arg1 ;
-(double)x;
-(double)z;
-(void)setX:(double)arg1 ;
-(void)setY:(double)arg1 ;
-(id)init;
-(double)y;
-(void)setZ:(double)arg1 ;
-(point_xy<double, boost::geometry::cs::cartesian>)toBoostEnuWithLatLonOrigin:(id)arg1 andEcefOrigin:(id)arg2 usingENU:(id)arg3 ;
-(id)initFromLatLon:(id)arg1 ;
-(void)setFromX:(double)arg1 y:(double)arg2 z:(double)arg3 ;
-(void)setFromLatLon:(id)arg1 ;
-(id)initWithX:(double)arg1 y:(double)arg2 z:(double)arg3 ;
@end

