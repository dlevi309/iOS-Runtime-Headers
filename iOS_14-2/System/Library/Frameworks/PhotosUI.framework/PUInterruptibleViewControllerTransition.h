/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUInterruptibleViewControllerTransition <NSObject>
@property (getter=isTransitionPaused,nonatomic,readonly) BOOL transitionPaused; 
@required
-(void)resumeTransition:(BOOL)arg1;
-(void)pauseTransition;
-(void)updatePausedTransitionWithProgress:(double)arg1 interactionProgress:(double)arg2;
-(BOOL)isTransitionPaused;

@end

