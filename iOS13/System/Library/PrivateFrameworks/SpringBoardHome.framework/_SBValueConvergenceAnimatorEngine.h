/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/


@class NSMutableSet, CADisplayLink;

@interface _SBValueConvergenceAnimatorEngine : NSObject {

	NSMutableSet* _animators;
	CADisplayLink* _displayLink;
	NSMutableSet* _finishedAnimators;

}
+(id)sharedEngine;
-(id)init;
-(void)_updateDisplayLink;
-(void)_onDisplayLink:(id)arg1 ;
-(void)updateAnimator:(id)arg1 ;
-(void)startAnimator:(id)arg1 ;
-(void)stopAnimator:(id)arg1 ;
-(BOOL)isRunningAnimator:(id)arg1 ;
-(void)_ensureDisplayLink;
-(void)_tearDownDisplayLink;
@end

