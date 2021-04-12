/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNAction.h>

@interface SCNActionScale : SCNAction {

	SCNCActionScale* _mycaction;

}
+(BOOL)supportsSecureCoding;
+(id)scaleBy:(double)arg1 duration:(double)arg2 ;
+(id)scaleTo:(double)arg1 duration:(double)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)parameters;
-(BOOL)isRelative;
-(id)reversedAction;
@end

