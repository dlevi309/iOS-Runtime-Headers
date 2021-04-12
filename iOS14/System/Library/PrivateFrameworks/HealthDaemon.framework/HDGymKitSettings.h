/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>
#import <libobjc.A.dylib/HDDataObserver.h>
#import <libobjc.A.dylib/NRDevicePropertyObserver.h>

@protocol HDGymKitSettingsDelegate;
@class HDProfile, NRDevice, NSString;

@interface HDGymKitSettings : NSObject <HDDatabaseProtectedDataObserver, HDDataObserver, NRDevicePropertyObserver> {

	HDProfile* _profile;
	unsigned long long _nfcPermission;
	os_unfair_lock_s _lock;
	int _privacyNotificationToken;
	NRDevice* _currentDevice;
	id<HDGymKitSettingsDelegate> _delegate;

}

@property (nonatomic,readonly) unsigned long long nfcPermission; 
@property (nonatomic,readonly) BOOL fitnessTrackingEnabled; 
@property (assign,nonatomic,__weak) id<HDGymKitSettingsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(id<HDGymKitSettingsDelegate>)delegate;
-(id)initWithProfile:(id)arg1 ;
-(void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3 ;
-(void)setDelegate:(id<HDGymKitSettingsDelegate>)arg1 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(void)dealloc;
-(void)_monitorFieldAndPrivacySettings;
-(void)_startObservingWatchWorkouts;
-(void)_setNFCAlwaysOnPreferenceIfNecessary;
-(void)_stopObservingWatchWorkouts;
-(BOOL)_isSatelliteWatch;
-(void)_setConnectedGymPreferencesDefaultNFCAlwaysOnEnabled:(BOOL)arg1 ;
-(void)_handleNFCPreferencesForNFCAlwaysOn:(BOOL)arg1 ;
-(void)_currentActivityMoveModeWithCompletion:(/*^block*/id)arg1 ;
-(void)_enableNFCAlwaysOnIfWatchWorkout;
-(BOOL)fitnessTrackingEnabled;
-(unsigned long long)nfcPermission;
-(void)unitTest_simulateNRDeviceUpdate;
@end

