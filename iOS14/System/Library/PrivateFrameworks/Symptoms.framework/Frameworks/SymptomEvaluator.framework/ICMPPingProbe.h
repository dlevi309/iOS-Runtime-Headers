/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <SymptomEvaluator/TestProbe.h>

@protocol OS_dispatch_source, ICMPPingProbeDelegate, OS_dispatch_semaphore;
@class NSObject, NSString, NSData, NSMutableArray;

@interface ICMPPingProbe : TestProbe {

	BOOL stopTestOnFirstSuccess;
	NSObject*<OS_dispatch_source> timeoutTimer;
	NSObject*<OS_dispatch_source> pingTimer;
	NSObject*<OS_dispatch_source> burstTimer;
	NSString* _hostName;
	NSData* _hostAddressData;
	CFHostRef _host;
	CFSocketRef _socket;
	unsigned short _identifier;
	unsigned short _nextSequenceNumber;
	BOOL _hostAddressIsIPv6;
	float _percentComplete;
	unsigned _interfaceIndex;
	id<ICMPPingProbeDelegate> _delegate;
	NSString* _ipAddress;
	NSMutableArray* _pings;
	unsigned long long _successCount;
	unsigned long long _failedCount;
	unsigned long long _pingCount;
	double _interPingInterval;
	unsigned long long _burstCount;
	double _interBurstInterval;
	unsigned long long _currentBurst;
	NSObject*<OS_dispatch_semaphore> _pingRunLoopReady;
	CFRunLoopRef _pingRunLoop;
	opaque_pthread_t* _pingThread;
	CFRunLoopSourceRef _rls;

}

@property (nonatomic,retain) NSMutableArray * pings;                                         //@synthesize pings=_pings - In the implementation block
@property (assign,nonatomic) unsigned long long successCount;                                //@synthesize successCount=_successCount - In the implementation block
@property (assign,nonatomic) unsigned long long failedCount;                                 //@synthesize failedCount=_failedCount - In the implementation block
@property (assign,nonatomic) float percentComplete;                                          //@synthesize percentComplete=_percentComplete - In the implementation block
@property (assign,nonatomic) unsigned long long pingCount;                                   //@synthesize pingCount=_pingCount - In the implementation block
@property (assign,nonatomic) double interPingInterval;                                       //@synthesize interPingInterval=_interPingInterval - In the implementation block
@property (assign,nonatomic) unsigned long long burstCount;                                  //@synthesize burstCount=_burstCount - In the implementation block
@property (assign,nonatomic) double interBurstInterval;                                      //@synthesize interBurstInterval=_interBurstInterval - In the implementation block
@property (assign,nonatomic) unsigned long long currentBurst;                                //@synthesize currentBurst=_currentBurst - In the implementation block
@property (assign,nonatomic) BOOL hostAddressIsIPv6;                                         //@synthesize hostAddressIsIPv6=_hostAddressIsIPv6 - In the implementation block
@property (assign,nonatomic) unsigned interfaceIndex;                                        //@synthesize interfaceIndex=_interfaceIndex - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> pingRunLoopReady;              //@synthesize pingRunLoopReady=_pingRunLoopReady - In the implementation block
@property (assign,nonatomic) CFRunLoopRef pingRunLoop;                                       //@synthesize pingRunLoop=_pingRunLoop - In the implementation block
@property (assign,nonatomic) opaque_pthread_t* pingThread;                                   //@synthesize pingThread=_pingThread - In the implementation block
@property (assign,nonatomic) CFRunLoopSourceRef rls;                                         //@synthesize rls=_rls - In the implementation block
@property (nonatomic,retain) id<ICMPPingProbeDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * ipAddress;                                           //@synthesize ipAddress=_ipAddress - In the implementation block
@property (nonatomic,retain) NSString * hostName;                                            //@synthesize hostName=_hostName - In the implementation block
+(void)initialize;
+(BOOL)stringAddrToSockaddr:(id)arg1 to:(sockaddr*)arg2 ;
+(BOOL)loadStringUtils;
+(unsigned long long)icmpIPv4OffsetInPacket:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(CFRunLoopSourceRef)rls;
-(void)stopTest;
-(unsigned)interfaceIndex;
-(id<ICMPPingProbeDelegate>)delegate;
-(NSMutableArray *)pings;
-(void)setHostName:(NSString *)arg1 ;
-(NSString *)hostName;
-(void)setDelegate:(id<ICMPPingProbeDelegate>)arg1 ;
-(unsigned long long)successCount;
-(void)setPercentComplete:(float)arg1 ;
-(float)percentComplete;
-(void)setRls:(CFRunLoopSourceRef)arg1 ;
-(void)setInterfaceIndex:(unsigned)arg1 ;
-(void)setIpAddress:(NSString *)arg1 ;
-(void)readData;
-(NSString *)ipAddress;
-(void)didFailWithError:(id)arg1 ;
-(void)sendPing;
-(void)dealloc;
-(void)startICMPPingTestTo:(id)arg1 hostName:(id)arg2 interface:(unsigned)arg3 pingCount:(long long)arg4 interPingInterval:(double)arg5 burstCount:(long long)arg6 interBurstInterval:(double)arg7 timeout:(double)arg8 stopTestOnFirstSuccess:(BOOL)arg9 ;
-(void)setPingCount:(unsigned long long)arg1 ;
-(void)setInterPingInterval:(double)arg1 ;
-(void)setBurstCount:(unsigned long long)arg1 ;
-(void)setInterBurstInterval:(double)arg1 ;
-(BOOL)startRunLoop;
-(void)startThePinging;
-(unsigned long long)pingCount;
-(void)sendPingWithData:(id)arg1 ;
-(unsigned long long)burstCount;
-(unsigned long long)currentBurst;
-(double)interBurstInterval;
-(double)interPingInterval;
-(void)stopDataTransfer;
-(void)stopRunLoop;
-(id)_shortErrorFromError:(id)arg1 ;
-(void)pingDidFailToSendToAddress:(id)arg1 packet:(id)arg2 sequence:(unsigned)arg3 error:(id)arg4 ;
-(void)pingDidSendToAddress:(id)arg1 packet:(id)arg2 sequence:(unsigned)arg3 ;
-(BOOL)isValidIPv6PingResponsePacket:(id)arg1 isForMe:(BOOL*)arg2 sequence:(unsigned short*)arg3 isBadPacket:(BOOL*)arg4 ;
-(BOOL)isValidIPv4PingResponsePacket:(id)arg1 isForMe:(BOOL*)arg2 sequence:(unsigned short*)arg3 isBadPacket:(BOOL*)arg4 ;
-(void)pingDidReceivePingResponseFromAddress:(id)arg1 packet:(id)arg2 sequence:(unsigned)arg3 ;
-(void)pingDidReceiveUnexpectedPingResponseFromAddress:(id)arg1 packet:(id)arg2 sequence:(unsigned)arg3 ;
-(void)setCurrentBurst:(unsigned long long)arg1 ;
-(void)setPings:(NSMutableArray *)arg1 ;
-(void)setSuccessCount:(unsigned long long)arg1 ;
-(unsigned long long)failedCount;
-(void)setFailedCount:(unsigned long long)arg1 ;
-(BOOL)hostAddressIsIPv6;
-(void)setHostAddressIsIPv6:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)pingRunLoopReady;
-(void)setPingRunLoopReady:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(CFRunLoopRef)pingRunLoop;
-(void)setPingRunLoop:(CFRunLoopRef)arg1 ;
-(opaque_pthread_t*)pingThread;
-(void)setPingThread:(opaque_pthread_t*)arg1 ;
@end

