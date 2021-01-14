/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)cancelInProcessAnimations;
-(BOOL)isOpaque;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<SBHomeScreenBackdropViewBaseDelegate>)delegate;
-(void)beginRequiringLiveBackdropViewForReason:(id)arg1 ;
-(void)setDelegate:(id<SBHomeScreenBackdropViewBaseDelegate>)arg1 ;
-(void)setBlurProgress:(double)arg1 behaviorMode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)endRequiringLiveBackdropViewForReason:(id)arg1 ;
-(void)endRequiringBackdropViewForReason:(id)arg1 ;
-(id)backdropBlurSettings;
-(void)beginRequiringBackdropViewForReason:(id)arg1 ;
-(BOOL)requiresBackdropView;
-(BOOL)requiresLiveBackdropView;
@end

