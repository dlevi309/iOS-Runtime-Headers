/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>
#import <libobjc.A.dylib/HDDataObserver.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol OS_dispatch_queue, HDUserCharacteristicsProfileObserver;
@class HDProfile, NSObject, HKObserverSet, NSDate, NSDictionary, _HKDelayedOperation, NSString;

@interface HDUserCharacteristicsManager : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HDDataObserver, HDDiagnosticObject> {

	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;
	HKObserverSet*<HDUserCharacteristicsProfileObserver> _observers;
	BOOL _shouldUpdateQuantityCharacteristics;
	int _significantTimeChangeNotificationToken;
	NSDate* _userProfileLastUpdated;
	NSDictionary* _lastUserProfile;
	BOOL _needsUpdateAfterUnlock;
	_HKDelayedOperation* _updateOperation;
	NSDate* _unitTest_currentDate;

}

@property (nonatomic,copy) NSDate * unitTest_currentDate;              //@synthesize unitTest_currentDate=_unitTest_currentDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)daemonReady:(id)arg1 ;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(id)userCharacteristicForType:(id)arg1 error:(id*)arg2 ;
-(id)_getCardioFitnessMedicationsStatusWithError:(id*)arg1 ;
-(id)_mostRecentCategorySampleOfType:(id)arg1 beforeDate:(id)arg2 error:(id*)arg3 ;
-(void)_queue_updateCharacteristicsAndUserProfileWithDelay;
-(id)initWithProfile:(id)arg1 ;
-(id)_activityMoveModeActiveDate;
-(void)_queue_updateCharacteristicsAndUserProfileIfNeeded;
-(void)setUnitTest_currentDate:(NSDate *)arg1 ;
-(void)_queue_alertObserversDidUpdateUserProfile;
-(id)_mostRecentSampleOfType:(id)arg1 beforeDate:(id)arg2 error:(id*)arg3 ;
-(BOOL)setUserCharacteristic:(id)arg1 forType:(id)arg2 error:(id*)arg3 ;
-(void)_queue_updateActivityMoveModeDefaultAndNotifyIfNecessary;
-(void)_queue_updateCharacteristicsAndUserProfile;
-(void)didRecieveDayChangeNotification:(id)arg1 ;
-(void)_queue_updateQuantityCharacteristics;
-(void)removeProfileObserver:(id)arg1 ;
-(id)diagnosticDescription;
-(void)_queue_updateActivityMoveModeCharacteristic;
-(NSDate *)unitTest_currentDate;
-(double)restingCaloriesFromTotalCalories:(double)arg1 timeInterval:(double)arg2 authorizedToRead:(BOOL)arg3 ;
-(void)_unregisterTimeChangeNotifications;
-(void)_userCharacteristicsDidChangeShouldUpdateUserProfile:(BOOL)arg1 shouldSync:(BOOL)arg2 ;
-(id)modificationDateForCharacteristicWithType:(id)arg1 error:(id*)arg2 ;
-(void)_queue_updateUserProfile;
-(void)addProfileObserver:(id)arg1 ;
-(void)_registerForTimeChangeNotifications;
-(id)_mostRecentQuantitySampleOfType:(id)arg1 error:(id*)arg2 ;
-(BOOL)_setUserCharacteristic:(id)arg1 forType:(id)arg2 shouldInsertSample:(BOOL)arg3 updateProfileAndSync:(BOOL)arg4 error:(id*)arg5 ;
-(void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2 ;
-(id)_userCharacteristicForType:(id)arg1 entity:(id*)arg2 error:(id*)arg3 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(void)unitTest_setUpdateOperationDelay:(double)arg1 ;
-(void)dealloc;
@end

