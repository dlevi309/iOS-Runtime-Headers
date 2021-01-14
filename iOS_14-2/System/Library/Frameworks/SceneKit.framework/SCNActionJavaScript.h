/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNAction.h>

@class NSString;

@interface SCNActionJavaScript : SCNAction {

	NSString* _script;

}
+(BOOL)supportsSecureCoding;
+(id)javaScriptActionWithDuration:(double)arg1 script:(id)arg2 ;
-(id)parameters;
-(id)initWithString:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isCustom;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)reversedAction;
@end

