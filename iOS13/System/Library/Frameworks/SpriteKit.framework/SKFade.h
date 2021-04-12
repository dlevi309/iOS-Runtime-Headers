/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKAction.h>

@interface SKFade : SKAction {

	SKCFade* _mycaction;

}
+(BOOL)supportsSecureCoding;
+(id)fadeInWithDuration:(double)arg1 ;
+(id)fadeOutWithDuration:(double)arg1 ;
+(id)fadeAlphaBy:(double)arg1 duration:(double)arg2 ;
+(id)fadeAlphaTo:(double)arg1 duration:(double)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)reversedAction;
@end

