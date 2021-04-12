/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNAction.h>

@interface SCNActionPlaySound : SCNAction {

	SCNCPlaySound* _mycaction;

}
+(BOOL)supportsSecureCoding;
+(id)playAudioSource:(id)arg1 waitForCompletion:(BOOL)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)parameters;
-(id)reversedAction;
-(void)_setupDuration;
@end

