/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <libobjc.A.dylib/DNDStateUpdateListener.h>
#import <libobjc.A.dylib/HKSPSleepStoreObserver.h>

@class DNDStateService, NSHashTable, BSTimer, HKSPSleepStore, HKSPSleepSettings, NSString;

@interface CSDNDBedtimeController : NSObject <DNDStateUpdateListener, HKSPSleepStoreObserver> {

	DNDStateService* _stateService;
	NSHashTable* _observers;
	BSTimer* _greetingGracePeriodTimer;
	BOOL _deactivated;
	HKSPSleepStore* _sleepStore;
	HKSPSleepSettings* _sleepSettings;
	BOOL _active;
	BOOL _shouldShowGreeting;

}

@property (assign,getter=isActive,nonatomic) BOOL active;                                    //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) BOOL shouldShowGreeting;                                        //@synthesize shouldShowGreeting=_shouldShowGreeting - In the implementation block
@property (getter=isGreetingDisabled,nonatomic,readonly) BOOL greetingDisabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2 ;
-(void)addObserver:(id)arg1 ;
-(void)setShouldShowGreeting:(BOOL)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(id)init;
-(BOOL)isActive;
-(void)_cleanUpGreetingGracePeriodTimer;
-(void)_setShouldShowGreeting:(BOOL)arg1 forceUpdateObservers:(BOOL)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)isGreetingDisabled;
-(void)_setShouldShowGreeting:(BOOL)arg1 ;
-(id)initWithStateService:(id)arg1 ;
-(BOOL)shouldShowGreeting;
-(void)sleepStore:(id)arg1 sleepSettingsDidChange:(id)arg2 ;
-(void)dealloc;
@end

