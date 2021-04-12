/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/NSURLSessionTask.h>

@class NSData;

@interface NSURLSessionWebSocketTask : NSURLSessionTask {

	long long _maximumMessageSize;
	long long _closeCode;
	NSData* _closeReason;

}

@property (assign) long long maximumMessageSize;              //@synthesize maximumMessageSize=_maximumMessageSize - In the implementation block
@property (readonly) long long closeCode;                     //@synthesize closeCode=_closeCode - In the implementation block
@property (copy,readonly) NSData * closeReason;               //@synthesize closeReason=_closeReason - In the implementation block
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)receiveMessageWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)sendPingWithPongReceiveHandler:(/*^block*/id)arg1 ;
-(void)cancelWithCloseCode:(long long)arg1 reason:(id)arg2 ;
-(long long)maximumMessageSize;
-(void)setMaximumMessageSize:(long long)arg1 ;
-(long long)closeCode;
-(NSData *)closeReason;
@end

