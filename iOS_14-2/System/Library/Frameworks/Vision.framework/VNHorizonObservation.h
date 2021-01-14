/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNObservation.h>

@interface VNHorizonObservation : VNObservation {

	CGAffineTransform _transform;
	double _angle;

}

@property (assign,nonatomic) CGAffineTransform transform;              //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) double angle;                             //@synthesize angle=_angle - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)angle;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transform;
-(void)setAngle:(double)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

