/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/

#import <MediaServices/MediaServices-Structs.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol OS_dispatch_queue;
@class NSInputStream, NSObject, NSString;

@interface MSVStreamReader : NSObject <NSStreamDelegate> {

	BOOL _closeOnStop;
	BOOL _stopped;
	z_stream_s* _zstreamp;
	BOOL _compress;
	/*^block*/id _didReadDataBlock;
	/*^block*/id _didFinishReadingBlock;
	/*^block*/id _didEncounterErrorBlock;
	unsigned long long _maximumBufferSize;
	double _timestamp;
	NSInputStream* _stream;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSInputStream * stream;                            //@synthesize stream=_stream - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id didReadDataBlock;                                 //@synthesize didReadDataBlock=_didReadDataBlock - In the implementation block
@property (nonatomic,copy) id didFinishReadingBlock;                            //@synthesize didFinishReadingBlock=_didFinishReadingBlock - In the implementation block
@property (nonatomic,copy) id didEncounterErrorBlock;                           //@synthesize didEncounterErrorBlock=_didEncounterErrorBlock - In the implementation block
@property (assign,nonatomic) unsigned long long maximumBufferSize;              //@synthesize maximumBufferSize=_maximumBufferSize - In the implementation block
@property (assign,getter=shouldCompress,nonatomic) BOOL compress;               //@synthesize compress=_compress - In the implementation block
@property (nonatomic,readonly) double timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)stop;
-(void)start;
-(double)timestamp;
-(NSInputStream *)stream;
-(void)setStream:(NSInputStream *)arg1 ;
-(void)_stop;
-(id)initWithInputStream:(id)arg1 queue:(id)arg2 ;
-(void)setDidEncounterErrorBlock:(id)arg1 ;
-(void)setDidReadDataBlock:(id)arg1 ;
-(void)setDidFinishReadingBlock:(id)arg1 ;
-(BOOL)_shouldHandleEvent;
-(void)stopWithCompletion:(/*^block*/id)arg1 ;
-(void)readAllDataWithCompletion:(/*^block*/id)arg1 ;
-(id)didFinishReadingBlock;
-(id)didEncounterErrorBlock;
-(id)didReadDataBlock;
-(BOOL)shouldCompress;
-(id)_compressedDataForData:(id)arg1 ;
-(id)readAllDataWithError:(id*)arg1 ;
-(void)readAllDataIntoFileHandle:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(unsigned long long)maximumBufferSize;
-(void)setMaximumBufferSize:(unsigned long long)arg1 ;
-(void)setCompress:(BOOL)arg1 ;
@end

