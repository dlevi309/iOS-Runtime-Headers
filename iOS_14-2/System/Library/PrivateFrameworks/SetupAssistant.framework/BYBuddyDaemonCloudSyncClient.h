/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/

#import <libobjc.A.dylib/BYClientDaemonCloudSyncProtocol.h>

@protocol BYClientDaemonCloudSyncProtocol;
@class NSXPCConnection, NSString;

@interface BYBuddyDaemonCloudSyncClient : NSObject <BYClientDaemonCloudSyncProtocol> {

	BOOL _syncDidStart;
	BOOL _syncDidComplete;
	id<BYClientDaemonCloudSyncProtocol> _delegate;
	NSXPCConnection* _connection;

}

@property (retain) NSXPCConnection * connection;                              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) BOOL syncDidStart;                               //@synthesize syncDidStart=_syncDidStart - In the implementation block
@property (assign,nonatomic) BOOL syncDidComplete;                            //@synthesize syncDidComplete=_syncDidComplete - In the implementation block
@property (__weak) id<BYClientDaemonCloudSyncProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientInterface;
-(id)init;
-(BOOL)syncDidComplete;
-(id<BYClientDaemonCloudSyncProtocol>)delegate;
-(void)connectToDaemon;
-(void)syncProgress:(double)arg1 ;
-(void)syncCompletedWithErrors:(id)arg1 ;
-(void)needsToSync:(/*^block*/id)arg1 ;
-(void)setSyncDidStart:(BOOL)arg1 ;
-(void)setSyncDidComplete:(BOOL)arg1 ;
-(void)isSyncInProgress:(/*^block*/id)arg1 ;
-(BOOL)syncDidStart;
-(void)startSync;
-(void)fetchCurrentSyncState:(/*^block*/id)arg1 ;
-(void)cloudSyncProgressUpdate:(long long)arg1 completedClients:(long long)arg2 errors:(id)arg3 ;
-(void)setDelegate:(id<BYClientDaemonCloudSyncProtocol>)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)cancelSync;
@end

