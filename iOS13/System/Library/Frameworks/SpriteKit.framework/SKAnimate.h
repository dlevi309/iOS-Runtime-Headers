/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKAction.h>

@class NSArray;

@interface SKAnimate : SKAction {

	SKCAnimate* _mycaction;
	NSArray* _textures;

}

@property (assign,nonatomic) double timePerFrame; 
+(BOOL)supportsSecureCoding;
+(id)animateWithTextures:(id)arg1 timePerFrame:(double)arg2 resize:(BOOL)arg3 restore:(BOOL)arg4 ;
+(id)animateWithNormalTextures:(id)arg1 timePerFrame:(double)arg2 resize:(BOOL)arg3 restore:(BOOL)arg4 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(id)reversedAction;
-(double)timePerFrame;
-(void)setTimePerFrame:(double)arg1 ;
@end

