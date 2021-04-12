/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBWorkspaceApplicationSceneTransitionContextDelegate.h>

@protocol SBLayoutStateTransitionSceneEntityFrameProvider;
@class NSPointerArray, SBLayoutStateTransitionContext, SBSceneManager, NSString;

@interface SBLayoutStateTransitionCoordinator : NSObject <SBWorkspaceApplicationSceneTransitionContextDelegate> {

	NSPointerArray* _observerPointerArray;
	SBLayoutStateTransitionContext* _transitionContext;
	SBSceneManager* _sceneManager;
	id<SBLayoutStateTransitionSceneEntityFrameProvider> _sceneEntityFrameProvider;

}

@property (nonatomic,__weak,readonly) SBSceneManager * sceneManager;                                                           //@synthesize sceneManager=_sceneManager - In the implementation block
@property (assign,nonatomic,__weak) id<SBLayoutStateTransitionSceneEntityFrameProvider> sceneEntityFrameProvider;              //@synthesize sceneEntityFrameProvider=_sceneEntityFrameProvider - In the implementation block
@property (getter=isTransitioning,nonatomic,readonly) BOOL transitioning; 
@property (nonatomic,readonly) SBLayoutStateTransitionContext * transitionContext;                                             //@synthesize transitionContext=_transitionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(SBLayoutStateTransitionContext *)transitionContext;
-(BOOL)isTransitioning;
-(SBSceneManager *)sceneManager;
-(void)willEndTransition;
-(void)beginTransitionForWorkspaceTransaction:(id)arg1 ;
-(void)endTransitionWithError:(id)arg1 ;
-(id)layoutStateForApplicationTransitionContext:(id)arg1 ;
-(id)previousLayoutStateForApplicationTransitionContext:(id)arg1 ;
-(id)initWithSceneManager:(id)arg1 ;
-(void)setSceneEntityFrameProvider:(id<SBLayoutStateTransitionSceneEntityFrameProvider>)arg1 ;
-(id<SBLayoutStateTransitionSceneEntityFrameProvider>)sceneEntityFrameProvider;
@end

