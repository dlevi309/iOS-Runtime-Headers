/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <libobjc.A.dylib/FBSWorkspaceScenesSource.h>
#import <libobjc.A.dylib/FBSceneClient.h>
#import <libobjc.A.dylib/FBSSceneUpdater.h>
#import <libobjc.A.dylib/FBSceneClientProvider.h>

@class NSMutableArray, FBSceneClientProviderInvalidationAction, NSMutableDictionary, NSString;

@interface FBLocalSynchronousSceneClientProvider : NSObject <FBSWorkspaceScenesSource, FBSceneClient, FBSSceneUpdater, FBSceneClientProvider> {

	BOOL _workspaceInitialized;
	NSMutableArray* _pendingSceneCreatesBeforeFBSWorkspaceInitialization;
	FBSceneClientProviderInvalidationAction* _invalidationAction;
	NSMutableDictionary* _localSceneInfoByIdentifier;
	NSMutableDictionary* _hostsByIdentifier;

}

@property (nonatomic,readonly) NSObject*<NSCopying> identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)scenes;
-(void)scene:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)host:(id)arg1 didInvalidateWithTransitionContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_sendSceneCreateFBSWorkspaceDelegateForSceneInfo:(id)arg1 transitionContext:(id)arg2 ;
-(id)hostProcess;
-(id)callOutQueue;
-(id)init;
-(void)host:(id)arg1 didReceiveActions:(id)arg2 ;
-(id)endpoint;
-(id)fbsSceneWithIdentifier:(id)arg1 ;
-(id)registerHost:(id)arg1 withSpecification:(id)arg2 settings:(id)arg3 initialClientSettings:(id)arg4 fromRemnant:(id)arg5 ;
-(id)sceneWithIdentifier:(id)arg1 ;
-(void)registerInvalidationAction:(id)arg1 ;
-(void)scene:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 ;
-(void)unregisterHost:(id)arg1 ;
-(id)_init;
-(NSObject*<NSCopying>)identifier;
-(void)scene:(id)arg1 sendMessage:(id)arg2 withResponse:(/*^block*/id)arg3 ;
-(void)host:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(/*^block*/id)arg5 ;
@end

