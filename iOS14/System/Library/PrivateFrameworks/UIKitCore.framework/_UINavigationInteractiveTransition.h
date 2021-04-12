/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UINavigationInteractiveTransitionBase.h>

@class _UIParallaxTransitionPanGestureRecognizer, UIScreenEdgePanGestureRecognizer;

@interface _UINavigationInteractiveTransition : _UINavigationInteractiveTransitionBase {

	_UIParallaxTransitionPanGestureRecognizer* _edgePanRecognizer;

}

@property (nonatomic,readonly) UIScreenEdgePanGestureRecognizer * screenEdgePanGestureRecognizer; 
-(void)_setShouldReverseLayoutDirection:(BOOL)arg1 ;
-(void)_configureNavigationGesture;
-(void)setNotInteractiveTransition;
-(void)startInteractiveTransition;
-(UIScreenEdgePanGestureRecognizer *)screenEdgePanGestureRecognizer;
-(id)initWithViewController:(id)arg1 animator:(id)arg2 ;
-(BOOL)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(id)gestureRecognizerView;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)_gestureRecognizer:(id)arg1 shouldReceiveEvent:(id)arg2 ;
@end

