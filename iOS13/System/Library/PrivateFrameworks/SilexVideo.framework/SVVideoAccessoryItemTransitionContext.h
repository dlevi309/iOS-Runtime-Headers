/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

@class UIView;


@protocol SVVideoAccessoryItemTransitionContext <NSObject>
@property (nonatomic,readonly) UIView * fromView; 
@property (nonatomic,readonly) UIView * toView; 
@property (nonatomic,readonly) UIView * containerView; 
@property (nonatomic,readonly) BOOL transitionWasCancelled; 
@required
-(UIView *)containerView;
-(BOOL)transitionWasCancelled;
-(void)completeTransition:(BOOL)arg1;
-(UIView *)toView;
-(UIView *)fromView;

@end

