/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKAction.h>

@interface SKRotate : SKAction {

	SKCRotate* _mycaction;

}
+(BOOL)supportsSecureCoding;
+(id)rotateByX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4 ;
+(id)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4 ;
+(id)rotateByAngle:(double)arg1 duration:(double)arg2 ;
+(id)rotateToAngle:(double)arg1 duration:(double)arg2 ;
+(id)rotateToAngle:(double)arg1 duration:(double)arg2 shortestUnitArc:(BOOL)arg3 ;
+(id)rotateByX:(double)arg1 duration:(double)arg2 ;
+(id)rotateToX:(double)arg1 duration:(double)arg2 ;
+(id)rotateByY:(double)arg1 duration:(double)arg2 ;
+(id)rotateToY:(double)arg1 duration:(double)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)reversedAction;
@end

