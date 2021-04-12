/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
*/


@interface ECEFCoordinate : NSObject {

	double _x;
	double _y;
	double _z;

}

@property (assign,x,nonatomic) double x;              //@synthesize x=_x - In the implementation block
@property (assign,y,nonatomic) double y;              //@synthesize y=_y - In the implementation block
@property (assign,z,nonatomic) double z;              //@synthesize z=_z - In the implementation block
+(id)fromLatLon:(id)arg1 ;
-(id)init;
-(double)x;
-(double)y;
-(double)z;
-(void)setX:(double)arg1 ;
-(void)setY:(double)arg1 ;
-(void)setZ:(double)arg1 ;
-(id)initWithX:(double)arg1 y:(double)arg2 z:(double)arg3 ;
-(id)initFromLatLon:(id)arg1 ;
@end

