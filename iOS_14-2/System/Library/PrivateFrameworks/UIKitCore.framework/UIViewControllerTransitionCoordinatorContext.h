/*
* Generated on Thursday, January 14, 2021 at 2:20:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIView;


@protocol UIViewControllerTransitionCoordinatorContext <NSObject>
@property (getter=isAnimated,nonatomic,readonly) BOOL animated; 
@property (nonatomic,readonly) long long presentationStyle; 
@property (nonatomic,readonly) BOOL initiallyInteractive; 
@property (nonatomic,readonly) BOOL isInterruptible; 
@property (getter=isInteractive,nonatomic,readonly) BOOL interactive; 
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (nonatomic,readonly) double transitionDuration; 
@property (nonatomic,readonly) double percentComplete; 
@property (nonatomic,readonly) double completionVelocity; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) UIView * containerView; 
@property (nonatomic,readonly) CGAffineTransform targetTransform; 
@required
-(BOOL)isAnimated;
-(long long)presentationStyle;
-(double)completionVelocity;
-(id)viewForKey:(id)arg1;
-(id)viewControllerForKey:(id)arg1;
-(CGAffineTransform)targetTransform;
-(BOOL)initiallyInteractive;
-(double)transitionDuration;
-(BOOL)isInterruptible;
-(long long)completionCurve;
-(BOOL)isInteractive;
-(UIView *)containerView;
-(double)percentComplete;
-(BOOL)isCancelled;

@end

