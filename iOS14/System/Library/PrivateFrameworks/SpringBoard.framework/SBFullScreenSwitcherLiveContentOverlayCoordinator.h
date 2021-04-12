/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBSwitcherLiveContentOverlayCoordinating.h>

@protocol SBSwitcherLiveContentOverlayCoordinatorDelegate;
@class NSMutableDictionary, NSMutableArray, SBMainDisplaySceneLayoutViewController, SBSceneLayoutLiveContentOverlay, NSString;

@interface SBFullScreenSwitcherLiveContentOverlayCoordinator : NSObject <SBSwitcherLiveContentOverlayCoordinating> {

	BOOL _liveContentOverlayUpdatesSuspended;
	long long _containerOrientation;
	id<SBSwitcherLiveContentOverlayCoordinatorDelegate> _delegate;
	NSMutableDictionary* _appLayoutToLiveContentOverlayContext;
	NSMutableArray* _visibleAlwaysLiveAppLayouts;
	SBMainDisplaySceneLayoutViewController* _sceneLayoutViewController;
	SBSceneLayoutLiveContentOverlay* _sceneLayoutLiveContentOverlay;

}

@property (nonatomic,retain) NSMutableDictionary * appLayoutToLiveContentOverlayContext;                                        //@synthesize appLayoutToLiveContentOverlayContext=_appLayoutToLiveContentOverlayContext - In the implementation block
@property (nonatomic,retain) NSMutableArray * visibleAlwaysLiveAppLayouts;                                                      //@synthesize visibleAlwaysLiveAppLayouts=_visibleAlwaysLiveAppLayouts - In the implementation block
@property (nonatomic,__weak,readonly) SBMainDisplaySceneLayoutViewController * sceneLayoutViewController;                       //@synthesize sceneLayoutViewController=_sceneLayoutViewController - In the implementation block
@property (nonatomic,retain) SBSceneLayoutLiveContentOverlay * sceneLayoutLiveContentOverlay;                                   //@synthesize sceneLayoutLiveContentOverlay=_sceneLayoutLiveContentOverlay - In the implementation block
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
-(void)setVisibleAlwaysLiveAppLayouts:(NSMutableArray *)arg1 ;
-(SBMainDisplaySceneLayoutViewController *)sceneLayoutViewController;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2 ;
-(BOOL)areLiveContentOverlayUpdatesSuspended;
-(void)noteKeyboardFocusDidChangeToSceneID:(id)arg1 ;
-(void)_updateAlwaysLiveSceneContentOverlays;
-(id<SBSwitcherLiveContentOverlayCoordinatorDelegate>)delegate;
-(long long)_existingOverlayTypeForAppLayout:(id)arg1 ;
-(void)_addOverlay:(id)arg1 withType:(long long)arg2 forAppLayout:(id)arg3 animated:(BOOL)arg4 ;
-(NSMutableDictionary *)appLayoutToLiveContentOverlayContext;
-(BOOL)_canTransitionToOverlayType:(long long)arg1 forAppLayout:(id)arg2 ;
-(SBSceneLayoutLiveContentOverlay *)sceneLayoutLiveContentOverlay;
-(void)setDelegate:(id<SBSwitcherLiveContentOverlayCoordinatorDelegate>)arg1 ;
-(void)appLayoutWillBecomeVisible:(id)arg1 ;
-(void)appLayoutDidBecomeHidden:(id)arg1 ;
-(BOOL)_layoutStateContainsElementBlockedForScreenTimeExpiration:(id)arg1 ;
-(void)_removeOverlayForAppLayout:(id)arg1 animated:(BOOL)arg2 ;
-(void)setSceneLayoutLiveContentOverlay:(SBSceneLayoutLiveContentOverlay *)arg1 ;
-(BOOL)_shouldAnimateAddingSceneLayoutLiveContentOverlayForTransitionContext:(id)arg1 ;
-(id)initWithSceneLayoutViewController:(id)arg1 ;
-(void)setAppLayoutToLiveContentOverlayContext:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)visibleAlwaysLiveAppLayouts;
-(id)animationControllerForTransitionRequest:(id)arg1 ;
@end

