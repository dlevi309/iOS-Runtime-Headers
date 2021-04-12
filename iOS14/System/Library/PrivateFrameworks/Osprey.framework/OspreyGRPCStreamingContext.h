/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
*/

#import <Osprey/OspreyClientStreamingContext.h>

@protocol OS_dispatch_queue;
@class NSObject, OspreyMessageReader, OspreyMessageWriter, NSInputStream, OspreyBufferedOutputStream, NSString;

@interface OspreyGRPCStreamingContext : NSObject <OspreyClientStreamingContext> {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _completion;
	OspreyMessageReader* _messageReader;
	OspreyMessageWriter* _messageWriter;
	NSInputStream* _inputStream;
	OspreyBufferedOutputStream* _outputStream;
	BOOL _closed;
	BOOL _compressionEnabled;

}

@property (assign,getter=isCompressionEnabled,nonatomic) BOOL compressionEnabled;              //@synthesize compressionEnabled=_compressionEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)completeWithError:(id)arg1 ;
-(void)finishWriting;
-(void)writeFrame:(id)arg1 ;
-(void)_writeFrame:(id)arg1 compressed:(BOOL)arg2 error:(id*)arg3 ;
-(void)writeFrame:(id)arg1 compressed:(BOOL)arg2 ;
-(id)initWithQueue:(id)arg1 responseHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)bindToUrlRequest:(id)arg1 ;
-(void)handleResponseData:(id)arg1 ;
-(BOOL)isCompressionEnabled;
-(void)setCompressionEnabled:(BOOL)arg1 ;
@end

