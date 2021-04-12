/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class REMXPCDaemonController;

@interface REMDataAccessBehaviorManager : NSObject {

	REMXPCDaemonController* _daemonController;

}

@property (nonatomic,retain) REMXPCDaemonController * daemonController;              //@synthesize daemonController=_daemonController - In the implementation block
-(void)setDaemonController:(REMXPCDaemonController *)arg1 ;
-(id)init;
-(void)unapplyChangeTrackingBehavior:(long long)arg1 ;
-(void)enableBabySitter;
-(void)disableDataAccess;
-(id)fetchStatusReportsWithError:(id*)arg1 ;
-(void)enableDataAccess;
-(id)_debugPerformerWithReason:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(long long)_getIntegerForKey:(id)arg1 withDefaultValue:(long long)arg2 ;
-(void)disableBabySitter;
-(BOOL)isBabySitterEnabled;
-(BOOL)isDataAccessEnabled;
-(REMXPCDaemonController *)daemonController;
-(void)_crashDaemonWithMessage:(id)arg1 ;
-(void)_setBoolValue:(BOOL)arg1 forBehaviorKey:(id)arg2 ;
-(id)initWithDaemonController:(id)arg1 ;
-(long long)changeTrackingBehaviors;
-(void)applyChangeTrackingBehavior:(long long)arg1 ;
-(BOOL)_getBoolForKey:(id)arg1 withDefaultValue:(BOOL)arg2 ;
-(void)_setIntegerValue:(long long)arg1 forBehaviorKey:(id)arg2 ;
@end

