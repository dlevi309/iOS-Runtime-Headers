/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/__NSCFLocalSessionTask.h>

@protocol OS_nw_protocol_options;
@class NSData, NSMutableArray, NSError, NSString, NSObject;

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
	NSObject*<OS_nw_protocol_options> _wsOptions;

}

@property (assign) long long maximumMessageSize;              //@synthesize maximumMessageSize=_maximumMessageSize - In the implementation block
@property (readonly) long long closeCode;                     //@synthesize closeCode=_closeCode - In the implementation block
@property (copy,readonly) NSData * closeReason;               //@synthesize closeReason=_closeReason - In the implementation block
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)connection:(id)arg1 didFinishLoadingWithError:(id)arg2 ;
-(void)_onqueue_didReceiveResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithOriginalRequest:(id)arg1 ident:(unsigned long long)arg2 taskGroup:(id)arg3 ;
-(long long)maximumMessageSize;
-(void)receiveMessageWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_onqueue_resume;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(void)_onqueue_cancel;
-(void)setMaximumMessageSize:(long long)arg1 ;
-(long long)closeCode;
-(NSData *)closeReason;
-(void)cancelWithCloseCode:(long long)arg1 reason:(id)arg2 ;
-(void)sendPingWithPongReceiveHandler:(/*^block*/id)arg1 ;
-(void)cancel;
-(void)dealloc;
@end

