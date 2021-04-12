/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)scenes;
-(void)requestSceneFromEndpoint:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)synchronizeSystemAnimationFencesWithCleanUpBlock:(/*^block*/id)arg1 ;
-(void)requestSceneCreationWithInitialClientSettings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)workspaceShouldExit:(id)arg1 withTransitionContext:(id)arg2 ;
-(id)delegate;
-(NSString *)debugDescription;
-(id)defaultShellEndpoint;
-(id)requestSystemAnimationFence;
-(id)sceneWithIdentifier:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(NSString *)description;
-(BOOL)trackSystemAnimationFence:(id)arg1 ;
-(void)workspace:(id)arg1 didCreateScene:(id)arg2 withTransitionContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_initWithSerialQueue:(id)arg1 original:(id)arg2 ;
-(BOOL)isTrackingAnySystemAnimationFence;
-(void)enumerateScenesWithBlock:(/*^block*/id)arg1 ;
-(void)workspace:(id)arg1 willDestroyScene:(id)arg2 withTransitionContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)workspace:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)requestSceneCreationWithIdentifier:(id)arg1 initialClientSettings:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

