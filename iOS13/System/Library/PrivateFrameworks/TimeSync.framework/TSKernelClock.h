/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/

#import <TimeSync/TimeSync-Structs.h>
#import <TimeSync/TSClock.h>

@class __TSKernelClockNotification;

@interface TSKernelClock : TSClock {

	unsigned _service;
	unsigned _connection;
	IONotificationPortRef _notificationPort;
	unsigned _interestNotification;
	BOOL _serviceIsAlive;
	__TSKernelClockNotification* _clockForNotification;

}

@property (nonatomic,readonly) BOOL serviceIsAlive; 
@property (nonatomic,readonly) unsigned service; 
@property (nonatomic,readonly) unsigned connection; 
+(id)diagnosticDescriptionForService:(unsigned)arg1 withIndent:(id)arg2 ;
+(id)clockNameForClockIdentifier:(unsigned long long)arg1 ;
+(id)diagnosticInfoForClockIdentifier:(unsigned long long)arg1 ;
+(id)diagnosticInfoForService:(unsigned)arg1 ;
+(id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)arg1 ;
+(id)availableKernelClockIdentifiers;
+(unsigned)serviceForClockIdentifier:(unsigned long long)arg1 ;
-(void)dealloc;
-(unsigned)connection;
-(int)_lockState;
-(unsigned)service;
-(id)initWithClockIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)arg1 withFlags:(unsigned*)arg2 ;
-(unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)arg1 withFlags:(unsigned*)arg2 ;
-(BOOL)convertFromMachAbsoluteTime:(unsigned long long*)arg1 toDomainTime:(unsigned long long*)arg2 withCount:(unsigned)arg3 ;
-(BOOL)convertFromDomainTime:(unsigned long long*)arg1 toMachAbsoluteTime:(unsigned long long*)arg2 withCount:(unsigned)arg3 ;
-(unsigned long long)convertFromMachAbsoluteIntervalToDomainInterval:(unsigned long long)arg1 ;
-(unsigned long long)convertFromDomainIntervalToMachAbsoluteInterval:(unsigned long long)arg1 ;
-(BOOL)getRateRatioNumerator:(unsigned long long*)arg1 denominator:(unsigned long long*)arg2 machAnchor:(unsigned long long*)arg3 andDomainAnchor:(unsigned long long*)arg4 withError:(id*)arg5 ;
-(double)hostRateRatio;
-(id)clockName;
-(BOOL)serviceIsAlive;
-(void)_handleInterestNotification:(unsigned)arg1 withArgument:(void*)arg2 ;
-(void)_handleNotification:(unsigned)arg1 withArg1:(unsigned long long)arg2 andArg2:(unsigned long long)arg3 ;
-(BOOL)registerAsyncCallback;
-(void)setServiceIsAlive:(BOOL)arg1 ;
-(BOOL)deregisterAsyncCallback;
-(void)_handleNotification:(unsigned)arg1 withArgs:(unsigned long long*)arg2 ofCount:(unsigned)arg3 ;
-(id)diagnosticDescriptionWithIndent:(id)arg1 ;
@end

