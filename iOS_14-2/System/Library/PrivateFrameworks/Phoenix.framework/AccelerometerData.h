/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Phoenix.framework/Phoenix
*/


#import <Phoenix/Phoenix-Structs.h>
@interface AccelerometerData : NSObject {

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
-(id)initWithData:(SCD_Struct_Ac1)arg1 timestamp:(double)arg2 ;
@end

