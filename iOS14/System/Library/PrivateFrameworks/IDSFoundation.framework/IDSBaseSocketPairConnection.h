/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDestination:(id)arg1 ;
-(void)start;
-(int)socket;
-(BOOL)sendData:(id)arg1 ;
-(id)initWithSocket:(int)arg1 queue:(id)arg2 delegate:(id)arg3 ;
-(void)_callDelegatesWithBlock:(/*^block*/id)arg1 ;
-(id)initWithSocket:(int)arg1 queue:(id)arg2 delegate:(id)arg3 start:(BOOL)arg4 ;
-(void)_processBytesAvailable;
-(void)_sendToConnectedSocket;
-(void)_setupWriteSource;
-(id)initWithQueue:(id)arg1 delegate:(id)arg2 ;
-(void)endSession;
-(void)dealloc;
@end

