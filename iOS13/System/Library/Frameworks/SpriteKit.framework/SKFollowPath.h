/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKAction.h>

@interface SKFollowPath : SKAction {

	SKCFollowPath* _mycaction;
	CGPathRef _cgPath;

}
+(BOOL)supportsSecureCoding;
+(id)followPath:(CGPathRef)arg1 duration:(double)arg2 ;
+(id)followPath:(CGPathRef)arg1 asOffset:(BOOL)arg2 orientToPath:(BOOL)arg3 duration:(double)arg4 ;
+(id)followPath:(CGPathRef)arg1 speed:(double)arg2 ;
+(id)followPath:(CGPathRef)arg1 asOffset:(BOOL)arg2 orientToPath:(BOOL)arg3 speed:(double)arg4 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)reversedAction;
@end

