/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@interface UIAcceleration : NSObject {

	double _timestamp;
	double _x;
	double _y;
	double _z;

}

@property (assign,nonatomic) double timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,x,nonatomic) double x;                    //@synthesize x=_x - In the implementation block
@property (assign,y,nonatomic) double y;                    //@synthesize y=_y - In the implementation block
@property (assign,z,nonatomic) double z;                    //@synthesize z=_z - In the implementation block
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(double)x;
-(double)y;
-(double)z;
-(void)setX:(double)arg1 ;
-(void)setY:(double)arg1 ;
-(void)setZ:(double)arg1 ;
@end

