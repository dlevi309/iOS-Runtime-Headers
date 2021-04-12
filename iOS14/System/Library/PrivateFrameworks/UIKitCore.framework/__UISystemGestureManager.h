/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKitCore/_UIExclusiveTouchGestureRecognizerDelegate.h>

@protocol BSInvalidatable;
@class FBSDisplayIdentity, _UISystemGestureWindow, NSMutableSet, UIGestureRecognizer, BKSTouchStream, NSSet, NSString;

@interface __UISystemGestureManager : NSObject <UIGestureRecognizerDelegate, _UIExclusiveTouchGestureRecognizerDelegate> {

	FBSDisplayIdentity* _rootDisplayIdentity;
	_UISystemGestureWindow* _systemGestureWindow;
	NSMutableSet* _recognizingGestures;
	NSMutableSet* _externalEdgeSwipeGestures;
	NSMutableSet* _internalGestures;
	NSMutableSet* _externalGestures;
	id<BSInvalidatable> _stateCaptureToken;
	BOOL _achievedMaximumMovement;
	BOOL _didSeeExclusiveTouchBegan;
	BOOL _didProcessPendingSwipeBegan;
	UIGestureRecognizer* _exclusiveTouchGesture;
	UIGestureRecognizer* _pendingSwipeGesture;
	UIGestureRecognizer* _catchEdgeSwipeFailureGesture;
	UIGestureRecognizer* _directTouchGesture;
	BKSTouchStream* _touchStream;

}

@property (nonatomic,retain) UIGestureRecognizer * exclusiveTouchGesture;                     //@synthesize exclusiveTouchGesture=_exclusiveTouchGesture - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * pendingSwipeGesture;                       //@synthesize pendingSwipeGesture=_pendingSwipeGesture - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * catchEdgeSwipeFailureGesture;              //@synthesize catchEdgeSwipeFailureGesture=_catchEdgeSwipeFailureGesture - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * directTouchGesture;                        //@synthesize directTouchGesture=_directTouchGesture - In the implementation block
@property (assign,nonatomic) BOOL achievedMaximumMovement;                                    //@synthesize achievedMaximumMovement=_achievedMaximumMovement - In the implementation block
@property (assign,nonatomic) BOOL didSeeExclusiveTouchBegan;                                  //@synthesize didSeeExclusiveTouchBegan=_didSeeExclusiveTouchBegan - In the implementation block
@property (assign,nonatomic) BOOL didProcessPendingSwipeBegan;                                //@synthesize didProcessPendingSwipeBegan=_didProcessPendingSwipeBegan - In the implementation block
@property (nonatomic,retain) BKSTouchStream * touchStream;                                    //@synthesize touchStream=_touchStream - In the implementation block
@property (nonatomic,copy,readonly) NSSet * gestureRecognizers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)didSeeExclusiveTouchBegan;
-(void)_directTouchDown:(id)arg1 ;
-(void)addGestureRecognizer:(id)arg1 recognitionEvent:(long long)arg2 ;
-(void)setPendingSwipeGesture:(UIGestureRecognizer *)arg1 ;
-(UIGestureRecognizer *)directTouchGesture;
-(void)setCatchEdgeSwipeFailureGesture:(UIGestureRecognizer *)arg1 ;
-(void)_exclusiveTouchGestureDidTerminate:(id)arg1 ;
-(void)_externalGestureRecognizerChanged:(id)arg1 ;
-(void)_catchSwipeFailureGestureChanged:(id)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)_failedPendingSwipe;
-(void)setExclusiveTouchGesture:(UIGestureRecognizer *)arg1 ;
-(void)setTouchStream:(BKSTouchStream *)arg1 ;
-(id)windowForSystemGestures;
-(NSString *)description;
-(void)_pendingSwipeGestureDidBegin:(id)arg1 ;
-(UIGestureRecognizer *)pendingSwipeGesture;
-(void)clearTransform;
-(UIGestureRecognizer *)exclusiveTouchGesture;
-(void)addGestureRecognizer:(id)arg1 ;
-(void)_addInternalGesturesToView:(id)arg1 ;
-(void)_pendingSwipeGestureDidTerminate:(id)arg1 ;
-(id)initWithRootDisplayIdentity:(id)arg1 ;
-(BOOL)didProcessPendingSwipeBegan;
-(UIGestureRecognizer *)catchEdgeSwipeFailureGesture;
-(void)_pendingSwipeGestureChanged:(id)arg1 ;
-(BKSTouchStream *)touchStream;
-(void)setDidSeeExclusiveTouchBegan:(BOOL)arg1 ;
-(void)setDidProcessPendingSwipeBegan:(BOOL)arg1 ;
-(NSSet *)gestureRecognizers;
-(void)_removeInternalGestures;
-(void)removeGestureRecognizer:(id)arg1 ;
-(void)_handleTooMuchMovementWithLastTouchTimestamp:(double)arg1 ;
-(unsigned char)_dispatchModeForExternalGestureCompletion;
-(void)exclusiveTouchGestureRecognizer:(id)arg1 achievedMaximumAbsoluteAccumulatedMovement:(BOOL)arg2 timestamp:(double)arg3 ;
-(BOOL)achievedMaximumMovement;
-(void)setDirectTouchGesture:(UIGestureRecognizer *)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)_exclusiveTouchGestureChanged:(id)arg1 ;
-(void)setAchievedMaximumMovement:(BOOL)arg1 ;
-(void)dealloc;
@end

