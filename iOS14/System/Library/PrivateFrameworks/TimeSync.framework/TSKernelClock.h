/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/

#import <TimeSync/TimeSync-Structs.h>
#import <TimeSync/TSClock.h>

@class IOKService, IOKConnection, IOKNotificationPort, IOKInterestNotification;

@interface TSKernelClock : TSClock {

	IOKService* _service;
	IOKConnection* _connection;
	IOKNotificationPort* _notificationPort;
	IOKInterestNotification* _interestNotification;
	os_unfair_lock_s _serviceLock;

}

@property (nonatomic,readonly) IOKService * service; 
@property (nonatomic,readonly) IOKConnection * connection; 
+(id)diagnosticDescriptionForService:(id)arg1 withIndent:(id)arg2 ;
+(id)clockNameForClockIdentifier:(unsigned long long)arg1 ;
+(id)diagnosticInfoForClockIdentifier:(unsigned long long)arg1 ;
+(id)diagnosticInfoForService:(id)arg1 ;
+(id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)arg1 ;
+(id)availableKernelClockIdentifiers;
+(id)serviceForClockIdentifier:(unsigned long long)arg1 ;
-(id)initWithClockIdentifier:(unsigned long long)arg1 ;
-(void)_handleInterestNotification:(unsigned)arg1 withArgument:(void*)arg2 ;
-(id)clockName;
-(unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)arg1 withFlags:(unsigned*)arg2 ;
-(IOKConnection *)connection;
-(void)_handleNotification:(unsigned)arg1 withArg1:(unsigned long long)arg2 andArg2:(unsigned long long)arg3 ;
-(IOKService *)service;
-(void)dealloc;
-(int)_lockState;
-(unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)arg1 withFlags:(unsigned*)arg2 ;
-(BOOL)convertFromMachAbsoluteTime:(unsigned long long*)arg1 toDomainTime:(unsigned long long*)arg2 withCount:(unsigned)arg3 ;
-(BOOL)convertFromDomainTime:(unsigned long long*)arg1 toMachAbsoluteTime:(unsigned long long*)arg2 withCount:(unsigned)arg3 ;
-(unsigned long long)convertFromMachAbsoluteIntervalToDomainInterval:(unsigned long long)arg1 ;
-(unsigned long long)convertFromDomainIntervalToMachAbsoluteInterval:(unsigned long long)arg1 ;
-(BOOL)getRateRatioNumerator:(unsigned long long*)arg1 denominator:(unsigned long long*)arg2 machAnchor:(unsigned long long*)arg3 andDomainAnchor:(unsigned long long*)arg4 withError:(id*)arg5 ;
-(double)hostRateRatio;
-(BOOL)registerAsyncCallback;
-(BOOL)deregisterAsyncCallback;
-(void)_handleNotification:(unsigned)arg1 withArgs:(unsigned long long*)arg2 ofCount:(unsigned)arg3 ;
-(id)diagnosticDescriptionWithIndent:(id)arg1 ;
@end

