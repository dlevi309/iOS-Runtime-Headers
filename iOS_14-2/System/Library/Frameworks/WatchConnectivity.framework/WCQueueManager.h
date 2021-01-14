/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSMutableDictionary;

@interface WCQueueManager : NSObject {

	BOOL _canSend;
	BOOL _messageOutstanding;
	NSMutableArray* _messageQueue;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableDictionary* _inFlightMessages;

}

@property (assign) BOOL canSend;                                        //@synthesize canSend=_canSend - In the implementation block
@property (assign) BOOL messageOutstanding;                             //@synthesize messageOutstanding=_messageOutstanding - In the implementation block
@property (retain) NSMutableArray * messageQueue;                       //@synthesize messageQueue=_messageQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (retain) NSMutableDictionary * inFlightMessages;              //@synthesize inFlightMessages=_inFlightMessages - In the implementation block
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)init;
-(NSMutableArray *)messageQueue;
-(void)setMessageQueue:(NSMutableArray *)arg1 ;
-(BOOL)canSend;
-(void)cancelQueuedMessages;
-(void)allowMessageSending;
-(void)handleSentMessageWithIdentifier:(id)arg1 error:(id)arg2 ;
-(void)onqueue_allowMessageSending;
-(void)setCanSend:(BOOL)arg1 ;
-(void)onqueue_attemptToSend;
-(void)onqueue_sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)onqueue_enqueueMessage:(id)arg1 ;
-(BOOL)messageOutstanding;
-(id)onqueue_peekMessage;
-(NSMutableDictionary *)inFlightMessages;
-(void)setMessageOutstanding:(BOOL)arg1 ;
-(void)onqueue_handleAcceptanceWithCurrentAccepted:(BOOL)arg1 nextAvailable:(BOOL)arg2 ;
-(void)onqueue_handleFailedDaemonConnectionForQueuedMessage:(id)arg1 ;
-(void)onqueue_dequeueMessage;
-(void)onqueue_handleSentMessageWithIdentifier:(id)arg1 error:(id)arg2 ;
-(void)onqueue_cancelQueuedMessages;
-(void)onqueue_clearQueuedMessages;
-(void)onqueue_cancelDaemonMessages;
-(void)setInFlightMessages:(NSMutableDictionary *)arg1 ;
@end

