/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class IMWeakReference, NSObject, NSMutableArray;

@interface IDSBaseSocketPairConnection : NSObject {

	IMWeakReference* _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _outgoingDataArray;
	NSObject*<OS_dispatch_queue> _readQueue;
	NSObject*<OS_dispatch_source> _readSource;
	NSObject*<OS_dispatch_source> _writeSource;
	int _connectedSocket;
	double _lastDateCheck;
	long long _bytesReceived;
	double _prevBPS;
	BOOL _writeSourceIsResumed;

}

@property (nonatomic,readonly) int socket;              //@synthesize connectedSocket=_connectedSocket - In the implementation block
-(void)dealloc;
-(void)start;
-(void)setDestination:(id)arg1 ;
-(void)endSession;
-(int)socket;
-(void)_callDelegatesWithBlock:(/*^block*/id)arg1 ;
-(id)initWithSocket:(int)arg1 queue:(id)arg2 delegate:(id)arg3 ;
-(BOOL)sendData:(id)arg1 ;
-(id)initWithQueue:(id)arg1 delegate:(id)arg2 ;
-(id)initWithSocket:(int)arg1 queue:(id)arg2 delegate:(id)arg3 start:(BOOL)arg4 ;
-(void)_processBytesAvailable;
-(void)_sendToConnectedSocket;
-(void)_setupWriteSource;
@end

