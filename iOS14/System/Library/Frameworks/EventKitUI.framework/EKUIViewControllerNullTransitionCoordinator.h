/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIViewControllerTransitionCoordinator.h>

@class UIView, NSString;

@interface EKUIViewControllerNullTransitionCoordinator : NSObject <UIViewControllerTransitionCoordinator>

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isAnimated;
-(long long)presentationStyle;
-(void)notifyWhenInteractionChangesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)animateAlongsideTransition:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(double)completionVelocity;
-(id)viewForKey:(id)arg1 ;
-(id)viewControllerForKey:(id)arg1 ;
-(CGAffineTransform)targetTransform;
-(BOOL)initiallyInteractive;
-(double)transitionDuration;
-(BOOL)animateAlongsideTransitionInView:(id)arg1 animation:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)notifyWhenInteractionEndsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isInterruptible;
-(long long)completionCurve;
-(BOOL)isInteractive;
-(UIView *)containerView;
-(double)percentComplete;
-(BOOL)isCancelled;
@end

