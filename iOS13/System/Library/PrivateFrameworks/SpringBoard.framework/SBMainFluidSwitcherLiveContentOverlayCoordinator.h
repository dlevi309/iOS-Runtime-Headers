/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBSwitcherLiveContentOverlayCoordinating.h>

@protocol SBSwitcherLiveContentOverlayCoordinatorDelegate;
@class NSMutableDictionary, SBMainDisplaySceneLayoutViewController, SBSceneLayoutLiveContentOverlay, NSString;

@interface SBMainFluidSwitcherLiveContentOverlayCoordinator : NSObject <SBSwitcherLiveContentOverlayCoordinating> {

	BOOL _liveContentOverlayUpdatesSuspended;
	long long _containerOrientation;
	id<SBSwitcherLiveContentOverlayCoordinatorDelegate> _delegate;
	NSMutableDictionary* _animationWrapperViewOverlays;
	SBMainDisplaySceneLayoutViewController* _sceneLayoutViewController;
	SBSceneLayoutLiveContentOverlay* _sceneLayoutLiveContentOverlay;

}

@property (nonatomic,retain) NSMutableDictionary * animationWrapperViewOverlays;                                                //@synthesize animationWrapperViewOverlays=_animationWrapperViewOverlays - In the implementation block
@property (nonatomic,__weak,readonly) SBMainDisplaySceneLayoutViewController * sceneLayoutViewController;                       //@synthesize sceneLayoutViewController=_sceneLayoutViewController - In the implementation block
@property (nonatomic,retain) SBSceneLayoutLiveContentOverlay * sceneLayoutLiveContentOverlay;                                   //@synthesize sceneLayoutLiveContentOverlay=_sceneLayoutLiveContentOverlay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=areLiveContentOverlayUpdatesSuspended,nonatomic) BOOL liveContentOverlayUpdatesSuspended;              //@synthesize liveContentOverlayUpdatesSuspended=_liveContentOverlayUpdatesSuspended - In the implementation block
@property (assign,nonatomic) long long containerOrientation;                                                                    //@synthesize containerOrientation=_containerOrientation - In the implementation block
@property (assign,nonatomic,__weak) id<SBSwitcherLiveContentOverlayCoordinatorDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
-(id<SBSwitcherLiveContentOverlayCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<SBSwitcherLiveContentOverlayCoordinatorDelegate>)arg1 ;
-(void)setContainerOrientation:(long long)arg1 ;
-(long long)containerOrientation;
-(id)animationControllerForTransitionRequest:(id)arg1 ;
-(SBMainDisplaySceneLayoutViewController *)sceneLayoutViewController;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2 ;
-(void)noteKeyboardFocusDidChangeToSceneID:(id)arg1 ;
-(BOOL)areLiveContentOverlayUpdatesSuspended;
-(void)setLiveContentOverlayUpdatesSuspended:(BOOL)arg1 ;
-(id)initWithSceneLayoutViewController:(id)arg1 ;
-(BOOL)_shouldAnimateAddingSceneLayoutLiveContentOverlayForTransitionContext:(id)arg1 ;
-(BOOL)_layoutStateContainsElementBlockedForScreenTimeExpiration:(id)arg1 ;
-(NSMutableDictionary *)animationWrapperViewOverlays;
-(void)setAnimationWrapperViewOverlays:(NSMutableDictionary *)arg1 ;
-(SBSceneLayoutLiveContentOverlay *)sceneLayoutLiveContentOverlay;
-(void)setSceneLayoutLiveContentOverlay:(SBSceneLayoutLiveContentOverlay *)arg1 ;
@end

