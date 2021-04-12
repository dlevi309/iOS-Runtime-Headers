/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <libobjc.A.dylib/FBSSceneUpdaterDelegate.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, FBSSceneIdentityToken, FBSSceneSpecification, FBSSceneSettings, FBSSceneClientSettings;

@interface FBSScene : NSObject <FBSSceneUpdaterDelegate, BSDescriptionProviding>

@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) FBSSceneIdentityToken * identityToken; 
@property (nonatomic,readonly) FBSSceneSpecification * specification; 
@property (assign,nonatomic,__weak) id<FBSSceneDelegate> delegate; 
@property (nonatomic,readonly) FBSSceneSettings * settings; 
@property (nonatomic,readonly) FBSSceneClientSettings * clientSettings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)uiSettings;
-(void)updateUIClientSettingsWithBlock:(/*^block*/id)arg1 ;
-(void)updateUIClientSettingsWithTransitionBlock:(/*^block*/id)arg1 ;
-(id)uiClientSettings;
-(BOOL)uiCanReceiveDeviceOrientationEvents;
-(BOOL)isPersistable;
-(id)init;
-(id<FBSSceneDelegate>)delegate;
-(void)setDelegate:(id<FBSSceneDelegate>)arg1 ;
-(id)_init;
-(NSString *)identifier;
-(id)layers;
-(FBSSceneSettings *)settings;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(FBSSceneIdentityToken *)identityToken;
-(FBSSceneSpecification *)specification;
-(FBSSceneClientSettings *)clientSettings;
-(void)detachContext:(id)arg1 ;
-(void)attachContext:(id)arg1 ;
-(void)attachLayer:(id)arg1 ;
-(void)detachLayer:(id)arg1 ;
-(void)updateClientSettingsWithBlock:(/*^block*/id)arg1 ;
-(void)updateClientSettingsWithTransitionBlock:(/*^block*/id)arg1 ;
-(id)fbsDisplay;
-(void)sendActions:(id)arg1 ;
-(BOOL)invalidateSnapshotWithContext:(id)arg1 ;
-(BOOL)performSnapshotWithContext:(id)arg1 ;
-(id)display;
-(id)contexts;
-(id)initWithCallOutQueue:(id)arg1 identifier:(id)arg2 parameters:(id)arg3 ;
-(void)updater:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)updater:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)updater:(id)arg1 didReceiveMessage:(id)arg2 withResponse:(/*^block*/id)arg3 ;
-(id)initWithQueue:(id)arg1 identifier:(id)arg2 display:(id)arg3 settings:(id)arg4 clientSettings:(id)arg5 ;
-(void)updateClientSettings:(id)arg1 withTransitionContext:(id)arg2 ;
-(void)attachSceneContext:(id)arg1 ;
-(void)detachSceneContext:(id)arg1 ;
-(id)snapshotRequest;
-(BOOL)_hasAgent;
-(void)_callOutQueue_agent_didCreateWithTransitionContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_callOutQueue_agent_willDestroyWithTransitionContext:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

