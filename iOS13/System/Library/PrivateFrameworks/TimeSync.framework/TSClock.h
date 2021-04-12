/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSString;

@interface TSClock : NSObject {

	NSMutableArray* _clients;
	NSObject*<OS_dispatch_queue> _notificationsQueue;
	int _lockState;
	unsigned long long _clockIdentifier;
	NSObject*<OS_dispatch_queue> _propertyUpdateQueue;

}

@property (nonatomic,retain,readonly) NSMutableArray * clients; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> notificationQueue; 
@property (assign,nonatomic) unsigned long long clockIdentifier;                            //@synthesize clockIdentifier=_clockIdentifier - In the implementation block
@property (assign,nonatomic) int lockState;                                                 //@synthesize lockState=_lockState - In the implementation block
@property (nonatomic,readonly) double hostRateRatio; 
@property (nonatomic,copy,readonly) NSString * clockName; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyUpdateQueue;              //@synthesize propertyUpdateQueue=_propertyUpdateQueue - In the implementation block
+(id)clockNameForClockIdentifier:(unsigned long long)arg1 ;
+(unsigned long long)_mach_absolute_time;
+(id)diagnosticInfoForClockIdentifier:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)notificationQueue;
-(int)lockState;
-(void)setLockState:(int)arg1 ;
-(void)addClient:(id)arg1 ;
-(void)removeClient:(id)arg1 ;
-(NSMutableArray *)clients;
-(id)initWithClockIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)clockIdentifier;
-(unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)arg1 withFlags:(unsigned*)arg2 ;
-(unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)arg1 withFlags:(unsigned*)arg2 ;
-(BOOL)convertFromMachAbsoluteTime:(unsigned long long*)arg1 toDomainTime:(unsigned long long*)arg2 withCount:(unsigned)arg3 ;
-(BOOL)convertFromDomainTime:(unsigned long long*)arg1 toMachAbsoluteTime:(unsigned long long*)arg2 withCount:(unsigned)arg3 ;
-(unsigned long long)convertFromMachAbsoluteIntervalToDomainInterval:(unsigned long long)arg1 ;
-(unsigned long long)convertFromDomainIntervalToMachAbsoluteInterval:(unsigned long long)arg1 ;
-(BOOL)getRateRatioNumerator:(unsigned long long*)arg1 denominator:(unsigned long long*)arg2 machAnchor:(unsigned long long*)arg3 andDomainAnchor:(unsigned long long*)arg4 withError:(id*)arg5 ;
-(double)hostRateRatio;
-(NSString *)clockName;
-(void)setClockIdentifier:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)propertyUpdateQueue;
-(void)setPropertyUpdateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

