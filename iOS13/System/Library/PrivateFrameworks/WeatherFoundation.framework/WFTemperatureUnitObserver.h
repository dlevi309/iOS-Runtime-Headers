/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSHashTable;

@interface WFTemperatureUnitObserver : NSObject {

	int _userTemperatureUnit;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSMutableDictionary* _blockObserversForUUID;
	NSHashTable* _observerObjects;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (retain) NSObject*<OS_dispatch_queue> observerQueue;                        //@synthesize observerQueue=_observerQueue - In the implementation block
@property (retain) NSMutableDictionary * blockObserversForUUID;                       //@synthesize blockObserversForUUID=_blockObserversForUUID - In the implementation block
@property (retain) NSHashTable * observerObjects;                                     //@synthesize observerObjects=_observerObjects - In the implementation block
@property (assign) int userTemperatureUnit;                                           //@synthesize userTemperatureUnit=_userTemperatureUnit - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (readonly) int temperatureUnit; 
+(id)sharedObserver;
-(id)init;
-(void)dealloc;
-(id)_init;
-(void)addObserver:(id)arg1 ;
-(BOOL)removeObserver:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)removeAllObservers;
-(int)temperatureUnit;
-(NSObject*<OS_dispatch_queue>)observerQueue;
-(void)setObserverQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(int)userTemperatureUnit;
-(void)_updateTemperatureUnit;
-(void)setBlockObserversForUUID:(NSMutableDictionary *)arg1 ;
-(void)setObserverObjects:(NSHashTable *)arg1 ;
-(void)setUserTemperatureUnit:(int)arg1 ;
-(NSHashTable *)observerObjects;
-(NSMutableDictionary *)blockObserversForUUID;
-(id)addBlockObserver:(/*^block*/id)arg1 ;
-(BOOL)removeBlockObserverWithHandle:(id)arg1 ;
@end

