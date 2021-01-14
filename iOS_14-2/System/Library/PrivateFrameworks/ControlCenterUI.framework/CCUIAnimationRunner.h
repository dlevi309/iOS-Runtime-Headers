/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/


@protocol OS_dispatch_group;
@class NSObject;

@interface CCUIAnimationRunner : NSObject {

	NSObject*<OS_dispatch_group> _previousAnimationGroup;

}
+(void)_runCAAnimationsInBatch:(id)arg1 animationGroup:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)_runC2AnimationsInBatch:(id)arg1 animationGroup:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)runner;
-(void)additivelyRunAnimationBatch:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)runAnimationBatch:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
@end

