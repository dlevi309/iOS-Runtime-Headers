/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBSwitcherLiveContentOverlayCoordinating.h>

@protocol SBSwitcherLiveContentOverlayCoordinatorDelegate;
@class NSString, SBFloatingApplicationLiveContentWindow, NSMutableDictionary;

@interface SBFloatingFluidSwitcherLiveContentOverlayCoordinator : NSObject <SBSwitcherLiveContentOverlayCoordinating> {

	BOOL _liveContentOverlayUpdatesSuspended;
	long long _containerOrientation;
	id<SBSwitcherLiveContentOverlayCoordinatorDelegate> _delegate;
	NSString* _keyboardFocusSceneID;
	SBFloatingApplicationLiveContentWindow* _recycledApplicationSceneLiveContentWindow;
	NSMutableDictionary* _liveContentOverlays;

}

@property (nonatomic,copy) NSString * keyboardFocusSceneID;                                                                     //@synthesize keyboardFocusSceneID=_keyboardFocusSceneID - In the implementation block
@property (nonatomic,retain) SBFloatingApplicationLiveContentWindow * recycledApplicationSceneLiveContentWindow;                //@synthesize recycledApplicationSceneLiveContentWindow=_recycledApplicationSceneLiveContentWindow - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * liveContentOverlays;                                                         //@synthesize liveContentOverlays=_liveContentOverlays - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=areLiveContentOverlayUpdatesSuspended,nonatomic) BOOL liveContentOverlayUpdatesSuspended;              //@synthesize liveContentOverlayUpdatesSuspended=_liveContentOverlayUpdatesSuspended - In the implementation block
@property (assign,nonatomic) long long containerOrientation;                                                                    //@synthesize containerOrientation=_containerOrientation - In the implementation block
@property (assign,nonatomic,__weak) id<SBSwitcherLiveContentOverlayCoordinatorDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<SBSwitcherLiveContentOverlayCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<SBSwitcherLiveContentOverlayCoordinatorDelegate>)arg1 ;
-(void)setContainerOrientation:(long long)arg1 ;
-(long long)containerOrientation;
-(id)animationControllerForTransitionRequest:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionWillEndWithTransitionContext:(id)arg2 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2 ;
-(void)noteKeyboardFocusDidChangeToSceneID:(id)arg1 ;
-(BOOL)areLiveContentOverlayUpdatesSuspended;
-(void)setLiveContentOverlayUpdatesSuspended:(BOOL)arg1 ;
-(void)_removeLiveContentOverlayForAppLayout:(id)arg1 ;
-(id)_newApplicationLiveContentOverlayViewForTransitionContext:(id)arg1 ;
-(void)_addLiveContentOverlay:(id)arg1 forAppLayout:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)_shouldAnimateAddingLiveContentOverlayForTransitionContext:(id)arg1 ;
-(id)_newLiveContentOverlayViewForTransitionContext:(id)arg1 ;
-(void)_configureLiveContentOverlayView:(id)arg1 forTransitionContext:(id)arg2 ;
-(void)_updateDisplayLayoutElementsForActiveAppLayout:(id)arg1 ;
-(void)setKeyboardFocusSceneID:(NSString *)arg1 ;
-(id)_newInlineLiveContentOverlayViewForTransitionContext:(id)arg1 ;
-(NSString *)keyboardFocusSceneID;
-(void)_addApplicationSceneLiveContentOverlay:(id)arg1 forAppLayout:(id)arg2 animated:(BOOL)arg3 ;
-(void)_addInlineAppExposeLiveContentOverlay:(id)arg1 forAppLayout:(id)arg2 animated:(BOOL)arg3 ;
-(void)_removeApplicationSceneLiveContentOverlay:(id)arg1 forAppLayout:(id)arg2 ;
-(void)_removeInlineAppExposeLiveContentOverlay:(id)arg1 forAppLayout:(id)arg2 ;
-(BOOL)_isLayoutElementBlockedForScreenTimeExpiration:(id)arg1 ;
-(SBFloatingApplicationLiveContentWindow *)recycledApplicationSceneLiveContentWindow;
-(void)setRecycledApplicationSceneLiveContentWindow:(SBFloatingApplicationLiveContentWindow *)arg1 ;
-(NSMutableDictionary *)liveContentOverlays;
-(void)setLiveContentOverlays:(NSMutableDictionary *)arg1 ;
@end

