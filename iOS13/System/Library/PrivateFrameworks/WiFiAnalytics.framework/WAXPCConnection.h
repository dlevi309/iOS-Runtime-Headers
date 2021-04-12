/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/


@protocol WAXPCConnectionDelegate, OS_dispatch_queue;
@class NSXPCConnection, NSString, NSObject;

@interface WAXPCConnection : NSObject {

	id<WAXPCConnectionDelegate> _delegate;
	NSXPCConnection* _connection;
	NSString* _token;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSString * token;                                         //@synthesize token=_token - In the implementation block
@property (assign,nonatomic,__weak) id<WAXPCConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * connection;                           //@synthesize connection=_connection - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)token;
-(id<WAXPCConnectionDelegate>)delegate;
-(void)setDelegate:(id<WAXPCConnectionDelegate>)arg1 ;
-(NSXPCConnection *)connection;
-(id)initWithXPCConnection:(id)arg1 ;
-(void)setToken:(NSString *)arg1 ;
-(void)establishConnectionWithToken:(id)arg1 andReply:(/*^block*/id)arg2 ;
-(void)registerMessageGroup:(long long)arg1 andReply:(/*^block*/id)arg2 ;
-(void)getMessageForUUID:(id)arg1 andReply:(/*^block*/id)arg2 ;
-(void)getNewMessageForKey:(id)arg1 groupType:(long long)arg2 andReply:(/*^block*/id)arg3 ;
-(void)getMessagesModelForGroupType:(long long)arg1 andReply:(/*^block*/id)arg2 ;
-(void)submitMessage:(id)arg1 groupType:(long long)arg2 andReply:(/*^block*/id)arg3 ;
-(void)ingestMessage:(id)arg1 andReply:(/*^block*/id)arg2 ;
-(void)registerForQueryableMessageWithidentifierDict:(id)arg1 groupType:(long long)arg2 andReply:(/*^block*/id)arg3 ;
-(void)clientConfigChangeDelegateSetForGroupType:(long long)arg1 andReply:(/*^block*/id)arg2 ;
-(void)triggerQueryForNWActivity:(long long)arg1 andReply:(/*^block*/id)arg2 ;
-(void)triggerDatapathDiagnosticsAndCollectUpdates:(long long)arg1 waMessage:(id)arg2 andReply:(/*^block*/id)arg3 ;
-(void)killDaemonAndReply:(/*^block*/id)arg1 ;
-(void)clearMessageStoreAndReply:(/*^block*/id)arg1 ;
-(void)trapCrashMiniTracerDumpReadyForInterfaceWithName:(id)arg1 andReply:(/*^block*/id)arg2 ;
-(void)trigger11axPerfStudyAndReply:(/*^block*/id)arg1 ;
@end

