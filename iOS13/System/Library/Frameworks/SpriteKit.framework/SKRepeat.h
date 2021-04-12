/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKAction.h>

@class SKAction;

@interface SKRepeat : SKAction {

	SKCRepeat* _mycaction;
	SKAction* _repeatedAction;

}
+(BOOL)supportsSecureCoding;
+(id)repeatAction:(id)arg1 count:(unsigned long long)arg2 ;
+(id)repeatActionForever:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)reversedAction;
-(id)subactions;
@end

