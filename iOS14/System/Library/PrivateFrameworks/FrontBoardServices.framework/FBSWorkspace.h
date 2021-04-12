/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)scenes;
-(void)requestSceneFromEndpoint:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_initWithOptions:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(id)succinctDescription;
-(void)synchronizeSystemAnimationFencesWithCleanUpBlock:(/*^block*/id)arg1 ;
-(void)requestSceneCreationWithInitialClientSettings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(id<FBSWorkspaceDelegate>)delegate;
-(void)_unregisterSource:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_registerSource:(id)arg1 ;
-(id)_initWithSerialQueue:(id)arg1 ;
-(NSString *)debugDescription;
-(BSServiceConnectionEndpoint *)defaultShellEndpoint;
-(void)_activate;
-(id)requestSystemAnimationFence;
-(id)sceneWithIdentifier:(id)arg1 ;
-(void)setDelegate:(id<FBSWorkspaceDelegate>)arg1 ;
-(NSString *)description;
-(BOOL)trackSystemAnimationFence:(id)arg1 ;
-(void)requestDestructionOfScene:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)isTrackingAnySystemAnimationFence;
-(id)_queue_scenesClientForEndpoint:(id)arg1 creatingIfNecessary:(BOOL)arg2 ;
-(void)_queue_registerSource:(id)arg1 ;
-(void)_calloutQueue_executeCalloutFromSource:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)enumerateScenesWithBlock:(/*^block*/id)arg1 ;
-(void)monitor:(id)arg1 didReceiveEndpoint:(id)arg2 ;
-(void)monitor:(id)arg1 willLoseEndpoint:(id)arg2 ;
-(void)_queue_unregisterSource:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)initWithSerialQueue:(id)arg1 ;
-(void)requestSceneCreationWithIdentifier:(id)arg1 initialClientSettings:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

