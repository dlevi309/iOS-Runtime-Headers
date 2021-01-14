/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/


#import <Sleep/Sleep-Structs.h>
@class NSNumber, HKHealthStore, HKSPObserverSet;

@interface HKSPAgeMonitor : NSObject {

	BOOL _needUpdate;
	int _characteristicUpdateToken;
	os_unfair_lock_s _lock;
	NSNumber* _age;
	/*^block*/id _currentDateProvider;
	HKHealthStore* _healthStore;
	HKSPObserverSet* _observers;

}

@property (nonatomic,copy,readonly) id currentDateProvider;              //@synthesize currentDateProvider=_currentDateProvider - In the implementation block
@property (nonatomic,readonly) HKHealthStore * healthStore;              //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,readonly) HKSPObserverSet * observers;              //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) BOOL needUpdate;                          //@synthesize needUpdate=_needUpdate - In the implementation block
@property (assign,nonatomic) int characteristicUpdateToken;              //@synthesize characteristicUpdateToken=_characteristicUpdateToken - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s lock;                    //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) NSNumber * age;                           //@synthesize age=_age - In the implementation block
-(HKHealthStore *)healthStore;
-(void)addObserver:(id)arg1 ;
-(HKSPObserverSet *)observers;
-(id)init;
-(void)_withLock:(/*^block*/id)arg1 ;
-(os_unfair_lock_s)lock;
-(id)currentDateProvider;
-(void)registerForNotifications;
-(void)removeObserver:(id)arg1 ;
-(id)_lock_age;
-(BOOL)needUpdate;
-(NSNumber *)age;
-(id)initWithCurrentDateProvider:(/*^block*/id)arg1 healthStore:(id)arg2 ;
-(void)checkForAgeChange;
-(int)characteristicUpdateToken;
-(void)setCharacteristicUpdateToken:(int)arg1 ;
-(void)unregisterForNotifications;
-(void)dealloc;
@end

