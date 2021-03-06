/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBSwitcherLiveContentOverlayCoordinating.h>

@protocol SBSwitcherLiveContentOverlayCoordinatorDelegate;
@class SBFullScreenSwitcherLiveContentOverlayCoordinator, SBFloatingSwitcherLiveContentOverlayCoordinator, NSString;

@interface SBMainSwitcherLiveContentOverlayCoordinator : NSObject <SBSwitcherLiveContentOverlayCoordinating> {

	SBFullScreenSwitcherLiveContentOverlayCoordinator* _fullScreenCoordinator;
	SBFloatingSwitcherLiveContentOverlayCoordinator* _floatingCoordinator;
	BOOL _liveContentOverlayUpdatesSuspended;
	long long _containerOrientation;
	id<SBSwitcherLiveContentOverlayCoordinatorDelegate> _delegate;

}

@property (assign,getter=areLiveContentOverlayUpdatesSuspended,nonatomic) BOOL liveContentOverlayUpdatesSuspended;              //@synthesize liveContentOverlayUpdatesSuspended=_liveContentOverlayUpdatesSuspended - In the implementation block
@property (assign,nonatomic) long long containerOrientation;                                                                    //@synthesize containerOrientation=_containerOrientation - In the implementation block
@property (assign,nonatomic,__weak) id<SBSwitcherLiveContentOverlayCoordinatorDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)containerOrientation;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2 ;
-(void)setLiveContentOverlayUpdatesSuspended:(BOOL)arg1 ;
-(void)setContainerOrientation:(long long)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionWillEndWithTransitionContext:(id)arg2 ;
-(BOOL)areLiveContentOverlayUpdatesSuspended;
-(void)noteKeyboardFocusDidChangeToSceneID:(id)arg1 ;
-(id<SBSwitcherLiveContentOverlayCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<SBSwitcherLiveContentOverlayCoordinatorDelegate>)arg1 ;
-(void)appLayoutWillBecomeVisible:(id)arg1 ;
-(void)appLayoutDidBecomeHidden:(id)arg1 ;
-(id)initWithSceneLayoutViewController:(id)arg1 ;
-(id)animationControllerForTransitionRequest:(id)arg1 ;
@end

