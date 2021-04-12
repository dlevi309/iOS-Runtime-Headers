/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@class NSHashTable, UINotificationFeedbackGenerator, SBHomeGestureInteraction, SBHomeGrabberView, NSString;

@interface SBBarSwipeAffordanceView : UIView <UIGestureRecognizerDelegate, SBHomeGrabberDelegate, SBSystemGestureRecognizerDelegate, SBHomeGestureInteractionDelegate, SBHomeGesturePanGestureRecognizerInterfaceDelegate> {

	NSHashTable* _observers;
	UINotificationFeedbackGenerator* _dismissalFeedbackGenerator;
	double _additionalEdgeSpacing;
	SBHomeGestureInteraction* _homeGestureInteraction;
	BOOL _active;
	id<SBBarSwipeAffordanceDelegate> _delegate;
	SBHomeGrabberView* _grabberView;
	long long _feedbackType;

}

@property (nonatomic,readonly) SBHomeGrabberView * grabberView;                             //@synthesize grabberView=_grabberView - In the implementation block
@property (assign,nonatomic) long long feedbackType;                                        //@synthesize feedbackType=_feedbackType - In the implementation block
@property (assign,nonatomic,__weak) id<SBBarSwipeAffordanceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                   //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) long long colorBias; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_activate;
-(id<SBBarSwipeAffordanceDelegate>)delegate;
-(void)setDelegate:(id<SBBarSwipeAffordanceDelegate>)arg1 ;
-(BOOL)isActive;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)didAddSubview:(id)arg1 ;
-(void)_deactivate;
-(long long)feedbackType;
-(void)setFeedbackType:(long long)arg1 ;
-(SBHomeGrabberView *)grabberView;
-(void)_runBlockOnObservers:(/*^block*/id)arg1 ;
-(void)_fireAction;
-(id)viewForSystemGestureRecognizer:(id)arg1 ;
-(void)homeGestureInteractionEnded:(id)arg1 ;
-(long long)touchInterfaceOrientationForGestureRecognizer:(id)arg1 ;
-(unsigned long long)homeGestureInteraction:(id)arg1 systemGestureTypeForType:(long long)arg2 ;
-(id)customScreenEdgePanGestureRecognizerForHomeGestureInteraction:(id)arg1 ;
-(void)homeGestureInteractionBegan:(id)arg1 ;
-(void)homeGestureInteractionChanged:(id)arg1 ;
-(void)homeGestureInteractionCancelled:(id)arg1 ;
-(long long)colorBias;
-(void)setColorBias:(long long)arg1 ;
-(id)_unhideHomeAffordanceAnimationSettings;
-(id)_hideHomeAffordanceAnimationSettings;
-(double)_progressWithTranslation:(CGPoint)arg1 liftoffVelocity:(CGPoint)arg2 ;
-(void)_offsetGrabberForProgress:(double)arg1 ;
-(void)_settleGrabber;
-(long long)_effectiveOrientationAccountingForTransforms;
-(id)_settleAffordanceAnimationBehaviorDescription;
-(void)_setGrabberAdditionalEdgeSpacing:(double)arg1 ;
-(double)additionalEdgeSpacingForHomeGrabberView:(id)arg1 ;
-(BOOL)shouldAllowThinStyleForHomeGrabberView:(id)arg1 ;
-(BOOL)shouldAllowAutoHideForHomeGrabberView:(id)arg1 ;
@end

