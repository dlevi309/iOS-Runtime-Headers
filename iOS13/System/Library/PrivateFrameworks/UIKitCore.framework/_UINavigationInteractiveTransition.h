/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UINavigationInteractiveTransitionBase.h>

@class _UIParallaxTransitionPanGestureRecognizer, UIScreenEdgePanGestureRecognizer;

@interface _UINavigationInteractiveTransition : _UINavigationInteractiveTransitionBase {

	_UIParallaxTransitionPanGestureRecognizer* _edgePanRecognizer;

}

@property (nonatomic,readonly) UIScreenEdgePanGestureRecognizer * screenEdgePanGestureRecognizer; 
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(BOOL)_gestureRecognizer:(id)arg1 shouldReceiveEvent:(id)arg2 ;
-(void)startInteractiveTransition;
-(id)initWithViewController:(id)arg1 animator:(id)arg2 ;
-(void)_setShouldReverseLayoutDirection:(BOOL)arg1 ;
-(UIScreenEdgePanGestureRecognizer *)screenEdgePanGestureRecognizer;
-(void)setNotInteractiveTransition;
-(id)gestureRecognizerView;
-(void)_configureNavigationGesture;
@end

