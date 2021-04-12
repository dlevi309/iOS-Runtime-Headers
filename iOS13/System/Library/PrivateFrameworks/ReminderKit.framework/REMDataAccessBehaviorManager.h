/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class REMXPCDaemonController;

@interface REMDataAccessBehaviorManager : NSObject {

	REMXPCDaemonController* _daemonController;

}

@property (nonatomic,retain) REMXPCDaemonController * daemonController;              //@synthesize daemonController=_daemonController - In the implementation block
-(id)init;
-(REMXPCDaemonController *)daemonController;
-(void)setDaemonController:(REMXPCDaemonController *)arg1 ;
-(id)initWithDaemonController:(id)arg1 ;
-(id)_debugPerformerWithReason:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(BOOL)_getBoolForKey:(id)arg1 withDefaultValue:(BOOL)arg2 ;
-(void)_setBoolValue:(BOOL)arg1 forBehaviorKey:(id)arg2 ;
-(void)_crashDaemonWithMessage:(id)arg1 ;
-(long long)_getIntegerForKey:(id)arg1 withDefaultValue:(long long)arg2 ;
-(long long)changeTrackingBehaviors;
-(void)_setIntegerValue:(long long)arg1 forBehaviorKey:(id)arg2 ;
-(id)fetchStatusReportsWithError:(id*)arg1 ;
-(BOOL)isDataAccessEnabled;
-(void)enableDataAccess;
-(void)disableDataAccess;
-(BOOL)isBabySitterEnabled;
-(void)enableBabySitter;
-(void)disableBabySitter;
-(void)applyChangeTrackingBehavior:(long long)arg1 ;
-(void)unapplyChangeTrackingBehavior:(long long)arg1 ;
@end

