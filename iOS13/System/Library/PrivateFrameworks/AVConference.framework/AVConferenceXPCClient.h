/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface AVConferenceXPCClient : NSObject {

	NSObject*<OS_xpc_object> connection;
	NSMutableDictionary* registeredBlocks;
	NSObject*<OS_dispatch_queue> replyQueue;
	NSObject*<OS_dispatch_queue> connectionQueue;
	BOOL connectionPersists;

}

@property (readonly) NSObject*<OS_xpc_object> connection; 
@property (readonly) NSMutableDictionary * registeredBlocks; 
@property (readonly) BOOL connectionPersists; 
+(id)AVConferenceXPCClientSingleton;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_xpc_object>)connection;
-(void)sendMessageAsync:(char*)arg1 ;
-(void)registerBlockForService:(char*)arg1 block:(/*^block*/id)arg2 ;
-(id)sendMessageSync:(char*)arg1 arguments:(id)arg2 ;
-(void)sendMessageAsync:(char*)arg1 arguments:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)deregisterFromService:(char*)arg1 ;
-(id)sendMessageSync:(char*)arg1 arguments:(id)arg2 xpcArguments:(id)arg3 ;
-(void)sendMessageAsync:(char*)arg1 arguments:(id)arg2 ;
-(void)registerBlockForService:(char*)arg1 block:(/*^block*/id)arg2 queue:(id)arg3 ;
-(void)registerBlockForService:(char*)arg1 block:(/*^block*/id)arg2 queue:(id)arg3 eventLogLevel:(int)arg4 ;
-(id)sendMessageSync:(char*)arg1 ;
-(void)sendMessageAsync:(char*)arg1 arguments:(id)arg2 xpcArguments:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)createConnectionToServer;
-(id)newServerDiedDictionary;
-(void)closeConnectionToServer;
-(id)newNSDictionaryFromXPCDictionary:(id)arg1 ;
-(id)newNSErrorFromNSDictionary:(id)arg1 ;
-(void)sendMessageAsync:(char*)arg1 arguments:(id)arg2 reply:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)sendMessageAsync:(char*)arg1 arguments:(id)arg2 xpcArguments:(id)arg3 reply:(/*^block*/id)arg4 queue:(id)arg5 ;
-(id)newXPCDictionaryFromNSDictionary:(id)arg1 ;
-(BOOL)connectionPersists;
-(id)copyConnection;
-(id)newNSDictionaryFromNSError:(id)arg1 ;
-(id)newTimeoutDictionary;
-(NSMutableDictionary *)registeredBlocks;
@end

