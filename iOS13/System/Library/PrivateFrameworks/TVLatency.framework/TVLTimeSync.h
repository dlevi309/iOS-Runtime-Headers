/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVLatency.framework/TVLatency
*/

#import <libobjc.A.dylib/TSClockClient.h>

@protocol OS_dispatch_group;
@class NSData, TSgPTPClock, NSString, NSObject, CUMessageSession;

@interface TVLTimeSync : NSObject <TSClockClient> {

	unsigned _IPv4;
	NSData* _IPv6;
	TSgPTPClock* _clock;
	NSString* _networkInterfaceName;
	NSObject*<OS_dispatch_group> _waitForPTPLock;
	CUMessageSession* _session;

}

@property (assign,nonatomic) unsigned IPv4;                                  //@synthesize IPv4=_IPv4 - In the implementation block
@property (nonatomic,copy) NSData * IPv6;                                    //@synthesize IPv6=_IPv6 - In the implementation block
@property (nonatomic,retain) TSgPTPClock * clock;                            //@synthesize clock=_clock - In the implementation block
@property (nonatomic,copy) NSString * networkInterfaceName;                  //@synthesize networkInterfaceName=_networkInterfaceName - In the implementation block
@property (retain) NSObject*<OS_dispatch_group> waitForPTPLock;              //@synthesize waitForPTPLock=_waitForPTPLock - In the implementation block
@property (nonatomic,retain) CUMessageSession * session;                     //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)invalidate;
+(void)timeSyncWithRemoteIPv6:(id)arg1 session:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)timeSyncWithRemoteIPv4:(id)arg1 session:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)invalidate;
-(CUMessageSession *)session;
-(void)setSession:(CUMessageSession *)arg1 ;
-(void)setNetworkInterfaceName:(NSString *)arg1 ;
-(NSString *)networkInterfaceName;
-(TSgPTPClock *)clock;
-(void)setClock:(TSgPTPClock *)arg1 ;
-(void)didChangeLockStateTo:(int)arg1 forClock:(id)arg2 ;
-(id)initWithRemoteIPv6:(id)arg1 ;
-(void)_startPTPWithIPv6:(BOOL)arg1 session:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithRemoteIPv4:(id)arg1 ;
-(NSData *)IPv6;
-(unsigned)IPv4;
-(void)setWaitForPTPLock:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)waitForPTPLock;
-(void)negotiateGrandmasterIdentityAttempt:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_clearWaitForPTPClockDispatchGroup;
-(void)setIPv6:(NSData *)arg1 ;
-(void)setIPv4:(unsigned)arg1 ;
-(unsigned long long)convertToHostTimeFromDomainTime:(unsigned long long)arg1 grandmasterIdentity:(unsigned long long*)arg2 ;
-(unsigned long long)convertToDomainTimeFromHostTime:(unsigned long long)arg1 grandmasterIdentity:(unsigned long long*)arg2 ;
@end

