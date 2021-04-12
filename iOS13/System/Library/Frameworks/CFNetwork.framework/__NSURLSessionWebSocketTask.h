/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/__NSCFLocalSessionTask.h>

@class NSData, NSMutableArray, NSError, NSString;

@interface __NSURLSessionWebSocketTask : __NSCFLocalSessionTask {

	BOOL _webSocketHandshakeCompleted;
	BOOL _readInProgress;
	int _pingSeed;
	long long _maximumMessageSize;
	long long _closeCode;
	NSData* _closeReason;
	NSMutableArray* _pendingSendWork;
	NSMutableArray* _pendingReceiveWork;
	NSMutableArray* _highPriorityPendingWork;
	NSMutableArray* _delegateWork;
	NSError* _webSocketError;
	NSString* _protocolPicked;

}

@property (retain) NSMutableArray * pendingSendWork;                      //@synthesize pendingSendWork=_pendingSendWork - In the implementation block
@property (retain) NSMutableArray * pendingReceiveWork;                   //@synthesize pendingReceiveWork=_pendingReceiveWork - In the implementation block
@property (retain) NSMutableArray * highPriorityPendingWork;              //@synthesize highPriorityPendingWork=_highPriorityPendingWork - In the implementation block
@property (retain) NSMutableArray * delegateWork;                         //@synthesize delegateWork=_delegateWork - In the implementation block
@property (assign) int pingSeed;                                          //@synthesize pingSeed=_pingSeed - In the implementation block
@property (assign) BOOL webSocketHandshakeCompleted;                      //@synthesize webSocketHandshakeCompleted=_webSocketHandshakeCompleted - In the implementation block
@property (assign) BOOL readInProgress;                                   //@synthesize readInProgress=_readInProgress - In the implementation block
@property (retain) NSError * webSocketError;                              //@synthesize webSocketError=_webSocketError - In the implementation block
@property (retain) NSString * protocolPicked;                             //@synthesize protocolPicked=_protocolPicked - In the implementation block
@property (assign) long long maximumMessageSize;                          //@synthesize maximumMessageSize=_maximumMessageSize - In the implementation block
@property (readonly) long long closeCode;                                 //@synthesize closeCode=_closeCode - In the implementation block
@property (copy,readonly) NSData * closeReason;                           //@synthesize closeReason=_closeReason - In the implementation block
-(void)dealloc;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(void)cancel;
-(void)_onqueue_checkForCompletion;
-(id)initWithOriginalRequest:(id)arg1 ident:(unsigned long long)arg2 taskGroup:(id)arg3 ;
-(void)_onqueue_cancel;
-(void)_onqueue_didReceiveResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)connection:(id)arg1 didFinishLoadingWithError:(id)arg2 ;
-(void)_onqueue_resume;
-(void)_onqueue_ioTick;
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)receiveMessageWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)sendPingWithPongReceiveHandler:(/*^block*/id)arg1 ;
-(void)cancelWithCloseCode:(long long)arg1 reason:(id)arg2 ;
-(void)_onqueue_enableWebSocketFraming:(id)arg1 ;
-(void)_onqueue_pingWithPongHandler:(/*^block*/id)arg1 ;
-(void)_onqueue_sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_onqueue_receiveMessageWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_onqueue_cancelWithCloseCode:(long long)arg1 reason:(id)arg2 ;
-(void)_onqueue_cancelWebSocketTaskWithError:(long long)arg1 ;
-(void)_onqueue_handshakeFailureWithReason:(unsigned long long)arg1 ;
-(BOOL)_onqueue_validateWebSocketHandshake;
-(long long)maximumMessageSize;
-(void)setMaximumMessageSize:(long long)arg1 ;
-(long long)closeCode;
-(NSData *)closeReason;
-(NSMutableArray *)pendingSendWork;
-(void)setPendingSendWork:(NSMutableArray *)arg1 ;
-(NSMutableArray *)pendingReceiveWork;
-(void)setPendingReceiveWork:(NSMutableArray *)arg1 ;
-(NSMutableArray *)highPriorityPendingWork;
-(void)setHighPriorityPendingWork:(NSMutableArray *)arg1 ;
-(NSMutableArray *)delegateWork;
-(void)setDelegateWork:(NSMutableArray *)arg1 ;
-(int)pingSeed;
-(void)setPingSeed:(int)arg1 ;
-(BOOL)webSocketHandshakeCompleted;
-(void)setWebSocketHandshakeCompleted:(BOOL)arg1 ;
-(BOOL)readInProgress;
-(void)setReadInProgress:(BOOL)arg1 ;
-(NSError *)webSocketError;
-(void)setWebSocketError:(NSError *)arg1 ;
-(NSString *)protocolPicked;
-(void)setProtocolPicked:(NSString *)arg1 ;
@end

