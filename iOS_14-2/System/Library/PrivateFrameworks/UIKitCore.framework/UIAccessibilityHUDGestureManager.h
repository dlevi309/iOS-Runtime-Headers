/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIGestureRecognizerDelegatePrivate.h>

@protocol UIAccessibilityHUDGestureDelegate;
@class UIView, UIViewController, _UIAccessibilityHUDLongPressGestureRecognizer, _UIAccessibilityHUDGateGestureRecognizer, NSMutableArray, UIGestureRecognizer, NSString;

@interface UIAccessibilityHUDGestureManager : NSObject <UIGestureRecognizerDelegatePrivate> {

	UIView* _view;
	id<UIAccessibilityHUDGestureDelegate> _delegate;
	UIViewController* _viewControllerDisplayingHUD;
	_UIAccessibilityHUDLongPressGestureRecognizer* _recognizer;
	_UIAccessibilityHUDGateGestureRecognizer* _gateRecognizer;
	NSMutableArray* _subscribedConcurrentGestureRecognizers;
	BOOL _delegateDirectlyShowsHUD;
	BOOL _isInvalidated;

}

@property (nonatomic,readonly) UIGestureRecognizer * _recognizer; 
@property (nonatomic,__weak,readonly) UIView * view;                           //@synthesize view=_view - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_invalidate;
-(id)initWithView:(id)arg1 delegate:(id)arg2 ;
-(BOOL)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)_backOff;
-(void)_gestureRecognizerChanged:(id)arg1 ;
-(id)_bestViewControllerForView;
-(void)_openGate;
-(void)_clearButtonItemGestureSubscriptions;
-(void)_setRecognizersEnabled:(BOOL)arg1 ;
-(UIView *)view;
-(void)_dismissAccessibilityHUD;
-(void)_showAccessibilityHUDItem:(id)arg1 ;
-(id)_subscribedConcurrentGestureRecognizers;
-(UIGestureRecognizer *)_recognizer;
-(void)_didToggleLargeContentViewer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)_concurrentGestureRecognizerFired:(id)arg1 ;
-(void)dealloc;
@end

