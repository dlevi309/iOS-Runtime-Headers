/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/REMDaemonController.h>
#import <libobjc.A.dylib/REMXPCClient.h>

@protocol REMXPCDaemonControllerCloudKitNetworkActivityDelegate;
@class NSMutableDictionary, NSString, NSXPCConnection, REMStoreContainerToken;

@interface REMXPCDaemonController : NSObject <REMDaemonController, REMXPCClient> {

	os_unfair_lock_s _ivarLock;
	id<REMXPCDaemonControllerCloudKitNetworkActivityDelegate> _cloudKitNetworkActivityDelegate;
	NSMutableDictionary* _l_performersByName;
	NSString* _serviceName;
	NSXPCConnection* _xpcConnection;
	REMStoreContainerToken* _storeContainerToken;

}

@property (assign,nonatomic) os_unfair_lock_s ivarLock;                                                                                     //@synthesize ivarLock=_ivarLock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * l_performersByName;                                                                      //@synthesize l_performersByName=_l_performersByName - In the implementation block
@property (nonatomic,retain) NSString * serviceName;                                                                                        //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                                                               //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) REMStoreContainerToken * storeContainerToken;                                                                  //@synthesize storeContainerToken=_storeContainerToken - In the implementation block
@property (assign,nonatomic,__weak) id<REMXPCDaemonControllerCloudKitNetworkActivityDelegate> cloudKitNetworkActivityDelegate;              //@synthesize cloudKitNetworkActivityDelegate=_cloudKitNetworkActivityDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)weakSharedInstance;
+(id)userInteractiveDaemonController;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(NSString *)serviceName;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(os_unfair_lock_s)ivarLock;
-(void)setIvarLock:(os_unfair_lock_s)arg1 ;
-(id)syncDebugPerformerWithReason:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)initWithStoreContainerToken:(id)arg1 ;
-(REMStoreContainerToken *)storeContainerToken;
-(void)asyncStorePerformerWithReason:(id)arg1 loadHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(id)syncStorePerformerWithReason:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)asyncSyncInterfacePerformerWithReason:(id)arg1 loadHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(id)syncChangeTrackingPerformerWithReason:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)_xpcConnectionReconnectingIfNecessary;
-(id)initWithStoreContainerToken:(id)arg1 userInteractive:(BOOL)arg2 ;
-(id)_syncPerformerWithResolver:(id)arg1 reason:(id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)_asyncPerformerWithResolver:(id)arg1 reason:(id)arg2 loadHandler:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 ;
-(id)_resolveAndCachePerformerWithResolver:(id)arg1 reason:(id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(NSMutableDictionary *)l_performersByName;
-(void)_asyncResolveAndCachePerformerWithResolver:(id)arg1 reason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_resolvePerformerWithResolver:(id)arg1 reason:(id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)_asyncResolvePerformerWithResolver:(id)arg1 reason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_xpcConnectionDidInterrupt;
-(void)_xpcConnectionDidInvalidate;
-(void)cloudKitNetworkActivityDidUpdate:(id)arg1 ;
-(id<REMXPCDaemonControllerCloudKitNetworkActivityDelegate>)cloudKitNetworkActivityDelegate;
-(id)syncDebugPerformerWithErrorHandler:(/*^block*/id)arg1 ;
-(id)syncSyncInterfacePerformerWithReason:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)syncIndexingPerformerWithReason:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)asyncIndexingPerformerWithReason:(id)arg1 loadHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)setCloudKitNetworkActivityDelegate:(id<REMXPCDaemonControllerCloudKitNetworkActivityDelegate>)arg1 ;
-(void)setL_performersByName:(NSMutableDictionary *)arg1 ;
-(void)setStoreContainerToken:(REMStoreContainerToken *)arg1 ;
@end

