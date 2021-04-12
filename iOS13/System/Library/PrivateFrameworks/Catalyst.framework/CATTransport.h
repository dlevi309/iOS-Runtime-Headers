/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(NSString *)name;
-(void)invalidate;
-(id<CATTransportDelegate>)delegate;
-(void)setDelegate:(id<CATTransportDelegate>)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)resume;
-(void)suspend;
-(void)sendMessage:(id)arg1 ;
-(void)suspendConnection;
-(void)resumeConnection;
-(void)resumeQueue;
-(void)invalidateConnection;
-(void)didInvalidate;
-(void)didInterruptWithError:(id)arg1 ;
-(void)didReceiveMessage:(id)arg1 ;
-(id)operationToSendMessage:(id)arg1 ;
-(void)delegateDidInvalidate;
-(void)enqueueDelegateDidInterruptWithError:(id)arg1 ;
-(void)sendHelloMessageAndResumeQueue;
-(void)enqueueSendForMessage:(id)arg1 ;
-(void)resumeQueueAndConnection;
-(void)cancelHelloMessageAndResumeQueueOperations;
-(void)suspendQueueAndConnection;
-(void)enqueueDelegateDidConnect;
-(void)enqueueDelegateCouldNotConnectWithError:(id)arg1 ;
-(void)enqueueDelegateDidReceiveMessage:(id)arg1 ;
-(void)cancelAndResumeQueuesAndEnqueueInvalidateConnection;
-(void)invalidSendForMessage:(id)arg1 ;
-(void)enqueueDelegateDidInvalidateAndFinalize;
-(void)delegateDidResume;
-(void)suspendQueue;
@end

