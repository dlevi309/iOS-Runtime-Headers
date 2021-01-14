/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)reversedAction;
-(id)subactions;
@end

