/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/


@protocol OS_dispatch_group;
@class NSObject;

@interface CCUIAnimationRunner : NSObject {

	NSObject*<OS_dispatch_group> _previousAnimationGroup;

}
+(id)runner;
+(void)_runCAAnimationsInBatch:(id)arg1 animationGroup:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)_runC2AnimationsInBatch:(id)arg1 animationGroup:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)runAnimationBatch:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)additivelyRunAnimationBatch:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
@end

