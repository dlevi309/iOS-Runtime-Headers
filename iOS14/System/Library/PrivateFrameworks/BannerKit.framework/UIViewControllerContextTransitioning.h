/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
*/

@class UIView;


@protocol UIViewControllerContextTransitioning <NSObject>
@property (nonatomic,readonly) UIView * containerView; 
@property (getter=isAnimated,nonatomic,readonly) BOOL animated; 
@property (getter=isInteractive,nonatomic,readonly) BOOL interactive; 
@property (nonatomic,readonly) BOOL transitionWasCancelled; 
@property (nonatomic,readonly) long long presentationStyle; 
@property (nonatomic,readonly) CGAffineTransform targetTransform; 
@required
-(void)completeTransition:(BOOL)arg1;
-(CGRect*)finalFrameForViewController:(id)arg1;
-(BOOL)transitionWasCancelled;
-(BOOL)isAnimated;
-(long long)presentationStyle;
-(id)viewForKey:(id)arg1;
-(id)viewControllerForKey:(id)arg1;
-(CGAffineTransform)targetTransform;
-(void)cancelInteractiveTransition;
-(BOOL)isInteractive;
-(UIView *)containerView;
-(void)updateInteractiveTransition:(double)arg1;
-(void)finishInteractiveTransition;
-(CGRect*)initialFrameForViewController:(id)arg1;
-(void)pauseInteractiveTransition;

@end

