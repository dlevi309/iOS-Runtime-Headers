/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIViewControllerTransitionCoordinator.h>

@class NSString, UIView;

@interface EKUIViewControllerNullTransitionCoordinator : NSObject <UIViewControllerTransitionCoordinator>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
-(BOOL)isCancelled;
-(BOOL)isInterruptible;
-(UIView *)containerView;
-(BOOL)animateAlongsideTransition:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)presentationStyle;
-(BOOL)isInteractive;
-(id)viewControllerForKey:(id)arg1 ;
-(double)percentComplete;
-(long long)completionCurve;
-(BOOL)isAnimated;
-(id)viewForKey:(id)arg1 ;
-(double)transitionDuration;
-(void)notifyWhenInteractionChangesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)animateAlongsideTransitionInView:(id)arg1 animation:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)notifyWhenInteractionEndsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)initiallyInteractive;
-(CGAffineTransform)targetTransform;
-(double)completionVelocity;
@end

