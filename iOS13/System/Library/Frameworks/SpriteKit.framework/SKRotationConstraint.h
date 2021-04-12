/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKConstraint.h>

@class SKRange;

@interface SKRotationConstraint : SKConstraint {

	SKRange* _zRotationRange;

}

@property (copy) SKRange * zRotationRange;              //@synthesize zRotationRange=_zRotationRange - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)constraintWithZRotationRange:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SKRange *)zRotationRange;
-(BOOL)isEqualToRotationConstraint:(id)arg1 ;
-(void)setZRotationRange:(SKRange *)arg1 ;
-(id)initWithZRotationRange:(id)arg1 ;
@end

