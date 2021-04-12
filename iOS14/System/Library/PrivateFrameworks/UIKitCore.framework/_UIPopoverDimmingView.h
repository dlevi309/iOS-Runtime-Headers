/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDimmingView.h>
#import <UIKitCore/_UIPassthroughScrollInteractionDelegate.h>

@class _UIPassthroughScrollInteraction, UIView, NSString;

@interface _UIPopoverDimmingView : UIDimmingView <_UIPassthroughScrollInteractionDelegate> {

	BOOL _lastHitTestWasPassedThrough;
	_UIPassthroughScrollInteraction* _passthroughScrollInteraction;
	UIView* _transitionContainerView;

}

@property (nonatomic,readonly) _UIPassthroughScrollInteraction * _passthroughScrollInteraction;              //@synthesize passthroughScrollInteraction=_passthroughScrollInteraction - In the implementation block
@property (assign,nonatomic,__weak) id<_UIPopoverDimmingViewDelegate> delegate; 
@property (assign,nonatomic,__weak) UIView * transitionContainerView;                                        //@synthesize transitionContainerView=_transitionContainerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)passthroughScrollInteractionDidRecognize:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_sendDelegateDimmingViewWasTapped;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(BOOL)passthroughScrollInteraction:(id)arg1 shouldInteractAtLocation:(CGPoint)arg2 withEvent:(id)arg3 ;
-(UIView *)transitionContainerView;
-(void)willMoveToWindow:(id)arg1 ;
-(BOOL)_delegateAllowsInteraction;
-(_UIPassthroughScrollInteraction *)_passthroughScrollInteraction;
-(void)setTransitionContainerView:(UIView *)arg1 ;
@end

