/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(NSObject*<OS_xpc_object>)connection;
-(int)pid;
-(id)initWithConnection:(id)arg1 queue:(id)arg2 ;
-(void)setMessageHandler:(id)arg1 ;
-(id)messageHandler;
-(void)sendMessage:(id)arg1 queue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)sendSyncMessage:(id)arg1 error:(id*)arg2 ;
-(void)_registerCallbacks;
-(void)addCustomXPCHandler:(/*^block*/id)arg1 forKey:(unsigned long long)arg2 ;
-(void)removeCustomXPCHandler:(unsigned long long)arg1 ;
-(void)sendMessageWithType:(unsigned long long)arg1 queue:(id)arg2 reply:(/*^block*/id)arg3 ;
@end

