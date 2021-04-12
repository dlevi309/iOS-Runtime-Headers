/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNAction.h>

@class NSArray;

@interface SCNActionGroup : SCNAction {

	void* _mycaction;
	NSArray* _actions;

}
+(BOOL)supportsSecureCoding;
+(id)groupWithActions:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)finished;
-(BOOL)isCustom;
-(id)reversedAction;
-(void)setupWithActions:(id)arg1 ;
@end

