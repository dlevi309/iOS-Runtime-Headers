/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class UIWindow, NSString;

@interface _UIWindowAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _shouldCrossfade;
	UIWindow* _window;

}

@property (assign,nonatomic) UIWindow * window;                     //@synthesize window=_window - In the implementation block
@property (assign,nonatomic) BOOL shouldCrossfade;                  //@synthesize shouldCrossfade=_shouldCrossfade - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)animationControllerWithWindow:(id)arg1 ;
-(UIWindow *)window;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(BOOL)shouldCrossfade;
-(void)setWindow:(UIWindow *)arg1 ;
-(id)initWithWindow:(id)arg1 ;
-(void)_performCrossfadeAnimationWithContext:(id)arg1 windowGeometryUpdatingBlock:(/*^block*/id)arg2 ;
-(void)_performLayoutAnimationWithContext:(id)arg1 windowGeometryUpdatingBlock:(/*^block*/id)arg2 ;
-(void)setShouldCrossfade:(BOOL)arg1 ;
@end

