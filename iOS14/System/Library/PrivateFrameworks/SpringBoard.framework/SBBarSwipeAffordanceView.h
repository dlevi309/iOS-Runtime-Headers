/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBHomeGrabberDelegate.h>
#import <libobjc.A.dylib/SBSystemGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBHomeGestureInteractionDelegate.h>
#import <libobjc.A.dylib/SBHomeGesturePanGestureRecognizerInterfaceDelegate.h>

@protocol SBBarSwipeAffordanceDelegate;
@class NSHashTable, UINotificationFeedbackGenerator, SBHomeGestureInteraction, SBSystemGestureManager, SBHomeGrabberView, NSString;

@interface SBBarSwipeAffordanceView : UIView <UIGestureRecognizerDelegate, SBHomeGrabberDelegate, SBSystemGestureRecognizerDelegate, SBHomeGestureInteractionDelegate, SBHomeGesturePanGestureRecognizerInterfaceDelegate> {

	NSHashTable* _observers;
	UINotificationFeedbackGenerator* _dismissalFeedbackGenerator;
	double _additionalEdgeSpacing;
	SBHomeGestureInteraction* _homeGestureInteraction;
	SBSystemGestureManager* _gestureManager;
	BOOL _active;
	BOOL _homeAffordanceHidden;
	id<SBBarSwipeAffordanceDelegate> _delegate;
	SBHomeGrabberView* _grabberView;
	long long _feedbackType;

}

@property (nonatomic,readonly) SBHomeGrabberView * grabberView;                                              //@synthesize grabberView=_grabberView - In the implementation block
@property (assign,nonatomic) long long feedbackType;                                                         //@synthesize feedbackType=_feedbackType - In the implementation block
@property (assign,nonatomic,__weak) id<SBBarSwipeAffordanceDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SBHomeGrabberPointerClickDelegate> pointerClickDelegate; 
@property (assign,getter=isActive,nonatomic) BOOL active;                                                    //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) long long colorBias; 
@property (assign,getter=isHomeAffordanceHidden,nonatomic) BOOL homeAffordanceHidden;                        //@synthesize homeAffordanceHidden=_homeAffordanceHidden - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)homeGestureInteractionBegan:(id)arg1 ;
-(void)homeGestureInteractionChanged:(id)arg1 ;
-(void)homeGestureInteractionCancelled:(id)arg1 ;
-(unsigned long long)homeGestureInteraction:(id)arg1 systemGestureTypeForType:(long long)arg2 ;
-(void)addObserver:(id)arg1 ;
-(void)_settleGrabber;
-(void)_createFeedbackGenerator;
-(void)setActive:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)shouldAllowThinStyleForHomeGrabberView:(id)arg1 ;
-(id)_hideHomeAffordanceAnimationSettings;
-(id)_settleAffordanceAnimationBehaviorDescription;
-(id)customScreenEdgePanGestureRecognizerForHomeGestureInteraction:(id)arg1 ;
-(id<SBBarSwipeAffordanceDelegate>)delegate;
-(double)_progressWithTranslation:(CGPoint)arg1 liftoffVelocity:(CGPoint)arg2 ;
-(long long)colorBias;
-(BOOL)isActive;
-(void)_deactivate;
-(void)_offsetGrabberForProgress:(double)arg1 ;
-(void)homeGestureInteractionEnded:(id)arg1 ;
-(void)_activate;
-(void)_runBlockOnObservers:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<SBBarSwipeAffordanceDelegate>)arg1 ;
-(BOOL)shouldAllowAutoHideForHomeGrabberView:(id)arg1 ;
-(void)layoutSubviews;
-(void)setPointerClickDelegate:(id<SBHomeGrabberPointerClickDelegate>)arg1 ;
-(id)_unhideHomeAffordanceAnimationSettings;
-(void)removeObserver:(id)arg1 ;
-(void)_fireAction;
-(SBHomeGrabberView *)grabberView;
-(void)setHomeAffordanceHidden:(BOOL)arg1 ;
-(BOOL)isHomeAffordanceHidden;
-(long long)feedbackType;
-(long long)_effectiveOrientationAccountingForTransforms;
-(void)didAddSubview:(id)arg1 ;
-(void)_setGrabberAdditionalEdgeSpacing:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 systemGestureManager:(id)arg2 enableGestures:(BOOL)arg3 ;
-(id<SBHomeGrabberPointerClickDelegate>)pointerClickDelegate;
-(double)additionalEdgeSpacingForHomeGrabberView:(id)arg1 ;
-(void)setFeedbackType:(long long)arg1 ;
-(void)_updateHomeAffordanceVisibility;
-(long long)touchInterfaceOrientationForGestureRecognizer:(id)arg1 ;
-(void)setColorBias:(long long)arg1 ;
-(id)viewForSystemGestureRecognizer:(id)arg1 ;
@end

