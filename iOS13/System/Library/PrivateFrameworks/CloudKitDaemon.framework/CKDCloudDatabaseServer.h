/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <libobjc.A.dylib/UMUserSyncStakeholder.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSXPCListener, NSMutableArray, NSMutableDictionary, NSObject, NSOperationQueue, NSString;

@interface CKDCloudDatabaseServer : NSObject <UMUserSyncStakeholder> {

	int _tccToken;
	NSXPCListener* _xpcListener;
	NSMutableArray* _connectedClients;
	NSMutableDictionary* _recentClientsByProcessName;
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
@property (nonatomic,retain) NSMutableDictionary * recentClientsByProcessName;                     //@synthesize recentClientsByProcessName=_recentClientsByProcessName - In the implementation block
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
-(id)init;
-(void)dealloc;
-(void)resume;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(BOOL)isInSyncBubble;
-(void)willSwitchUser;
-(void)uploadContent;
-(void)setXpcListener:(NSXPCListener *)arg1 ;
-(NSXPCListener *)xpcListener;
-(id)CKStatusReportArray;
-(unsigned long long)stateHandle;
-(void)setStateHandle:(unsigned long long)arg1 ;
-(NSMutableArray *)connectedClients;
-(void)_dumpStatusReportToFileHandle:(id)arg1 ;
-(void)statusReportWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_source>)sighandlerSource;
-(NSObject*<OS_dispatch_source>)statusReportRequestSource;
-(NSMutableDictionary *)recentClientsByProcessName;
-(void)setRecentClientsByProcessName:(NSMutableDictionary *)arg1 ;
-(void)_cleanRecentClients;
-(NSOperationQueue *)clientTeardownQueue;
-(NSObject*<OS_dispatch_queue>)statusReportQueue;
-(void)_dumpStatusReportArrayToOsTrace:(id)arg1 ;
-(NSMutableArray *)statusReportCallbacks;
-(NSObject*<OS_dispatch_queue>)statusReportCallbackQueue;
-(void)kickOffPendingLongLivedOperations;
-(void)dumpStatusReportToFileHandle:(id)arg1 ;
-(void)setConnectedClients:(NSMutableArray *)arg1 ;
-(void)setSighandlerSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setClientTeardownQueue:(NSOperationQueue *)arg1 ;
-(void)setStatusReportRequestSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setStatusReportQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setStatusReportCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setStatusReportCallbacks:(NSMutableArray *)arg1 ;
-(int)tccToken;
-(void)setTccToken:(int)arg1 ;
@end

