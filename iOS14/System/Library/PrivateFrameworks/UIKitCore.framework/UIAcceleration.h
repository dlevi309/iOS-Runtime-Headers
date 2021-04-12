/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)x;
-(double)z;
-(void)setX:(double)arg1 ;
-(void)setY:(double)arg1 ;
-(double)y;
-(void)setZ:(double)arg1 ;
-(double)timestamp;
-(id)description;
-(void)setTimestamp:(double)arg1 ;
@end

