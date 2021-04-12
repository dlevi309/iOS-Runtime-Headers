/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNAction.h>

@interface SCNActionFade : SCNAction {

	SCNCActionFade* _mycaction;

}
+(BOOL)supportsSecureCoding;
+(id)fadeInWithDuration:(double)arg1 ;
+(id)fadeOutWithDuration:(double)arg1 ;
+(id)fadeOpacityBy:(double)arg1 duration:(double)arg2 ;
+(id)fadeOpacityTo:(double)arg1 duration:(double)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)parameters;
-(id)reversedAction;
@end

