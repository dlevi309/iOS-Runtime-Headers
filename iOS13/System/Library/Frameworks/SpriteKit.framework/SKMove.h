/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKAction.h>

@interface SKMove : SKAction {

	SKCMove* _mycaction;

}
+(BOOL)supportsSecureCoding;
+(id)moveBy:(CGPoint)arg1 duration:(double)arg2 ;
+(id)moveTo:(CGPoint)arg1 duration:(double)arg2 ;
+(id)moveByX:(double)arg1 y:(double)arg2 duration:(double)arg3 ;
+(id)moveToX:(double)arg1 duration:(double)arg2 ;
+(id)moveToY:(double)arg1 duration:(double)arg2 ;
+(id)moveToX:(double)arg1 y:(double)arg2 duration:(double)arg3 ;
+(id)moveByX:(double)arg1 duration:(double)arg2 ;
+(id)moveByY:(double)arg1 duration:(double)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)reversedAction;
@end

