/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/NSProxyConnection.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>
#import <libobjc.A.dylib/NSURLSessionStreamDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, NSURLSessionStreamTask, NSInputStream, NSOutputStream;

@interface NSProxyConnectionStreamTask : NSProxyConnection <NSStreamDelegate, NSURLSessionStreamDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isConnected;
	NSString* _host;
	int _port;
	BOOL _dataAvailableForReading;
	NSURLSessionStreamTask* _streamTask;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;

}

@property (retain) NSInputStream * inputStream;                      //@synthesize inputStream=_inputStream - In the implementation block
@property (retain) NSOutputStream * outputStream;                    //@synthesize outputStream=_outputStream - In the implementation block
@property (assign) BOOL dataAvailableForReading;                     //@synthesize dataAvailableForReading=_dataAvailableForReading - In the implementation block
@property (retain) NSURLSessionStreamTask * streamTask;              //@synthesize streamTask=_streamTask - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)cancel;
-(NSOutputStream *)outputStream;
-(void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4 ;
-(void)write:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)read:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithHost:(id)arg1 port:(unsigned short)arg2 queue:(id)arg3 configuration:(id)arg4 ;
-(void)readFromStream;
-(void)_onConnected:(int)arg1 ;
-(NSURLSessionStreamTask *)streamTask;
-(void)setStreamTask:(NSURLSessionStreamTask *)arg1 ;
-(NSInputStream *)inputStream;
-(void)setInputStream:(NSInputStream *)arg1 ;
-(void)setOutputStream:(NSOutputStream *)arg1 ;
-(BOOL)dataAvailableForReading;
-(void)setDataAvailableForReading:(BOOL)arg1 ;
@end

