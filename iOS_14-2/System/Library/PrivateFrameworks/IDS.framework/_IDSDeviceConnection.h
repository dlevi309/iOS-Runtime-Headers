/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/

#import <IDS/IDSDaemonListenerProtocol.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NSInputStream, NSOutputStream, NSNumber, NSMutableDictionary, NSDictionary;

@interface _IDSDeviceConnection : NSObject <IDSDaemonListenerProtocol> {

	NSString* _nsuuid;
	BOOL _isDefaultPairedDevice;
	NSString* _service;
	NSString* _streamName;
	NSString* _serviceToken;
	NSString* _connectionUUID;
	int _socket;
	unsigned long long _mtu;
	/*^block*/id _openSocketCompletionHandler;
	NSObject*<OS_dispatch_queue> _openSocketCompletionHandlerQueue;
	NSString* _openSocketCompletionHandlerID;
	NSInputStream* _inputStreamForSocket;
	NSOutputStream* _outputStreamForSocket;
	BOOL _hasTimedOut;
	NSNumber* _clientTimeout;
	NSMutableDictionary* _awdMetrics;

}

@property (nonatomic,readonly) int socket; 
@property (nonatomic,readonly) unsigned long long mtu; 
@property (nonatomic,readonly) NSDictionary * metrics; 
@property (nonatomic,readonly) NSInputStream * inputStream; 
@property (nonatomic,readonly) NSOutputStream * outputStream; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_close;
-(unsigned long long)mtu;
-(NSDictionary *)metrics;
-(void)_connect;
-(int)socket;
-(void)close;
-(NSOutputStream *)outputStream;
-(void)xpcObject:(id)arg1 objectContext:(id)arg2 ;
-(NSInputStream *)inputStream;
-(void)dealloc;
-(void)_daemonDied:(id)arg1 ;
-(id)deviceConnectionKey;
-(void)_cleanupCompletionBlock;
-(id)initWithDevice:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)setStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2 ;
-(BOOL)updateConnectionWithOptions:(id)arg1 error:(id*)arg2 ;
@end

