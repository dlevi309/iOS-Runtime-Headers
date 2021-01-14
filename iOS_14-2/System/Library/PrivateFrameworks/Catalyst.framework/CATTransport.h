/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/


@protocol CATTransportDelegate;
@class CATStateMachine, CATOperationQueue, NSString;

@interface CATTransport : NSObject {

	CATStateMachine* mFSM;
	CATOperationQueue* mControlQueue;
	CATOperationQueue* mMessageQueue;
	CATTransport* mStrongSelf;
	NSString* _name;
	id<CATTransportDelegate> _delegate;

}

@property (nonatomic,copy) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (assign,nonatomic,__weak) id<CATTransportDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)invalidateConnection;
-(id)operationToSendMessage:(id)arg1 ;
-(void)suspend;
-(void)suspendQueue;
-(void)sendMessage:(id)arg1 ;
-(id)init;
-(id<CATTransportDelegate>)delegate;
-(void)suspendConnection;
-(void)didReceiveMessage:(id)arg1 ;
-(void)resumeConnection;
-(void)enqueueDelegateDidConnect;
-(id)debugDescription;
-(void)suspendQueueAndConnection;
-(void)cancelHelloMessageAndResumeQueueOperations;
-(NSString *)name;
-(void)enqueueDelegateDidInterruptWithError:(id)arg1 ;
-(void)setDelegate:(id<CATTransportDelegate>)arg1 ;
-(void)resumeQueueAndConnection;
-(id)description;
-(void)resumeQueue;
-(void)didInterruptWithError:(id)arg1 ;
-(void)cancelAndResumeQueuesAndEnqueueInvalidateConnection;
-(void)enqueueDelegateDidReceiveMessage:(id)arg1 ;
-(void)invalidate;
-(void)delegateDidInvalidate;
-(void)didInvalidate;
-(void)setName:(NSString *)arg1 ;
-(void)enqueueDelegateDidInvalidateAndFinalize;
-(void)enqueueSendForMessage:(id)arg1 ;
-(void)delegateDidResume;
-(void)sendHelloMessageAndResumeQueue;
-(void)enqueueDelegateCouldNotConnectWithError:(id)arg1 ;
-(void)resume;
-(void)invalidSendForMessage:(id)arg1 ;
-(void)dealloc;
@end

