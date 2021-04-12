/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
*/


@protocol OS_dispatch_queue;
#import <ATFoundation/ATFoundation-Structs.h>
@class NSObject, NSHashTable;

@interface ATEnvironmentMonitor : NSObject {

	SCNetworkReachabilityRef _reachability;
	unsigned _powerNotification;
	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _observers;
	BOOL _power;
	BOOL _internetReachable;
	BOOL _internetReachableViaOnlyWWAN;
	unsigned long long _thermalPressureLevel;

}

@property (assign,nonatomic) unsigned long long thermalPressureLevel;                                                //@synthesize thermalPressureLevel=_thermalPressureLevel - In the implementation block
@property (getter=hasPower,nonatomic,readonly) BOOL power;                                                           //@synthesize power=_power - In the implementation block
@property (getter=isInternetReachable,nonatomic,readonly) BOOL internetReachable;                                    //@synthesize internetReachable=_internetReachable - In the implementation block
@property (getter=isInternetReachableViaOnlyWWAN,nonatomic,readonly) BOOL internetReachableViaOnlyWWAN;              //@synthesize internetReachableViaOnlyWWAN=_internetReachableViaOnlyWWAN - In the implementation block
+(id)sharedMonitor;
-(id)init;
-(void)stop;
-(void)start;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)isInternetReachable;
-(BOOL)isInternetReachableViaOnlyWWAN;
-(BOOL)hasPower;
-(unsigned long long)thermalPressureLevel;
-(void)setThermalPressureLevel:(unsigned long long)arg1 ;
@end

