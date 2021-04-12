/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKitCore/_UISwipeDismissalGestureRecognizerDelegate.h>

@class _UISwipeDismissalGestureRecognizer, _UISwipeActionPanGestureRecognizer, _UIStatesFeedbackGenerator, UISwipeActionController, NSString;

@interface _UISwipeHandler : NSObject <UIGestureRecognizerDelegate, _UISwipeDismissalGestureRecognizerDelegate> {

	SCD_Struct_UI34 _flags;
	_UISwipeDismissalGestureRecognizer* _dismissalGestureRecognizer;
	_UISwipeActionPanGestureRecognizer* _swipeActionPanRecognizer;
	SCD_Struct_UI127 _currentSwipeConfig;
	unsigned long long _currentSwipeState;
	BOOL _resetSwipeWhileInitiating;
	double _initialTranslation;
	double _confirmationTranslationAdjustment;
	BOOL _active;
	_UIStatesFeedbackGenerator* _swipeFeedbackGenerator;
	UISwipeActionController* _swipeController;

}

@property (assign,nonatomic,__weak) UISwipeActionController * swipeController;                 //@synthesize swipeController=_swipeController - In the implementation block
@property (nonatomic,readonly) SCD_Struct_UI127 currentSwipeConfig; 
@property (nonatomic,readonly) unsigned long long currentSwipeState;                           //@synthesize currentSwipeState=_currentSwipeState - In the implementation block
@property (nonatomic,retain) _UIStatesFeedbackGenerator * swipeFeedbackGenerator;              //@synthesize swipeFeedbackGenerator=_swipeFeedbackGenerator - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                      //@synthesize active=_active - In the implementation block
@property (getter=isInteracting,nonatomic,readonly) BOOL interacting; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)gestureRecognizerShouldDismissForTouchUp:(id)arg1 ;
-(BOOL)gestureRecognizerShouldDismissForTouchDown:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(void)_swipeRecognizerBegan:(id)arg1 ;
-(void)_swipeRecognizerDidRecognize:(id)arg1 ;
-(BOOL)isActive;
-(unsigned long long)_directionForGestureRecognizer:(id)arg1 ;
-(void)_swipeRecognizerChanged:(id)arg1 ;
-(UISwipeActionController *)swipeController;
-(SCD_Struct_UI127)currentSwipeConfig;
-(void)_dismissalRecognizerDidRecognize:(id)arg1 ;
-(BOOL)isInteracting;
-(void)resetSwipe;
-(_UIStatesFeedbackGenerator *)swipeFeedbackGenerator;
-(SCD_Struct_UI126)_currentSwipeInfoWithTargetOffset:(double)arg1 animated:(BOOL)arg2 usingSpringWithStiffness:(double)arg3 ;
-(void)setSwipeController:(UISwipeActionController *)arg1 ;
-(void)_swipeRecognizerEnded:(id)arg1 wasCancelled:(BOOL)arg2 ;
-(void)setSwipeFeedbackGenerator:(_UIStatesFeedbackGenerator *)arg1 ;
-(void)initiateSwipeWithDirection:(unsigned long long)arg1 configuration:(id)arg2 location:(CGPoint)arg3 userInitiated:(BOOL)arg4 ;
-(BOOL)_delegateWantsToDismissOnTouchDownForGestureRecognizer:(id)arg1 ;
-(unsigned long long)currentSwipeState;
-(void)_setUp;
-(id)initWithSwipeController:(id)arg1 ;
-(void)_cancelExistingSwipe;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)_cancelExistingSwipeForGestureBeganIfNecessary:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)_moveSwipedItemToOffset:(double)arg1 animated:(BOOL)arg2 usingSpringWithStiffness:(double)arg3 isTracking:(BOOL)arg4 ;
@end

