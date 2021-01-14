/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, NSMutableDictionary;

@interface MRXPCConnection : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableDictionary* _customXpcHandlers;
	NSObject*<OS_xpc_object> _connection;
	/*^block*/id _messageHandler;
	/*^block*/id _invalidationHandler;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) id messageHandler;                                    //@synthesize messageHandler=_messageHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                               //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,readonly) int pid; 
@property (nonatomic,readonly) unsigned uid; 
-(unsigned)uid;
-(void)removeCustomXPCHandler:(unsigned long long)arg1 ;
-(int)pid;
-(id)messageHandler;
-(id)sendSyncMessage:(id)arg1 error:(id*)arg2 ;
-(NSObject*<OS_xpc_object>)connection;
-(void)sendMessageWithType:(unsigned long long)arg1 queue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)sendMessage:(id)arg1 queue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)invalidationHandler;
-(id)initWithConnection:(id)arg1 queue:(id)arg2 ;
-(void)setMessageHandler:(id)arg1 ;
-(void)dealloc;
-(void)addCustomXPCHandler:(/*^block*/id)arg1 forKey:(unsigned long long)arg2 ;
@end

