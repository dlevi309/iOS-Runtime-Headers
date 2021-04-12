/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>

@protocol OS_dispatch_queue;
@class HDProfile, NSObject, NSString;

@interface HDAgeGatingManager : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver> {

	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;
	int _significantTimeChangeNotificationToken;
	int _userCharacteristicsDidChangeNotificationToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)daemonReady:(id)arg1 ;
-(void)_registerForNotifications;
-(id)initWithProfile:(id)arg1 ;
-(void)_queue_updateAgeGating;
-(void)unitTesting_updateAgeGates;
-(id)_ageWithDateOfBirthComponents:(id)arg1 ;
-(void)_setAgeGatingEnabled:(BOOL)arg1 forKey:(id)arg2 ;
-(void)didRecieveDayChangeNotification:(id)arg1 ;
-(void)_unregisterNotifications;
-(void)_updateUserDefaultsWithAge:(id)arg1 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(id)initWithProfile:(id)arg1 queue:(id)arg2 ;
-(void)dealloc;
@end

