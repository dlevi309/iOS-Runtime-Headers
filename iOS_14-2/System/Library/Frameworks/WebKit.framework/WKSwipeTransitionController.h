/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/_UINavigationInteractiveTransitionBaseDelegate.h>

@class NSString;

@interface WKSwipeTransitionController : NSObject <_UINavigationInteractiveTransitionBaseDelegate> {

	ViewGestureController* _gestureController;
	RetainPtr<_UINavigationInteractiveTransitionBase>* _backTransitionController;
	RetainPtr<_UINavigationInteractiveTransitionBase>* _forwardTransitionController;
	WeakObjCPtr<UIView> _gestureRecognizerView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldBeginInteractiveTransition:(id)arg1 ;
-(BOOL)interactiveTransition:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3 ;
-(BOOL)isNavigationSwipeGestureRecognizer:(id)arg1 ;
-(void)startInteractiveTransition:(id)arg1 ;
-(int)directionForTransition:(id)arg1 ;
-(id)transitionForDirection:(int)arg1 ;
-(void)invalidate;
-(id)gestureRecognizerForInteractiveTransition:(id)arg1 WithTarget:(id)arg2 action:(SEL)arg3 ;
-(BOOL)interactiveTransition:(id)arg1 gestureRecognizer:(id)arg2 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg3 ;
-(id)initWithViewGestureController:(ViewGestureController*)arg1 gestureRecognizerView:(id)arg2 ;
@end

