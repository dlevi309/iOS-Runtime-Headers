/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/REMDaemonController.h>

@protocol REMXPCDaemonControllerCloudKitNetworkActivityDelegate;
@class NSMutableDictionary, NSString, NSXPCConnection, REMStoreContainerToken;

@interface REMXPCDaemonController : NSObject <REMDaemonController> {

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
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(id)_resolvePerformerWithResolver:(id)arg1 reason:(id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(id)syncStorePerformerWithReason:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)asyncStorePerformerWithReason:(id)arg1 loadHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(id)init;
-(void)_xpcConnectionDidInvalidate;
-(id)syncDebugPerformerWithReason:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)setCloudKitNetworkActivityDelegate:(id<REMXPCDaemonControllerCloudKitNetworkActivityDelegate>)arg1 ;
-(id)_resolveAndCachePerformerWithResolver:(id)arg1 reason:(id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(os_unfair_lock_s)ivarLock;
-(void)setIvarLock:(os_unfair_lock_s)arg1 ;
-(void)asyncSyncInterfacePerformerWithReason:(id)arg1 loadHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(NSString *)description;
-(id)initWithStoreContainerToken:(id)arg1 ;
-(void)setL_performersByName:(NSMutableDictionary *)arg1 ;
-(id)syncIndexingPerformerWithReason:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)initWithStoreContainerToken:(id)arg1 userInteractive:(BOOL)arg2 ;
-(id<REMXPCDaemonControllerCloudKitNetworkActivityDelegate>)cloudKitNetworkActivityDelegate;
-(NSString *)serviceName;
-(void)invalidate;
-(id)syncSyncInterfacePerformerWithReason:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)_xpcConnectionDidInterrupt;
-(void)_asyncPerformerWithResolver:(id)arg1 reason:(id)arg2 loadHandler:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 ;
-(id)syncDebugPerformerWithErrorHandler:(/*^block*/id)arg1 ;
-(id)syncChangeTrackingPerformerWithReason:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)l_performersByName;
-(void)setServiceName:(NSString *)arg1 ;
-(id)_syncPerformerWithResolver:(id)arg1 reason:(id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)setStoreContainerToken:(REMStoreContainerToken *)arg1 ;
-(REMStoreContainerToken *)storeContainerToken;
-(id)_xpcConnectionReconnectingIfNecessary;
-(void)_asyncResolvePerformerWithResolver:(id)arg1 reason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)asyncIndexingPerformerWithReason:(id)arg1 loadHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)_asyncResolveAndCachePerformerWithResolver:(id)arg1 reason:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

