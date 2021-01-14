/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)animateTransition:(id)arg1 ;
-(BOOL)shouldCrossfade;
-(double)transitionDuration:(id)arg1 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)setShouldCrossfade:(BOOL)arg1 ;
-(void)_performCrossfadeAnimationWithContext:(id)arg1 windowGeometryUpdatingBlock:(/*^block*/id)arg2 ;
-(id)initWithWindow:(id)arg1 ;
-(void)_performLayoutAnimationWithContext:(id)arg1 windowGeometryUpdatingBlock:(/*^block*/id)arg2 ;
-(UIWindow *)window;
@end

