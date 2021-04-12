/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKeyboardMotionSupport.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIKeyboardKeyplaneTransitionDelegate.h>

@class UIPanGestureRecognizer, CADisplayLink, NSString;

@interface UISplitKeyboardSupport : UIKeyboardMotionSupport <UIGestureRecognizerDelegate, UIKeyboardKeyplaneTransitionDelegate> {

	UIPanGestureRecognizer* _singleFingerPanRecognizer;
	UIPanGestureRecognizer* _twoFingerPanRecognizer;
	BOOL _isTranslating;
	BOOL _isSplitting;
	BOOL _splitLockState;
	CGPoint _targetTranslation;
	CGPoint _initialTranslation;
	CGPoint _translationVelocity;
	CADisplayLink* _displayLink;
	double _lastBounceTime;
	double _lastTranslationNotificationTime;
	/*^block*/id _bounceCompletionBlock;

}

@property (nonatomic,readonly) BOOL isTranslating; 
@property (nonatomic,readonly) BOOL isSplitting; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)transitionDidFinish:(BOOL)arg1 ;
-(BOOL)isSplitting;
-(BOOL)isTranslating;
-(void)prepareForTransition;
-(void)finishTransitionWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelGestureRecognizers;
-(void)updatedControllerApplicator:(id)arg1 ;
-(void)updateProgress:(double)arg1 startHeight:(double)arg2 endHeight:(double)arg3 ;
-(void)willPerformPlacementFrom:(id)arg1 to:(id)arg2 forController:(id)arg3 ;
-(BOOL)startedPlacementFrom:(id)arg1 to:(id)arg2 forController:(id)arg3 ;
-(BOOL)completedPlacementFrom:(id)arg1 to:(id)arg2 forController:(id)arg3 ;
-(void)translateToPlacement:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updatedController;
-(void)_disconnectingController:(id)arg1 ;
-(void)_connectController:(id)arg1 ;
-(void)translateDetected:(id)arg1 ;
-(BOOL)generateSplitNotificationForNewPlacement:(id)arg1 ;
-(void)cancelBounceAnimation;
-(void)translateToPlacement:(id)arg1 quietly:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)invalidateDisplayLink;
-(void)_updateBounceAnimation:(id)arg1 ;
-(void)undock;
-(void)bounceAnimationDidFinish;
-(void)dock;
@end

