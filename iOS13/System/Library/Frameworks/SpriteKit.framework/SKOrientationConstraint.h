/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKConstraint.h>

@class SKNode, SKRange;

@interface SKOrientationConstraint : SKConstraint {

	SKNode* _node;
	SKRange* _offset;
	CGPoint _point;

}

@property (__weak) SKNode * node;               //@synthesize node=_node - In the implementation block
@property (assign) CGPoint point;               //@synthesize point=_point - In the implementation block
@property (copy) SKRange * offset;              //@synthesize offset=_offset - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)constraintOrientingToPoint:(CGPoint)arg1 inNode:(id)arg2 offset:(id)arg3 ;
+(id)constraintOrientingToNode:(id)arg1 offset:(id)arg2 ;
+(id)constraintOrientingToPoint:(CGPoint)arg1 offset:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SKNode *)node;
-(void)setOffset:(SKRange *)arg1 ;
-(CGPoint)point;
-(void)setPoint:(CGPoint)arg1 ;
-(SKRange *)offset;
-(void)setNode:(SKNode *)arg1 ;
-(BOOL)isEqualToOrientationConstraint:(id)arg1 ;
-(id)initWithNode:(id)arg1 point:(CGPoint)arg2 offset:(id)arg3 ;
@end

