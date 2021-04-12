/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class VNPoint;

@interface VNCircle : NSObject <NSCopying, NSSecureCoding> {

	VNPoint* _center;
	double _radius;

}

@property (readonly) VNPoint * center;              //@synthesize center=_center - In the implementation block
@property (readonly) double radius;                 //@synthesize radius=_radius - In the implementation block
@property (readonly) double diameter; 
+(BOOL)supportsSecureCoding;
+(id)zeroCircle;
-(VNPoint *)center;
-(id)init;
-(id)initWithCenter:(id)arg1 radius:(double)arg2 ;
-(id)initWithCenter:(id)arg1 diameter:(double)arg2 ;
-(BOOL)containsPoint:(id)arg1 inCircumferentialRingOfWidth:(double)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)radius;
-(id)description;
-(double)diameter;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)containsPoint:(id)arg1 ;
@end

