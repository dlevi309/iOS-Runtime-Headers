/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <libobjc.A.dylib/BSServiceConnectionEndpointMonitorDelegate.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol FBSWorkspaceDelegate, OS_dispatch_queue;
@class FBSSerialQueue, BSAtomicSignal, FBSWorkspaceFencingImpl, NSObject, NSMutableDictionary, BSServiceConnectionEndpointMonitor, BSServiceConnectionEndpoint, NSArray, NSString;

@interface FBSWorkspace : NSObject <BSServiceConnectionEndpointMonitorDelegate, BSDescriptionProviding> {

	FBSSerialQueue* _callOutQueue;
	id<FBSWorkspaceDelegate> _delegate;
	BSAtomicSignal* _activateSignal;
	FBSWorkspaceFencingImpl* _fencingImpl;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _queue_identifierToScenesSource;
	BSServiceConnectionEndpointMonitor* _connectionEndpointMonitor;
	BSServiceConnectionEndpoint* _defaultShellEndpoint;

}

@property (nonatomic,readonly) id<FBSWorkspaceDelegate> delegate; 
@property (nonatomic,readonly) BSServiceConnectionEndpoint * defaultShellEndpoint;              //@synthesize defaultShellEndpoint=_defaultShellEndpoint - In the implementation block
@property (nonatomic,copy,readonly) NSArray * scenes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_sharedWorkspaceIfExists;
+(void)_registerBlockForWorkspaceCreation:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)_activate;
-(id<FBSWorkspaceDelegate>)delegate;
-(void)setDelegate:(id<FBSWorkspaceDelegate>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)sceneWithIdentifier:(id)arg1 ;
-(NSArray *)scenes;
-(BOOL)trackSystemAnimationFence:(id)arg1 ;
-(id)requestSystemAnimationFence;
-(void)synchronizeSystemAnimationFencesWithCleanUpBlock:(/*^block*/id)arg1 ;
-(BOOL)isTrackingAnySystemAnimationFence;
-(void)requestSceneCreationWithIdentifier:(id)arg1 initialClientSettings:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)requestSceneFromEndpoint:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithSerialQueue:(id)arg1 ;
-(void)monitor:(id)arg1 willLoseEndpoint:(id)arg2 ;
-(void)monitor:(id)arg1 didReceiveEndpoint:(id)arg2 ;
-(BSServiceConnectionEndpoint *)defaultShellEndpoint;
-(void)enumerateScenesWithBlock:(/*^block*/id)arg1 ;
-(void)requestSceneCreationWithInitialClientSettings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_initWithOptions:(id)arg1 ;
-(id)_queue_scenesClientForEndpoint:(id)arg1 creatingIfNecessary:(BOOL)arg2 ;
-(void)_queue_registerSource:(id)arg1 ;
-(void)_queue_unregisterSource:(id)arg1 ;
-(id)_initWithSerialQueue:(id)arg1 ;
-(void)requestDestructionOfScene:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_registerSource:(id)arg1 ;
-(void)_unregisterSource:(id)arg1 ;
-(void)_calloutQueue_executeCalloutFromSource:(id)arg1 withBlock:(/*^block*/id)arg2 ;
@end

