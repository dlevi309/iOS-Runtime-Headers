/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, ACDDatabase;

@interface ACDDatabaseBackupActivity : NSObject {

	BOOL _xpcActivityPending;
	NSObject*<OS_xpc_object> _activityExecutionCriteria;
	NSObject*<OS_dispatch_queue> _queue;
	ACDDatabase* _database;

}

@property (nonatomic,readonly) ACDDatabase * database;              //@synthesize database=_database - In the implementation block
+(id)new;
-(id)init;
-(id)activityCriteria;
-(ACDDatabase *)database;
-(id)initWithDatabase:(id)arg1 ;
-(void)scheduleBackupIfNonexistent;
-(void)_registerActivityIfNeededSchedulingBackup:(BOOL)arg1 ;
-(void)_registerActivitySchedulingBackup:(BOOL)arg1 ;
-(void)scheduleBackup;
-(void)registerActivityIfNeeded;
@end

