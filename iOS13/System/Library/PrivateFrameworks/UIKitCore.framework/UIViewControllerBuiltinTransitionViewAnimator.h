/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol UIViewControllerContextTransitioning;
@class UIView, NSString;

@interface UIViewControllerBuiltinTransitionViewAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	id<UIViewControllerContextTransitioning> _transitionContext;
	BOOL _removeFromView;
	int _transition;
	id _delegate;
	UIView* _toView;
	UIView* _fromView;

}

@property (assign,nonatomic,__weak) id delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIView * toView;                //@synthesize toView=_toView - In the implementation block
@property (assign,nonatomic,__weak) UIView * fromView;              //@synthesize fromView=_fromView - In the implementation block
@property (assign,nonatomic) BOOL removeFromView;                   //@synthesize removeFromView=_removeFromView - In the implementation block
@property (assign,nonatomic) int transition;                        //@synthesize transition=_transition - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(int)transition;
-(id)initWithTransition:(int)arg1 ;
-(double)durationForTransition:(int)arg1 ;
-(void)transitionViewDidStart:(id)arg1 ;
-(void)setTransition:(int)arg1 ;
-(BOOL)transitionViewShouldUseViewControllerCallbacks;
-(void)transitionView:(id)arg1 startCustomTransitionWithDuration:(double)arg2 ;
-(CGPoint)transitionView:(id)arg1 endOriginForFromView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(CGPoint)arg4 ;
-(CGPoint)_adjustOrigin:(CGPoint)arg1 givenOtherOrigin:(CGPoint)arg2 forTransition:(int)arg3 ;
-(CGPoint)transitionView:(id)arg1 beginOriginForToView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(CGPoint)arg4 ;
-(CGPoint)transitionView:(id)arg1 endOriginForToView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(CGPoint)arg4 ;
-(void)_prepareKeyboardForTransition:(int)arg1 fromView:(id)arg2 ;
-(void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3 removeFromView:(BOOL)arg4 ;
-(UIView *)toView;
-(void)setToView:(UIView *)arg1 ;
-(UIView *)fromView;
-(void)setFromView:(UIView *)arg1 ;
-(BOOL)removeFromView;
-(void)setRemoveFromView:(BOOL)arg1 ;
@end

