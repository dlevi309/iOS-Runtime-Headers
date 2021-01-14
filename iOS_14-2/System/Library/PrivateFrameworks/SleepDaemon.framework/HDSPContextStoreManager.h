/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <SleepDaemon/SleepDaemon-Structs.h>
#import <libobjc.A.dylib/HDSPSleepScheduleStateObserver.h>
#import <libobjc.A.dylib/HDSPSleepModeObserver.h>
#import <libobjc.A.dylib/HDSPSleepEventHandler.h>
#import <libobjc.A.dylib/HDSPSleepScheduleModelObserver.h>
#import <libobjc.A.dylib/HDSPEnvironmentAware.h>

@protocol _CDLocalContext;
@class HDSPEnvironment, NSString;

@interface HDSPContextStoreManager : NSObject <HDSPSleepScheduleStateObserver, HDSPSleepModeObserver, HDSPSleepEventHandler, HDSPSleepScheduleModelObserver, HDSPEnvironmentAware> {

	os_unfair_lock_s _contextLock;
	HDSPEnvironment* _environment;
	id<_CDLocalContext> _context;

}

@property (nonatomic,readonly) os_unfair_lock_s contextLock;                      //@synthesize contextLock=_contextLock - In the implementation block
@property (nonatomic,readonly) id<_CDLocalContext> context;                       //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;              //@synthesize environment=_environment - In the implementation block
+(id)sleepAppForegroundPredicate;
+(id)healthAppForegroundPredicate;
+(id)contextualKeyPath;
+(id)alarmPredicate;
+(id)doNotDisturbPredicate;
-(void)sleepEventIsDue:(id)arg1 ;
-(void)environmentWillBecomeReady:(id)arg1 ;
-(void)_withLock:(/*^block*/id)arg1 ;
-(os_unfair_lock_s)contextLock;
-(id)registerPredicate:(id)arg1 identifier:(id)arg2 callback:(/*^block*/id)arg3 ;
-(id)initWithEnvironment:(id)arg1 context:(id)arg2 ;
-(void)sleepScheduleModelManager:(id)arg1 source:(id)arg2 didUpdateSleepScheduleModel:(id)arg3 ;
-(id<_CDLocalContext>)context;
-(void)sleepModeDidChange:(long long)arg1 previousMode:(long long)arg2 reason:(unsigned long long)arg3 ;
-(void)sleepScheduleStateDidChange:(unsigned long long)arg1 previousState:(unsigned long long)arg2 reason:(unsigned long long)arg3 ;
-(id)initWithEnvironment:(id)arg1 ;
-(void)_writeSleepInfoToContextStore:(id)arg1 ;
-(HDSPEnvironment *)environment;
-(void)unregister:(id)arg1 ;
-(void)updateForScheduleModelModifiedOnDate:(id)arg1 ;
@end

