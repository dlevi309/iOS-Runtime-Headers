/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <libobjc.A.dylib/TSUReadChannel.h>

@protocol OS_dispatch_semaphore, TSUReadChannel, OS_dispatch_queue, TSUStreamReadChannel, OS_dispatch_data;
@class NSObject, NSError, NSString;

@interface TSUBufferedReadChannel : NSObject <TSUReadChannel> {

	NSObject*<OS_dispatch_semaphore> _readSemaphore;
	id<TSUReadChannel> _sourceReadChannel;
	unsigned long long _sourceReadBufferSize;
	NSObject*<OS_dispatch_queue> _sourceReadQueue;
	long long _sourceOffset;
	NSError* _sourceReadChannelError;
	/*^block*/id _streamReadChannelBlock;
	id<TSUStreamReadChannel> _streamReadChannel;
	NSObject*<OS_dispatch_queue> _streamReadChannelSourceQueue;
	/*^block*/id _streamReadChannelSourceHandler;
	NSObject*<OS_dispatch_queue> _streamReadChannelOutputQueue;
	BOOL _isStreamOutputDone;
	long long _streamOutputOffset;
	unsigned long long _streamOutputLength;
	NSObject*<OS_dispatch_data> _currentStreamOutputData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)close;
-(void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 ;
-(id)initWithReadChannel:(id)arg1 streamReadChannelBlock:(/*^block*/id)arg2 ;
-(void)setLowWater:(unsigned long long)arg1 ;
-(void)addBarrier:(/*^block*/id)arg1 ;
-(id)initWithReadChannel:(id)arg1 sourceReadBufferSize:(unsigned long long)arg2 streamReadChannelBlock:(/*^block*/id)arg3 ;
-(void)_resetStreamReadChannel;
-(void)_closeStreamReadChannel;
-(void)_readFromOffset:(long long)arg1 length:(unsigned long long)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 ;
-(id)_currentDataIntersectionWithOffset:(long long)arg1 length:(unsigned long long)arg2 isReadDone:(BOOL*)arg3 ;
-(void)setStreamReadChannelSourceQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

