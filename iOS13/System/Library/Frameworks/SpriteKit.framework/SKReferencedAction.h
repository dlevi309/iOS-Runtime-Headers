/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKAction.h>

@class SKAction, NSString;

@interface SKReferencedAction : SKAction {

	SKCReferencedAction* _mycaction;
	SKAction* _referencedAction;
	NSString* _referencedActionName;

}
+(BOOL)supportsSecureCoding;
+(id)referenceActionWithName:(id)arg1 duration:(double)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setTimingFunction:(/*^block*/id)arg1 ;
-(id)reversedAction;
-(void)setTimingMode:(long long)arg1 ;
-(id)subactions;
-(void)_ensureReferencedAction;
@end

