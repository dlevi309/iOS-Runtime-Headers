/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <libobjc.A.dylib/UMUserSyncStakeholder.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSXPCListener, NSMutableArray, NSObject, NSOperationQueue, NSString;

@interface CKDCloudDatabaseServer : NSObject <UMUserSyncStakeholder> {

	int _tccToken;
	NSXPCListener* _xpcListener;
	NSMutableArray* _connectedClients;
	NSObject*<OS_dispatch_source> _sighandlerSource;
	NSOperationQueue* _clientTeardownQueue;
	unsigned long long _stateHandle;
	NSObject*<OS_dispatch_source> _statusReportRequestSource;
	NSObject*<OS_dispatch_queue> _statusReportQueue;
	NSObject*<OS_dispatch_queue> _statusReportCallbackQueue;
	NSMutableArray* _statusReportCallbacks;

}

@property (nonatomic,retain) NSXPCListener * xpcListener;                                          //@synthesize xpcListener=_xpcListener - In the implementation block
@property (nonatomic,retain) NSMutableArray * connectedClients;                                    //@synthesize connectedClients=_connectedClients - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> sighandlerSource;                       //@synthesize sighandlerSource=_sighandlerSource - In the implementation block
@property (nonatomic,retain) NSOperationQueue * clientTeardownQueue;                               //@synthesize clientTeardownQueue=_clientTeardownQueue - In the implementation block
@property (assign,nonatomic) unsigned long long stateHandle;                                       //@synthesize stateHandle=_stateHandle - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> statusReportRequestSource;              //@synthesize statusReportRequestSource=_statusReportRequestSource - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> statusReportQueue;                       //@synthesize statusReportQueue=_statusReportQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> statusReportCallbackQueue;               //@synthesize statusReportCallbackQueue=_statusReportCallbackQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * statusReportCallbacks;                               //@synthesize statusReportCallbacks=_statusReportCallbacks - In the implementation block
@property (assign,nonatomic) int tccToken;                                                         //@synthesize tccToken=_tccToken - In the implementation block
@property (nonatomic,readonly) BOOL isInSyncBubble; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServer;
-(BOOL)isInSyncBubble;
-(void)_dumpStatusReportArrayToOsTrace:(id)arg1 ;
-(void)setXpcListener:(NSXPCListener *)arg1 ;
-(void)setSighandlerSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setStateHandle:(unsigned long long)arg1 ;
-(int)tccToken;
-(void)setStatusReportRequestSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(id)init;
-(void)setTccToken:(int)arg1 ;
-(void)setConnectedClients:(NSMutableArray *)arg1 ;
-(NSObject*<OS_dispatch_source>)statusReportRequestSource;
-(void)statusReportWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)willSwitchUser;
-(void)setStatusReportQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)statusReportCallbackQueue;
-(void)dumpStatusReportToFileHandle:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)statusReportQueue;
-(void)setStatusReportCallbacks:(NSMutableArray *)arg1 ;
-(void)setStatusReportCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableArray *)statusReportCallbacks;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSOperationQueue *)clientTeardownQueue;
-(void)setClientTeardownQueue:(NSOperationQueue *)arg1 ;
-(void)uploadContent;
-(void)_dumpStatusReportToFileHandle:(id)arg1 ;
-(NSXPCListener *)xpcListener;
-(void)kickOffPendingLongLivedOperations;
-(unsigned long long)stateHandle;
-(id)CKStatusReportArray;
-(NSMutableArray *)connectedClients;
-(void)resume;
-(NSObject*<OS_dispatch_source>)sighandlerSource;
-(void)dealloc;
-(void)enumerateConnectedClients:(/*^block*/id)arg1 ;
@end

