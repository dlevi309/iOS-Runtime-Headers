/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/BSServiceConnectionListenerDelegate.h>
#import <libobjc.A.dylib/FBSOpenApplicationServiceServerInterface.h>

@protocol FBSApplicationInfoProvider, FBSystemServiceDelegate;
@class FBSSerialQueue, BSServiceConnectionListener, FBServiceFacilityServer, NSString;

@interface FBSystemService : NSObject <BSServiceConnectionListenerDelegate, FBSOpenApplicationServiceServerInterface> {

	FBSSerialQueue* _queue;
	BSServiceConnectionListener* _legacyOpenServiceListener;
	int _pendingExit;
	id<FBSApplicationInfoProvider> _lock_defaultInfoProvider;
	os_unfair_lock_s _defaultInfoProviderLock;
	id<FBSystemServiceDelegate> _delegate;
	FBServiceFacilityServer* _server;

}

@property (nonatomic,retain) FBServiceFacilityServer * server;                                       //@synthesize server=_server - In the implementation block
@property (nonatomic,readonly) id<FBSApplicationInfoProvider> _applicationInfoProvider; 
@property (nonatomic,readonly) FBSSerialQueue * queue;                                               //@synthesize queue=_queue - In the implementation block
@property (getter=isPendingExit,readonly) BOOL pendingExit; 
@property (assign,nonatomic,__weak) id<FBSystemServiceDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(FBSSerialQueue *)queue;
-(id<FBSystemServiceDelegate>)delegate;
-(void)setDelegate:(id<FBSystemServiceDelegate>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)setServer:(FBServiceFacilityServer *)arg1 ;
-(FBServiceFacilityServer *)server;
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
-(void)canOpenApplication:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)openApplication:(id)arg1 withOptions:(id)arg2 originator:(id)arg3 requestID:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)shutdownWithOptions:(unsigned long long)arg1 ;
-(void)isPasscodeLockedOrBlockedWithResult:(/*^block*/id)arg1 ;
-(void)handleActions:(id)arg1 source:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(void)terminateApplication:(id)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 source:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)terminateApplicationGroup:(long long)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 source:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)shutdownWithOptions:(id)arg1 origin:(id)arg2 ;
-(void)_setInfoProvider;
-(void)shutdownWithOptions:(unsigned long long)arg1 forSource:(long long)arg2 ;
-(void)setPendingExit:(BOOL)arg1 ;
-(unsigned long long)_mapShutdownOptionsToOptions:(id)arg1 ;
-(void)_performExitTasksForRelaunch:(BOOL)arg1 ;
-(void)exitAndRelaunch:(BOOL)arg1 withOptions:(unsigned long long)arg2 ;
-(void)_terminateProcesses:(id)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_activateApplication:(id)arg1 requestID:(id)arg2 options:(id)arg3 source:(id)arg4 originalSource:(id)arg5 withResult:(/*^block*/id)arg6 ;
-(id<FBSApplicationInfoProvider>)_applicationInfoProvider;
-(BOOL)_isTrustedRequest:(id)arg1 forCaller:(id)arg2 fromClient:(id)arg3 forApplication:(id)arg4 withOptions:(id)arg5 fatalError:(out id*)arg6 ;
-(void)_reallyActivateApplication:(id)arg1 requestID:(id)arg2 options:(id)arg3 source:(id)arg4 originalSource:(id)arg5 isTrusted:(BOOL)arg6 sequenceNumber:(unsigned long long)arg7 cacheGUID:(id)arg8 ourSequenceNumber:(unsigned long long)arg9 ourCacheGUID:(id)arg10 withResult:(/*^block*/id)arg11 ;
-(BOOL)_shouldPendRequestForClientSequenceNumber:(unsigned long long)arg1 clientCacheGUID:(id)arg2 ourSequenceNumber:(unsigned long long)arg3 ourCacheGUID:(id)arg4 ;
-(void)activateApplication:(id)arg1 requestID:(id)arg2 options:(id)arg3 source:(id)arg4 originalSource:(id)arg5 withResult:(/*^block*/id)arg6 ;
-(void)prepareDisplaysForExit;
-(BOOL)_isWhitelistedLaunchSuspendedApp:(id)arg1 ;
-(void)shutdownAndReboot:(BOOL)arg1 ;
-(void)shutdownUsingOptions:(id)arg1 ;
-(void)exitAndRelaunch:(BOOL)arg1 ;
-(void)prepareForExitAndRelaunch:(BOOL)arg1 ;
-(void)setSystemIdleSleepDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(BOOL)isPendingExit;
@end

