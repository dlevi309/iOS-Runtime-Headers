/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
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
-(id)layoutStateForApplicationTransitionContext:(id)arg1 ;
-(id)previousLayoutStateForApplicationTransitionContext:(id)arg1 ;
-(id)initWithSceneManager:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(SBSceneManager *)sceneManager;
-(id)init;
-(SBLayoutStateTransitionContext *)transitionContext;
-(void)setSceneEntityFrameProvider:(id<SBLayoutStateTransitionSceneEntityFrameProvider>)arg1 ;
-(CGRect)applicationTransitionContext:(id)arg1 frameForApplicationSceneEntity:(id)arg2 ;
-(void)willEndTransition;
-(void)removeObserver:(id)arg1 ;
-(void)endTransitionWithError:(id)arg1 ;
-(BOOL)isTransitioning;
-(id<SBLayoutStateTransitionSceneEntityFrameProvider>)sceneEntityFrameProvider;
-(void)beginTransitionForWorkspaceTransaction:(id)arg1 ;
@end

