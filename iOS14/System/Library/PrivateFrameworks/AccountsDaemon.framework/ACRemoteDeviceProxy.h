/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_queue;
@class IDSService, NSObject, ACRemoteCommandHandler, NSMutableDictionary, NSLock, NSString;

@interface ACRemoteDeviceProxy : NSObject <IDSServiceDelegate> {

	IDSService* _messageSendingService;
	NSObject*<OS_dispatch_queue> _messageSendingQueue;
	NSObject*<OS_dispatch_queue> _commandProcessingQueue;
	ACRemoteCommandHandler* _remoteCommandHandler;
	NSMutableDictionary* _completionHandlersByInternalMessageID;
	NSMutableDictionary* _internalMessageIDsByTransportID;
	NSLock* _completionHandlersLock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(id)init;
-(void)_enqueueCompletionHandler:(/*^block*/id)arg1 forMessageWithInternalID:(id)arg2 transportID:(id)arg3 ;
-(void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)_dequeueCompletionHandlersForMessageWithTransportID:(id)arg1 success:(BOOL)arg2 result:(id)arg3 error:(id)arg4 ;
-(void)sendCommand:(id)arg1 withAccount:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendCommand:(id)arg1 withAccount:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(long long)_priorityForMessageCarryingCommand:(id)arg1 ;
-(BOOL)_sendMessageData:(id)arg1 toDestination:(id)arg2 withPriority:(long long)arg3 bypassDuet:(BOOL)arg4 transportID:(id*)arg5 error:(id*)arg6 ;
-(void)_sendReplyForMessage:(id)arg1 withSuccess:(BOOL)arg2 result:(id)arg3 error:(id)arg4 ;
-(BOOL)_isValidCommandForOutgoingMessage:(id)arg1 ;
-(void)_dequeueCompletionHandlersForMessageWithInternalID:(id)arg1 success:(BOOL)arg2 result:(id)arg3 error:(id)arg4 ;
@end

