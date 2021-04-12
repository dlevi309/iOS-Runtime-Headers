/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableData;

@interface OspreyGRPCCallContext : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _messageHandler;
	/*^block*/id _completionHandler;
	NSMutableData* _currentChunk;
	unsigned _length;
	BOOL _hasLength;
	unsigned char _compressedFlag;
	unsigned _logSequenceNumber;

}
-(id)_initWithQueue:(id)arg1 handler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_fireCompletionWithError:(id)arg1 ;
-(void)_handleData:(id)arg1 ;
@end

