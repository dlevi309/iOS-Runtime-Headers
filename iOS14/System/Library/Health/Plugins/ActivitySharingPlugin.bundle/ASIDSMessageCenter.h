/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_queue, ASIDSMessageCenterDelegate;
@class IDSService, NSObject, ASMessageQueue, NSString;

@interface ASIDSMessageCenter : NSObject <IDSServiceDelegate> {

	IDSService* _idsService;
	NSObject*<OS_dispatch_queue> _outgoingDispatchQueue;
	NSObject*<OS_dispatch_queue> _incomingDispatchQueue;
	ASMessageQueue* _outgoingMessageQueue;
	ASMessageQueue* _retryMessageQueue;
	ASMessageQueue* _persistedMessageQueue;
	id<ASIDSMessageCenterDelegate> _delegate;
	NSString* _serviceIdentifier;

}

@property (assign,nonatomic,__weak) id<ASIDSMessageCenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * serviceIdentifier;                              //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(id<ASIDSMessageCenterDelegate>)delegate;
-(id)initWithServiceIdentifier:(id)arg1 ;
-(void)setDelegate:(id<ASIDSMessageCenterDelegate>)arg1 ;
-(NSString *)serviceIdentifier;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4 ;
-(void)dealloc;
-(void)beginReceivingMessages;
-(void)endReceivingMessages;
-(void)processRetryMessageQueue;
-(void)sendInviteRequest:(id)arg1 toDestinations:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendInviteResponse:(id)arg1 toDestinations:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendWithdrawInviteRequest:(id)arg1 toDestinations:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendFinalizeHandshake:(id)arg1 toDestinations:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)processPersistedMessageQueue;
-(void)_processMessageQueue:(id)arg1 preprocessingBlock:(/*^block*/id)arg2 ;
-(void)_sendMessage:(id)arg1 type:(int)arg2 destinations:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handleInviteRequest:(id)arg1 fromSenderAddress:(id)arg2 messageHandledCompletion:(/*^block*/id)arg3 ;
-(void)_handleErrorSendingInviteRequest:(id)arg1 ;
-(void)_handleInviteResponse:(id)arg1 fromSenderAddress:(id)arg2 messageHandledCompletion:(/*^block*/id)arg3 ;
-(void)_handleErrorSendingInviteResponse:(id)arg1 ;
-(void)_handleFinalizeHandshake:(id)arg1 fromSenderAddress:(id)arg2 messageHandledCompletion:(/*^block*/id)arg3 ;
-(void)_handleErrorSendingFinalizeHandshake:(id)arg1 ;
-(void)_handleWithdrawInviteRequest:(id)arg1 fromSenderAddress:(id)arg2 messageHandledCompletion:(/*^block*/id)arg3 ;
-(void)_handleErrorSendingWithdrawInviteRequest:(id)arg1 ;
-(id)_messageHandlerForType:(int)arg1 ;
-(void)_dispatchAction:(SEL)arg1 invocationBlock:(/*^block*/id)arg2 ;
-(void)_handleMessage:(id)arg1 identifier:(id)arg2 ;
-(void)_handleMessageSendSuccess:(BOOL)arg1 error:(id)arg2 identifier:(id)arg3 ;
-(void)_handleErrorForMessage:(id)arg1 ;
-(id)_idsIdentifiersForDestinations:(id)arg1 ;
-(id)_idsIdentifierForDestination:(id)arg1 ;
@end
