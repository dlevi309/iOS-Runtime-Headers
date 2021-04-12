/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <libobjc.A.dylib/FBSWorkspaceDelegate_Exiting.h>

@protocol FBSUIApplicationWorkspaceDelegate, BSInvalidatable;
@class FBSSerialQueue, FBSUIApplicationWorkspace, FBSWorkspace, NSString;

@interface FBSUIApplicationWorkspaceShim : NSObject <FBSWorkspaceDelegate_Exiting> {

	FBSSerialQueue* _queue;
	FBSUIApplicationWorkspace* _original;
	FBSWorkspace* _workspace;
	id<FBSUIApplicationWorkspaceDelegate> _delegate;
	id<BSInvalidatable> _processExpirationObserver;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSString *)debugDescription;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)workspace:(id)arg1 didReceiveActions:(id)arg2 ;
-(id)sceneWithIdentifier:(id)arg1 ;
-(id)scenes;
-(void)workspace:(id)arg1 didCreateScene:(id)arg2 withTransitionContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)workspace:(id)arg1 willDestroyScene:(id)arg2 withTransitionContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)trackSystemAnimationFence:(id)arg1 ;
-(id)requestSystemAnimationFence;
-(void)synchronizeSystemAnimationFencesWithCleanUpBlock:(/*^block*/id)arg1 ;
-(BOOL)isTrackingAnySystemAnimationFence;
-(void)requestSceneCreationWithIdentifier:(id)arg1 initialClientSettings:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)workspaceShouldExit:(id)arg1 withTransitionContext:(id)arg2 ;
-(void)requestSceneFromEndpoint:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)defaultShellEndpoint;
-(void)enumerateScenesWithBlock:(/*^block*/id)arg1 ;
-(void)requestSceneCreationWithInitialClientSettings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_initWithSerialQueue:(id)arg1 original:(id)arg2 ;
@end

