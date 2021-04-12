/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/

#import <MediaServices/MediaServices-Structs.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSOutputStream, NSInputStream, NSObject, NSString;

@interface MSVStreamWriter : NSObject <NSStreamDelegate> {

	NSMutableArray* _pendingWriteDataList;
	BOOL _stopped;
	BOOL _closeOnStop;
	z_stream_s* _zstreamp;
	BOOL _compressed;
	unsigned long long _maximumBufferSize;
	double _timestamp;
	unsigned long long _bytesWritten;
	/*^block*/id _canWriteDataBlock;
	/*^block*/id _didFinishWritingBlock;
	/*^block*/id _didEncounterErrorBlock;
	NSOutputStream* _outputStream;
	NSInputStream* _inputStream;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSOutputStream * outputStream;                     //@synthesize outputStream=_outputStream - In the implementation block
@property (nonatomic,retain) NSInputStream * inputStream;                       //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) double timestamp;                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) unsigned long long bytesWritten;                   //@synthesize bytesWritten=_bytesWritten - In the implementation block
@property (assign,nonatomic) unsigned long long maximumBufferSize;              //@synthesize maximumBufferSize=_maximumBufferSize - In the implementation block
@property (assign,getter=isCompressed,nonatomic) BOOL compressed;               //@synthesize compressed=_compressed - In the implementation block
@property (nonatomic,copy) id canWriteDataBlock;                                //@synthesize canWriteDataBlock=_canWriteDataBlock - In the implementation block
@property (nonatomic,copy) id didFinishWritingBlock;                            //@synthesize didFinishWritingBlock=_didFinishWritingBlock - In the implementation block
@property (nonatomic,copy) id didEncounterErrorBlock;                           //@synthesize didEncounterErrorBlock=_didEncounterErrorBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQueue:(id)arg1 ;
-(void)stopWithCompletion:(/*^block*/id)arg1 ;
-(id)didEncounterErrorBlock;
-(unsigned long long)maximumBufferSize;
-(void)setMaximumBufferSize:(unsigned long long)arg1 ;
-(unsigned long long)bytesWritten;
-(id)init;
-(void)_onQueue_stop;
-(void)setDidFinishWritingBlock:(id)arg1 ;
-(void)setBytesWritten:(unsigned long long)arg1 ;
-(id)didFinishWritingBlock;
-(void)setCanWriteDataBlock:(id)arg1 ;
-(void)_writeAvailablePendingData;
-(BOOL)_processInput:(id)arg1 generatingDecompressedData:(id*)arg2 ;
-(BOOL)writeAllData:(id)arg1 error:(id*)arg2 ;
-(void)writeAllData:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)writeStreamError:(SCD_Struct_MS9)arg1 ;
-(id)canWriteDataBlock;
-(void)setOutputStream:(NSOutputStream *)arg1 ;
-(void)start;
-(double)timestamp;
-(void)stop;
-(NSOutputStream *)outputStream;
-(void)setDidEncounterErrorBlock:(id)arg1 ;
-(id)initWithOutputStream:(id)arg1 queue:(id)arg2 ;
-(void)writeData:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(NSInputStream *)inputStream;
-(void)setCompressed:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)isCompressed;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)setInputStream:(NSInputStream *)arg1 ;
@end

