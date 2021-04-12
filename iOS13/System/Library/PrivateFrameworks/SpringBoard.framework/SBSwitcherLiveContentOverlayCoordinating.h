/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBSwitcherLiveContentOverlayCoordinating <SBLayoutStateTransitionObserver>
@property (assign,getter=areLiveContentOverlayUpdatesSuspended,nonatomic) BOOL liveContentOverlayUpdatesSuspended; 
@property (assign,nonatomic) long long containerOrientation; 
@property (assign,nonatomic,__weak) id<SBSwitcherLiveContentOverlayCoordinatorDelegate> delegate; 
@required
-(id<SBSwitcherLiveContentOverlayCoordinatorDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)setContainerOrientation:(long long)arg1;
-(long long)containerOrientation;
-(id)animationControllerForTransitionRequest:(id)arg1;
-(void)noteKeyboardFocusDidChangeToSceneID:(id)arg1;
-(BOOL)areLiveContentOverlayUpdatesSuspended;
-(void)setLiveContentOverlayUpdatesSuspended:(BOOL)arg1;

@end

