/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKConstraint.h>

@class SKRange;

@interface SKScaleConstraint : SKConstraint {

	SKRange* _xRange;
	SKRange* _yRange;

}

@property (copy) SKRange * xRange;              //@synthesize xRange=_xRange - In the implementation block
@property (copy) SKRange * yRange;              //@synthesize yRange=_yRange - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)constraintWithXRange:(id)arg1 ;
+(id)constraintWithYRange:(id)arg1 ;
+(id)constraintWithXRange:(id)arg1 YRange:(id)arg2 ;
+(id)constraintWithScaleRange:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SKRange *)xRange;
-(SKRange *)yRange;
-(BOOL)isEqualToScaleConstraint:(id)arg1 ;
-(void)setXRange:(SKRange *)arg1 ;
-(void)setYRange:(SKRange *)arg1 ;
-(id)initWithXRange:(id)arg1 YRange:(id)arg2 ;
@end

