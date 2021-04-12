/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class VNPoint;

@interface VNVector : NSObject <NSCopying, NSSecureCoding> {

	VNPoint* _vectorProjections;

}

@property (readonly) double x; 
@property (readonly) double y; 
@property (readonly) double r; 
@property (readonly) double theta; 
@property (readonly) double length; 
@property (readonly) double squaredLength; 
+(BOOL)supportsSecureCoding;
+(id)zeroVector;
+(id)unitVectorForVector:(id)arg1 ;
+(id)vectorByMultiplyingVector:(id)arg1 byScalar:(double)arg2 ;
+(id)vectorByAddingVector:(id)arg1 toVector:(id)arg2 ;
+(id)vectorBySubtractingVector:(id)arg1 fromVector:(id)arg2 ;
+(double)dotProductOfVector:(id)arg1 vector:(id)arg2 ;
-(double)r;
-(double)x;
-(id)init;
-(double)y;
-(double)theta;
-(void)encodeWithCoder:(id)arg1 ;
-(double)length;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithR:(double)arg1 theta:(double)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithVectorHead:(id)arg1 tail:(id)arg2 ;
-(id)initWithXComponent:(double)arg1 yComponent:(double)arg2 ;
-(double)squaredLength;
-(BOOL)isEqual:(id)arg1 ;
@end

