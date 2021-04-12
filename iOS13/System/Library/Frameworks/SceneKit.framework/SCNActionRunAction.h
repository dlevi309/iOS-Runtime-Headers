/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNAction.h>

@class SCNAction, NSString;

@interface SCNActionRunAction : SCNAction {

	SCNAction* _action;
	NSString* _subSpriteKey;
	NSString* _actionKey;
	BOOL _waitForKeyedAction;
	BOOL _runOnSubSprite;
	BOOL _fired;

}
+(id)runAction:(id)arg1 onFirstChildWithName:(id)arg2 ;
+(id)runAction:(id)arg1 afterActionWithKey:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isCustom;
-(id)reversedAction;
-(void)updateWithTarget:(id)arg1 forTime:(double)arg2 ;
-(void)willStartWithTarget:(id)arg1 atTime:(double)arg2 ;
@end

