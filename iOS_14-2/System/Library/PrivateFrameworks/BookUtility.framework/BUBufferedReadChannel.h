/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
*/

#import <libobjc.A.dylib/BUReadChannel.h>

@protocol OS_dispatch_queue, BUReadChannel, BUStreamReadChannel, OS_dispatch_data;
@class NSObject, NSError, NSArray, NSString;

@interface BUBufferedReadChannel : NSObject <BUReadChannel> {

	BOOL _streamOutputDone;
	/*^block*/id _streamReadChannelSourceHandler;
	NSObject*<OS_dispatch_queue> _readQueue;
	id<BUReadChannel> _sourceReadChannel;
	unsigned long long _sourceReadBufferSize;
	long long _sourceOffset;
	unsigned long long _sourceLength;
	NSError* _sourceReadChannelError;
	NSArray* _blockInfos;
	/*^block*/id _streamReadChannelBlock;
	id<BUStreamReadChannel> _streamReadChannel;
	long long _streamOutputOffset;
	unsigned long long _streamOutputOutstandingLength;
	unsigned long long _streamOutputLength;
	NSObject*<OS_dispatch_data> _currentStreamOutputData;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> readQueue;                           //@synthesize readQueue=_readQueue - In the implementation block
@property (nonatomic,retain) id<BUReadChannel> sourceReadChannel;                              //@synthesize sourceReadChannel=_sourceReadChannel - In the implementation block
@property (assign,nonatomic) unsigned long long sourceReadBufferSize;                          //@synthesize sourceReadBufferSize=_sourceReadBufferSize - In the implementation block
@property (assign,nonatomic) long long sourceOffset;                                           //@synthesize sourceOffset=_sourceOffset - In the implementation block
@property (assign,nonatomic) unsigned long long sourceLength;                                  //@synthesize sourceLength=_sourceLength - In the implementation block
@property (nonatomic,retain) NSError * sourceReadChannelError;                                 //@synthesize sourceReadChannelError=_sourceReadChannelError - In the implementation block
@property (nonatomic,retain) NSArray * blockInfos;                                             //@synthesize blockInfos=_blockInfos - In the implementation block
@property (nonatomic,copy) id streamReadChannelBlock;                                          //@synthesize streamReadChannelBlock=_streamReadChannelBlock - In the implementation block
@property (nonatomic,retain) id<BUStreamReadChannel> streamReadChannel;                        //@synthesize streamReadChannel=_streamReadChannel - In the implementation block
@property (assign,getter=isStreamOutputDone,nonatomic) BOOL streamOutputDone;                  //@synthesize streamOutputDone=_streamOutputDone - In the implementation block
@property (assign,nonatomic) long long streamOutputOffset;                                     //@synthesize streamOutputOffset=_streamOutputOffset - In the implementation block
@property (assign,nonatomic) unsigned long long streamOutputOutstandingLength;                 //@synthesize streamOutputOutstandingLength=_streamOutputOutstandingLength - In the implementation block
@property (assign,nonatomic) unsigned long long streamOutputLength;                            //@synthesize streamOutputLength=_streamOutputLength - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_data> currentStreamOutputData;              //@synthesize currentStreamOutputData=_currentStreamOutputData - In the implementation block
@property (nonatomic,copy) id streamReadChannelSourceHandler;                                  //@synthesize streamReadChannelSourceHandler=_streamReadChannelSourceHandler - In the implementation block
@property (nonatomic,readonly) BOOL isValid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_close;
-(void)close;
-(BOOL)isValid;
-(long long)sourceOffset;
-(void)dealloc;
-(void)readWithHandler:(/*^block*/id)arg1 ;
-(void)addBarrier:(/*^block*/id)arg1 ;
-(void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)setStreamReadChannelSourceHandler:(id)arg1 ;
-(void)setLowWater:(unsigned long long)arg1 ;
-(id)initWithReadChannel:(id)arg1 blockInfos:(id)arg2 streamReadChannelBlock:(/*^block*/id)arg3 ;
-(id)initWithReadChannel:(id)arg1 sourceReadBufferSize:(unsigned long long)arg2 blockInfos:(id)arg3 streamReadChannelBlock:(/*^block*/id)arg4 ;
-(void)_closeStreamReadChannel;
-(BOOL)isStreamOutputDone;
-(void)setStreamOutputDone:(BOOL)arg1 ;
-(unsigned long long)streamOutputLength;
-(void)setStreamOutputLength:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_data>)currentStreamOutputData;
-(void)setCurrentStreamOutputData:(NSObject*<OS_dispatch_data>)arg1 ;
-(NSError *)sourceReadChannelError;
-(NSObject*<OS_dispatch_queue>)readQueue;
-(void)_readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)_resetStreamReadChannelIfNeededForOffset:(long long)arg1 length:(unsigned long long)arg2 ;
-(id)_currentDataIntersectionWithOffset:(long long)arg1 length:(unsigned long long)arg2 isReadDone:(BOOL*)arg3 ;
-(id)streamReadChannelSourceHandler;
-(void)setSourceReadChannelError:(NSError *)arg1 ;
-(void)setSourceOffset:(long long)arg1 ;
-(unsigned long long)sourceLength;
-(void)setSourceLength:(unsigned long long)arg1 ;
-(void)setReadQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<BUReadChannel>)sourceReadChannel;
-(void)setSourceReadChannel:(id<BUReadChannel>)arg1 ;
-(unsigned long long)sourceReadBufferSize;
-(void)setSourceReadBufferSize:(unsigned long long)arg1 ;
-(NSArray *)blockInfos;
-(void)setBlockInfos:(NSArray *)arg1 ;
-(id)streamReadChannelBlock;
-(void)setStreamReadChannelBlock:(id)arg1 ;
-(id<BUStreamReadChannel>)streamReadChannel;
-(void)setStreamReadChannel:(id<BUStreamReadChannel>)arg1 ;
-(long long)streamOutputOffset;
-(void)setStreamOutputOffset:(long long)arg1 ;
-(unsigned long long)streamOutputOutstandingLength;
-(void)setStreamOutputOutstandingLength:(unsigned long long)arg1 ;
@end
