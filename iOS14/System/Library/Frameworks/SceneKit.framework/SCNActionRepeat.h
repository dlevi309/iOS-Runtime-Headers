/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNAction.h>

@class SCNAction;

@interface SCNActionRepeat : SCNAction {

	SCNCActionRepeat* _mycaction;
	SCNAction* _repeatedAction;

}
+(BOOL)supportsSecureCoding;
+(id)repeatAction:(id)arg1 count:(unsigned long long)arg2 ;
+(id)repeatActionForever:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isCustom;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)reversedAction;
@end

