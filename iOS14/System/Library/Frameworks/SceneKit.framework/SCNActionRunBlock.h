/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNAction.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface SCNActionRunBlock : SCNAction {

	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _queue;

}
+(BOOL)supportsSecureCoding;
+(id)runBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isCustom;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)reversedAction;
-(void)updateWithTarget:(id)arg1 forTime:(double)arg2 ;
@end

