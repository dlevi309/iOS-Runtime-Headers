/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SBHomeScreenBackdropViewBaseDelegate;
@class NSMutableSet, SBFluidSwitcherAnimationSettings;

@interface SBHomeScreenBackdropViewBase : UIView {

	NSMutableSet* _backdropViewRequiringReasons;
	NSMutableSet* _liveBackdropViewRequiringReasons;
	SBFluidSwitcherAnimationSettings* _animationSettings;
	id<SBHomeScreenBackdropViewBaseDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBHomeScreenBackdropViewBaseDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SBHomeScreenBackdropViewBaseDelegate>)delegate;
-(void)setDelegate:(id<SBHomeScreenBackdropViewBaseDelegate>)arg1 ;
-(BOOL)isOpaque;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBlurProgress:(double)arg1 behaviorMode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)beginRequiringBackdropViewForReason:(id)arg1 ;
-(void)beginRequiringLiveBackdropViewForReason:(id)arg1 ;
-(void)endRequiringBackdropViewForReason:(id)arg1 ;
-(void)endRequiringLiveBackdropViewForReason:(id)arg1 ;
-(void)cancelInProcessAnimations;
-(BOOL)requiresBackdropView;
-(BOOL)requiresLiveBackdropView;
-(id)backdropBlurSettings;
@end

