/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSUReadChannel.h>

@protocol OS_dispatch_queue, TSUReadChannel, TSUStreamReadChannel, OS_dispatch_data;
@class NSObject, NSError, NSArray, NSString;

@interface TSUBufferedReadChannel : NSObject <TSUReadChannel> {

	NSObject*<OS_dispatch_queue> _readQueue;
	id<TSUReadChannel> _sourceReadChannel;
	unsigned long long _sourceReadBufferSize;
	long long _sourceOffset;
	unsigned long long _sourceLength;
	NSError* _sourceReadChannelError;
	NSArray* _blockInfos;
	/*^block*/id _streamReadChannelBlock;
	id<TSUStreamReadChannel> _streamReadChannel;
	/*^block*/id _streamReadChannelSourceHandler;
	BOOL _isStreamOutputDone;
	long long _streamOutputOffset;
	unsigned long long _streamOutputOutstandingLength;
	unsigned long long _streamOutputLength;
	NSObject*<OS_dispatch_data> _currentStreamOutputData;

}

@property (nonatomic,readonly) BOOL isValid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_close;
-(void)close;
-(BOOL)isValid;
-(void)dealloc;
-(void)readWithHandler:(/*^block*/id)arg1 ;
-(void)addBarrier:(/*^block*/id)arg1 ;
-(void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)setStreamReadChannelSourceHandler:(/*^block*/id)arg1 ;
-(void)setLowWater:(unsigned long long)arg1 ;
-(id)initWithReadChannel:(id)arg1 blockInfos:(id)arg2 streamReadChannelBlock:(/*^block*/id)arg3 ;
-(id)initWithReadChannel:(id)arg1 sourceReadBufferSize:(unsigned long long)arg2 blockInfos:(id)arg3 streamReadChannelBlock:(/*^block*/id)arg4 ;
-(void)_closeStreamReadChannel;
-(void)_readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)_resetStreamReadChannelIfNeededForOffset:(long long)arg1 length:(unsigned long long)arg2 ;
-(id)_currentDataIntersectionWithOffset:(long long)arg1 length:(unsigned long long)arg2 isReadDone:(BOOL*)arg3 ;
@end

