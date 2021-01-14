/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <Sleep/HKSPStateMachine.h>
#import <libobjc.A.dylib/HDSPEnvironmentStateMachineDelegate.h>
#import <libobjc.A.dylib/HDSPEnvironmentStateMachineInfoProvider.h>
#import <libobjc.A.dylib/HDSPEnvironmentStateMachineEventHandler.h>

@class HDSPEnvironmentNotReadyState, HDSPEnvironmentMigrationState, HDSPEnvironmentReadyState, HDSPEnvironmentDemoState, NSString;

@interface HDSPEnvironmentStateMachine : HKSPStateMachine <HDSPEnvironmentStateMachineDelegate, HDSPEnvironmentStateMachineInfoProvider, HDSPEnvironmentStateMachineEventHandler> {

	HDSPEnvironmentNotReadyState* _notReadyState;
	HDSPEnvironmentMigrationState* _migrationState;
	HDSPEnvironmentReadyState* _readyState;
	HDSPEnvironmentDemoState* _demoState;

}

@property (nonatomic,__weak,readonly) id<HDSPEnvironmentStateMachineDelegate> delegate; 
@property (nonatomic,__weak,readonly) id<HDSPEnvironmentStateMachineInfoProvider> infoProvider; 
@property (nonatomic,readonly) HDSPEnvironmentNotReadyState * notReadyState;                                 //@synthesize notReadyState=_notReadyState - In the implementation block
@property (nonatomic,readonly) HDSPEnvironmentMigrationState * migrationState;                               //@synthesize migrationState=_migrationState - In the implementation block
@property (nonatomic,readonly) HDSPEnvironmentReadyState * readyState;                                       //@synthesize readyState=_readyState - In the implementation block
@property (nonatomic,readonly) HDSPEnvironmentDemoState * demoState;                                         //@synthesize demoState=_demoState - In the implementation block
@property (nonatomic,readonly) id<NAScheduler> callbackScheduler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)environmentShouldMigrateData;
-(id)stateMachineLog;
-(void)systemDidBecomeReady;
-(void)environmentDidBecomeReady;
-(BOOL)needsDataMigration;
-(BOOL)isSystemReady;
-(HDSPEnvironmentNotReadyState *)notReadyState;
-(HDSPEnvironmentReadyState *)readyState;
-(HDSPEnvironmentMigrationState *)migrationState;
-(HDSPEnvironmentDemoState *)demoState;
-(id)initWithDelegate:(id)arg1 infoProvider:(id)arg2 ;
-(void)dataMigrationDidComplete;
@end

