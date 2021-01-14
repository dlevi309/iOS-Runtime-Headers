/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKConstraint.h>

@class SKRange;

@interface SKPositionConstraint : SKConstraint {

	SKRange* _xRange;
	SKRange* _yRange;

}

@property (copy) SKRange * xRange;              //@synthesize xRange=_xRange - In the implementation block
@property (copy) SKRange * yRange;              //@synthesize yRange=_yRange - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)constraintWithXRange:(id)arg1 ;
+(id)constraintWithYRange:(id)arg1 ;
+(id)constraintWithXRange:(id)arg1 YRange:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(SKRange *)xRange;
-(SKRange *)yRange;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToPositionConstraint:(id)arg1 ;
-(void)setXRange:(SKRange *)arg1 ;
-(void)setYRange:(SKRange *)arg1 ;
-(id)initWithXRange:(id)arg1 YRange:(id)arg2 ;
@end

