/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKAction.h>

@protocol NSObject;
@interface SKPerformSelector : SKAction {

	SEL _selector;
	id<NSObject> _weakTarget;
	id<NSObject> _strongTarget;

}
+(BOOL)supportsSecureCoding;
+(id)perfromSelector:(SEL)arg1 onTarget:(id)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)reversedAction;
-(void)updateWithTarget:(id)arg1 forTime:(double)arg2 ;
@end

