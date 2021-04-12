/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNAction.h>

@interface SCNActionScale : SCNAction {

	SCNCActionScale* _mycaction;

}
+(BOOL)supportsSecureCoding;
+(id)scaleTo:(double)arg1 duration:(double)arg2 ;
+(id)scaleBy:(double)arg1 duration:(double)arg2 ;
-(id)parameters;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isRelative;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)reversedAction;
@end

