/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <libobjc.A.dylib/HDSPNotificationObserver.h>
#import <libobjc.A.dylib/HDSPSource.h>
#import <libobjc.A.dylib/HDSPEnvironmentAware.h>

@class HDSPEnvironment, NSString;

@interface HDSPSleepScheduleModelMigrationManager : NSObject <HDSPNotificationObserver, HDSPSource, HDSPEnvironmentAware> {

	HDSPEnvironment* _environment;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * sourceIdentifier; 
@property (nonatomic,readonly) BOOL dontNotify; 
@property (nonatomic,readonly) BOOL dontSync; 
@property (nonatomic,readonly) id<HDSPSource> targetSource; 
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;              //@synthesize environment=_environment - In the implementation block
-(id)notificationListener:(id)arg1 didReceiveNotificationWithName:(id)arg2 ;
-(void)environmentDidBecomeReady:(id)arg1 ;
-(void)environmentWillBecomeReady:(id)arg1 ;
-(id)_migrateSleepDurationFromHealthKit;
-(BOOL)needDataMigration;
-(id)performDataMigration;
-(void)migrateToMobileTimerIfNecessary;
-(id)initWithEnvironment:(id)arg1 ;
-(id)_migrateSleepScheduleFromMobileTimer;
-(id)_migrateSleepScreen;
-(HDSPEnvironment *)environment;
-(id)migrateFromHealthKitIfNecessary;
-(NSString *)sourceIdentifier;
@end

