/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)finished;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isCustom;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)reversedAction;
-(void)setupWithActions:(id)arg1 ;
@end

