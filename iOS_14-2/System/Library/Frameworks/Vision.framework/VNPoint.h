/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface VNPoint : NSObject <NSCopying, NSSecureCoding> {

	double _x;
	double _y;

}

@property (readonly) CGPoint location; 
@property (x,readonly) double x;                    //@synthesize x=_x - In the implementation block
@property (y,readonly) double y;                    //@synthesize y=_y - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)zeroPoint;
+(id)pointByApplyingVector:(id)arg1 toPoint:(id)arg2 ;
+(double)distanceBetweenPoint:(id)arg1 point:(id)arg2 ;
-(double)x;
-(id)init;
-(double)y;
-(CGPoint)location;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithLocation:(CGPoint)arg1 ;
-(id)description;
-(id)initWithX:(double)arg1 y:(double)arg2 ;
-(double)distanceToPoint:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

