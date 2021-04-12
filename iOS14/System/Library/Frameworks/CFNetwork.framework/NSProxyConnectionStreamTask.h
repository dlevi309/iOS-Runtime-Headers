/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/NSProxyConnection.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>
#import <libobjc.A.dylib/NSURLSessionStreamDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, NSInputStream, NSOutputStream, NSURLSessionStreamTask;

@interface NSProxyConnectionStreamTask : NSProxyConnection <NSStreamDelegate, NSURLSessionStreamDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isConnected;
	NSString* _host;
	int _port;
	BOOL _dataAvailableForReading;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	NSURLSessionStreamTask* _streamTask;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4 ;
-(id)initWithHost:(id)arg1 port:(unsigned short)arg2 queue:(id)arg3 configuration:(id)arg4 ;
-(void)read:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)write:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)cancel;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)dealloc;
@end

