/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDDataStreamTransport.h>

@protocol HMDDataStreamTransportDelegate, OS_dispatch_queue, OS_tcp_connection;
@class NSObject, HMFNetAddress, HMDDataStreamFrameReader, NSString;

@interface HMDDataStreamTCPTransport : NSObject <HMFLogging, HMDDataStreamTransport> {

	BOOL _connected;
	long long _remotePort;
	id<HMDDataStreamTransportDelegate> delegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFNetAddress* _remoteAddress;
	NSObject*<OS_tcp_connection> _tcpConnection;
	HMDDataStreamFrameReader* _byteReader;
	NSString* _logIdentifier;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                        //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) HMFNetAddress * remoteAddress;                                 //@synthesize remoteAddress=_remoteAddress - In the implementation block
@property (nonatomic,retain) NSObject*<OS_tcp_connection> tcpConnection;                      //@synthesize tcpConnection=_tcpConnection - In the implementation block
@property (nonatomic,readonly) HMDDataStreamFrameReader * byteReader;                         //@synthesize byteReader=_byteReader - In the implementation block
@property (nonatomic,readonly) NSString * logIdentifier;                                      //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HMDDataStreamTransportDelegate> delegate; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id<HMDDataStreamTransportDelegate>)delegate;
-(HMFNetAddress *)remoteAddress;
-(void)close;
-(void)connect;
-(void)_start;
-(NSString *)logIdentifier;
-(void)setDelegate:(id<HMDDataStreamTransportDelegate>)arg1 ;
-(void)_stop;
-(void)dealloc;
-(NSObject*<OS_tcp_connection>)tcpConnection;
-(void)setTcpConnection:(NSObject*<OS_tcp_connection>)arg1 ;
-(id)initWithAddress:(id)arg1 port:(long long)arg2 workQueue:(id)arg3 logIdentifier:(id)arg4 ;
-(void)sendRawFrame:(id)arg1 completion:(/*^block*/id)arg2 ;
-(HMDDataStreamFrameReader *)byteReader;
-(void)_doReceive;
-(void)_consumeReceivedData:(id)arg1 ;
@end

