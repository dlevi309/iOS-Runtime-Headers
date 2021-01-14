/*
* Generated on Thursday, January 14, 2021 at 2:27:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addObserver:(id)arg1 ;
-(id)init;
-(void)start;
-(void)stop;
-(BOOL)hasPower;
-(BOOL)isInternetReachable;
-(void)removeObserver:(id)arg1 ;
-(void)setThermalPressureLevel:(unsigned long long)arg1 ;
-(unsigned long long)thermalPressureLevel;
-(BOOL)isInternetReachableViaOnlyWWAN;
@end

