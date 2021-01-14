/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <SleepDaemon/HDSPEnvironment.h>
#import <libobjc.A.dylib/HDSPNotificationObserver.h>
#import <libobjc.A.dylib/HDSPSource.h>

@class NSString;

@interface HDSPDemoModeEnvironment : HDSPEnvironment <HDSPNotificationObserver, HDSPSource>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * sourceIdentifier; 
@property (nonatomic,readonly) BOOL dontNotify; 
@property (nonatomic,readonly) BOOL dontSync; 
@property (nonatomic,readonly) id<HDSPSource> targetSource; 
-(id)notificationListener:(id)arg1 didReceiveNotificationWithName:(id)arg2 ;
-(BOOL)isDemoEnvironment;
-(id)init;
-(void)environmentDidBecomeReady;
-(NSString *)sourceIdentifier;
-(void)setInitialSchedule;
-(void)resetDemoMode;
-(id)demoScheduleModel;
-(id)demoSleepSchedule;
-(id)demoSleepSettings;
-(id)demoEventRecord;
@end

