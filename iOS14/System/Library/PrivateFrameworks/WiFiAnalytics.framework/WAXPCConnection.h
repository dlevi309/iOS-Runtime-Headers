/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)submitMessage:(id)arg1 groupType:(long long)arg2 andReply:(/*^block*/id)arg3 ;
-(void)triggerDatapathDiagnosticsAndCollectUpdates:(long long)arg1 waMessage:(id)arg2 andReply:(/*^block*/id)arg3 ;
-(void)triggerQueryForNWActivity:(long long)arg1 andReply:(/*^block*/id)arg2 ;
-(void)getDeviceAnalyticsConfigurationAndReply:(/*^block*/id)arg1 ;
-(void)killDaemonAndReply:(/*^block*/id)arg1 ;
-(void)ingestMessage:(id)arg1 andReply:(/*^block*/id)arg2 ;
-(void)trapCrashMiniTracerDumpReadyForInterfaceWithName:(id)arg1 andReply:(/*^block*/id)arg2 ;
-(void)setDeviceAnalyticsConfiguration:(id)arg1 andReply:(/*^block*/id)arg2 ;
-(void)getMessageForUUID:(id)arg1 andReply:(/*^block*/id)arg2 ;
-(void)getMessagesModelForGroupType:(long long)arg1 andReply:(/*^block*/id)arg2 ;
-(void)clearMessageStoreAndReply:(/*^block*/id)arg1 ;
-(void)submitWiFiAnalyticsMessage:(id)arg1 andReply:(/*^block*/id)arg2 ;
-(void)trigger11axPerfStudyAndReply:(/*^block*/id)arg1 ;
-(void)summarizeDeviceAnalyticsForNetwork:(id)arg1 maxAgeInDays:(unsigned long long)arg2 andReply:(/*^block*/id)arg3 ;
-(id)initWithXPCConnection:(id)arg1 ;
-(id<WAXPCConnectionDelegate>)delegate;
-(void)clientConfigChangeDelegateSetForGroupType:(long long)arg1 andReply:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<WAXPCConnectionDelegate>)arg1 ;
-(NSXPCConnection *)connection;
-(void)setToken:(NSString *)arg1 ;
-(void)registerForQueryableMessageWithidentifierDict:(id)arg1 groupType:(long long)arg2 andReply:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)establishConnectionWithToken:(id)arg1 andReply:(/*^block*/id)arg2 ;
-(NSString *)token;
-(void)getNewMessageForKey:(id)arg1 groupType:(long long)arg2 andReply:(/*^block*/id)arg3 ;
-(void)registerMessageGroup:(long long)arg1 andReply:(/*^block*/id)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

