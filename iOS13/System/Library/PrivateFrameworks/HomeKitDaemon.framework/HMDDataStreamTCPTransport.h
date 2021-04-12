/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMFNetAddress * remoteAddress;                                   //@synthesize remoteAddress=_remoteAddress - In the implementation block
@property (nonatomic,retain) NSObject*<OS_tcp_connection> tcpConnection;                      //@synthesize tcpConnection=_tcpConnection - In the implementation block
@property (nonatomic,retain) HMDDataStreamFrameReader * byteReader;                           //@synthesize byteReader=_byteReader - In the implementation block
@property (nonatomic,copy) NSString * logIdentifier;                                          //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<HMDDataStreamTransportDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(void)close;
-(id<HMDDataStreamTransportDelegate>)delegate;
-(void)setDelegate:(id<HMDDataStreamTransportDelegate>)arg1 ;
-(void)_start;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)connect;
-(HMFNetAddress *)remoteAddress;
-(void)_stop;
-(NSString *)logIdentifier;
-(void)setRemoteAddress:(HMFNetAddress *)arg1 ;
-(NSObject*<OS_tcp_connection>)tcpConnection;
-(void)setTcpConnection:(NSObject*<OS_tcp_connection>)arg1 ;
-(void)setLogIdentifier:(NSString *)arg1 ;
-(void)sendRawFrame:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithAddress:(id)arg1 port:(long long)arg2 workQueue:(id)arg3 logIdentifier:(id)arg4 ;
-(void)_doReceive;
-(HMDDataStreamFrameReader *)byteReader;
-(void)_consumeReceivedData:(id)arg1 ;
-(void)setByteReader:(HMDDataStreamFrameReader *)arg1 ;
@end

