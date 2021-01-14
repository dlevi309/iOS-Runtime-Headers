/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBSwitcherLiveContentOverlayCoordinating <SBLayoutStateTransitionObserver>
@property (assign,getter=areLiveContentOverlayUpdatesSuspended,nonatomic) BOOL liveContentOverlayUpdatesSuspended; 
@property (assign,nonatomic) long long containerOrientation; 
@property (assign,nonatomic,__weak) id<SBSwitcherLiveContentOverlayCoordinatorDelegate> delegate; 
@required
-(long long)containerOrientation;
-(void)setLiveContentOverlayUpdatesSuspended:(BOOL)arg1;
-(void)setContainerOrientation:(long long)arg1;
-(BOOL)areLiveContentOverlayUpdatesSuspended;
-(void)noteKeyboardFocusDidChangeToSceneID:(id)arg1;
-(id<SBSwitcherLiveContentOverlayCoordinatorDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)appLayoutWillBecomeVisible:(id)arg1;
-(void)appLayoutDidBecomeHidden:(id)arg1;
-(id)animationControllerForTransitionRequest:(id)arg1;

@end

