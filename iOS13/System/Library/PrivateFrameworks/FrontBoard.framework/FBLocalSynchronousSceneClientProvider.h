/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <libobjc.A.dylib/FBSWorkspaceScenesSource.h>
#import <libobjc.A.dylib/FBSceneClient.h>
#import <libobjc.A.dylib/FBSSceneUpdater.h>
#import <libobjc.A.dylib/FBSceneClientProvider.h>

@class NSMutableArray, FBSceneClientProviderInvalidationAction, NSMutableDictionary, FBSSceneClientSettingsDiffInspector, NSString;

@interface FBLocalSynchronousSceneClientProvider : NSObject <FBSWorkspaceScenesSource, FBSceneClient, FBSSceneUpdater, FBSceneClientProvider> {

	BOOL _workspaceInitialized;
	NSMutableArray* _pendingSceneCreatesBeforeFBSWorkspaceInitialization;
	FBSceneClientProviderInvalidationAction* _invalidationAction;
	NSMutableDictionary* _localSceneInfoByIdentifier;
	NSMutableDictionary* _hostsByIdentifier;
	FBSSceneClientSettingsDiffInspector* _clientSettingsDiffInspector;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSObject*<NSCopying> identifier; 
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(NSObject*<NSCopying>)identifier;
-(id)endpoint;
-(id)hostProcess;
-(void)scene:(id)arg1 didReceiveActions:(id)arg2 ;
-(id)sceneWithIdentifier:(id)arg1 ;
-(id)scenes;
-(id)_newSceneForWindow:(id)arg1 oldDisplay:(id)arg2 newDisplay:(id)arg3 ;
-(id)callOutQueue;
-(void)scene:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 ;
-(void)scene:(id)arg1 sendMessage:(id)arg2 withResponse:(/*^block*/id)arg3 ;
-(id)fbsSceneWithIdentifier:(id)arg1 ;
-(void)registerInvalidationAction:(id)arg1 ;
-(id)registerHost:(id)arg1 withInitialParameters:(id)arg2 ;
-(void)unregisterHost:(id)arg1 ;
-(void)host:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)host:(id)arg1 didInvalidateWithTransitionContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)host:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)_sendSceneCreateFBSWorkspaceDelegateForSceneInfo:(id)arg1 transitionContext:(id)arg2 ;
-(void)_updateLevelForScene:(id)arg1 ;
@end

