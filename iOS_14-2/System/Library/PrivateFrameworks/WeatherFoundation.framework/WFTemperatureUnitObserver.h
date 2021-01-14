/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@protocol OS_dispatch_queue;
#import <WeatherFoundation/WeatherFoundation-Structs.h>
@class NSObject, NSMutableDictionary, NSHashTable;

@interface WFTemperatureUnitObserver : NSObject {

	os_unfair_lock_s _dataSynchronizationLock;
	int _userTemperatureUnit;
	NSObject*<OS_dispatch_queue> _temperatureUnitUpdateQueue;
	NSMutableDictionary* _blockObserversForUUID;
	NSHashTable* _observerObjects;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (retain) NSObject*<OS_dispatch_queue> temperatureUnitUpdateQueue;              //@synthesize temperatureUnitUpdateQueue=_temperatureUnitUpdateQueue - In the implementation block
@property (assign) os_unfair_lock_s dataSynchronizationLock;                             //@synthesize dataSynchronizationLock=_dataSynchronizationLock - In the implementation block
@property (retain) NSMutableDictionary * blockObserversForUUID;                          //@synthesize blockObserversForUUID=_blockObserversForUUID - In the implementation block
@property (retain) NSHashTable * observerObjects;                                        //@synthesize observerObjects=_observerObjects - In the implementation block
@property (assign) int userTemperatureUnit;                                              //@synthesize userTemperatureUnit=_userTemperatureUnit - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                 //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (readonly) int temperatureUnit; 
+(id)sharedObserver;
-(void)removeAllObservers;
-(void)addObserver:(id)arg1 ;
-(int)temperatureUnit;
-(id)init;
-(int)userTemperatureUnit;
-(void)setTemperatureUnitUpdateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDataSynchronizationLock:(os_unfair_lock_s)arg1 ;
-(id)addBlockObserver:(/*^block*/id)arg1 ;
-(void)setBlockObserversForUUID:(NSMutableDictionary *)arg1 ;
-(void)setObserverObjects:(NSHashTable *)arg1 ;
-(void)setUserTemperatureUnit:(int)arg1 ;
-(BOOL)removeObserver:(id)arg1 ;
-(void)q_updateTemperatureUnit;
-(void)q_notifyObserversOfUpdatedTemperatureUnit:(int)arg1 ;
-(void)_updateTemperatureUnit;
-(id)_init;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(NSObject*<OS_dispatch_queue>)temperatureUnitUpdateQueue;
-(NSHashTable *)observerObjects;
-(BOOL)removeBlockObserverWithHandle:(id)arg1 ;
-(os_unfair_lock_s)dataSynchronizationLock;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(NSMutableDictionary *)blockObserversForUUID;
@end

