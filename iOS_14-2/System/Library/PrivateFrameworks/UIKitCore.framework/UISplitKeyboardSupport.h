/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)dock;
-(BOOL)isSplitting;
-(BOOL)isTranslating;
-(void)undock;
-(void)updateProgress:(double)arg1 startHeight:(double)arg2 endHeight:(double)arg3 ;
-(void)translateToPlacement:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updatedController;
-(void)_disconnectingController:(id)arg1 ;
-(void)_connectController:(id)arg1 ;
-(void)translateDetected:(id)arg1 ;
-(void)_updateBounceAnimation:(id)arg1 ;
-(BOOL)generateSplitNotificationForNewPlacement:(id)arg1 ;
-(void)cancelBounceAnimation;
-(void)translateToPlacement:(id)arg1 quietly:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)invalidateDisplayLink;
-(void)bounceAnimationDidFinish;
-(void)transitionDidFinish:(BOOL)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)completedPlacementFrom:(id)arg1 to:(id)arg2 forController:(id)arg3 ;
-(void)prepareForTransition;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)cancelGestureRecognizers;
-(void)finishTransitionWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)updatedControllerApplicator:(id)arg1 ;
-(void)willPerformPlacementFrom:(id)arg1 to:(id)arg2 forController:(id)arg3 ;
-(BOOL)startedPlacementFrom:(id)arg1 to:(id)arg2 forController:(id)arg3 ;
-(void)dealloc;
@end

