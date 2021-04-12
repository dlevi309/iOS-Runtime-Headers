/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
*/

#import <AudioServerDriver/ASDRingBuffer.h>
#import <libobjc.A.dylib/ASDManagedRingBuffer.h>

@protocol ASDManagedRingBuffer <ASDRingBuffer>
@property (nonatomic,readonly) BOOL readerRunning; 
@property (nonatomic,readonly) BOOL writerRunning; 
@required
-(BOOL)writerRunning;
-(BOOL)readerRunning;
-(void)startReader;
-(void)stopReader;
-(void)startWriter;
-(void)stopWriter;

@end


@protocol OS_dispatch_queue;
@class NSObject, NSString, ASDStreamFormat;

@interface ASDManagedRingBuffer : ASDRingBuffer <ASDManagedRingBuffer> {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _readerRunning;
	BOOL _writerRunning;

}

@property (assign,nonatomic) BOOL readerRunning;                               //@synthesize readerRunning=_readerRunning - In the implementation block
@property (assign,nonatomic) BOOL writerRunning;                               //@synthesize writerRunning=_writerRunning - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long frameCapacity; 
@property (nonatomic,copy) ASDStreamFormat * writeFormat; 
@property (nonatomic,copy) ASDStreamFormat * readFormat; 
@property (nonatomic,readonly) id writeBlock; 
@property (nonatomic,readonly) id readBlock; 
@property (nonatomic,readonly) id readWithZerosBlock; 
@property (getter=isAllocated,nonatomic,readonly) BOOL allocated; 
-(id)initWithFrameCapacity:(long long)arg1 writeFormat:(id)arg2 readFormat:(id)arg3 ;
-(void)setReaderRunning:(BOOL)arg1 ;
-(BOOL)writerRunning;
-(void)setWriterRunning:(BOOL)arg1 ;
-(BOOL)readerRunning;
-(void)startReader;
-(void)stopReader;
-(void)startWriter;
-(void)stopWriter;
@end

