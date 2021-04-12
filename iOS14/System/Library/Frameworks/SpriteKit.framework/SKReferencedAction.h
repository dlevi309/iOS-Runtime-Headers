/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDuration:(double)arg1 ;
-(id)init;
-(void)setTimingFunction:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimingMode:(long long)arg1 ;
-(id)reversedAction;
-(id)subactions;
-(void)_ensureReferencedAction;
@end

