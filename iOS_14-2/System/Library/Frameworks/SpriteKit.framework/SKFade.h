/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)fadeAlphaTo:(double)arg1 duration:(double)arg2 ;
+(id)fadeAlphaBy:(double)arg1 duration:(double)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)reversedAction;
@end

