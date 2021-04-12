/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/BRCLifeCycle.h>

@protocol OS_dispatch_workloop, OS_dispatch_group;
@class BRCAccountSession, BRCDeadlineSource, NSObject, NSString, PQLNameInjection;

@interface BRCFSSchedulerBase : NSObject <BRCLifeCycle> {

	BRCAccountSession* _session;
	BRCDeadlineSource* _schedulerSource;
	NSObject*<OS_dispatch_workloop> _schedulerWorkloop;
	NSString* _name;
	BOOL _firstSchedulingAfterStartupDone;
	BOOL _hasActiveWork;
	BOOL _hasWork;
	BOOL _isCancelled;
	NSObject*<OS_dispatch_group> _hasWorkGroup;
	NSObject*<OS_dispatch_group> _hasActiveWorkGroup;
	PQLNameInjection* _tableName;

}

@property (assign,nonatomic) BOOL hasWork;                                       //@synthesize hasWork=_hasWork - In the implementation block
@property (assign,nonatomic) BOOL hasActiveWork;                                 //@synthesize hasActiveWork=_hasActiveWork - In the implementation block
@property (retain) NSObject*<OS_dispatch_group> hasWorkGroup;                    //@synthesize hasWorkGroup=_hasWorkGroup - In the implementation block
@property (retain) NSObject*<OS_dispatch_group> hasActiveWorkGroup;              //@synthesize hasActiveWorkGroup=_hasActiveWorkGroup - In the implementation block
@property (readonly) PQLNameInjection * tableName;                               //@synthesize tableName=_tableName - In the implementation block
@property (readonly) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (readonly) BOOL closed; 
@property (nonatomic,readonly) BOOL isCancelled;                                 //@synthesize isCancelled=_isCancelled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_close;
-(BOOL)closed;
-(PQLNameInjection *)tableName;
-(void)suspend;
-(void)close;
-(BOOL)hasWork;
-(NSString *)name;
-(void)schedule;
-(void)signal;
-(void)cancel;
-(void)resume;
-(BOOL)isCancelled;
-(NSObject*<OS_dispatch_group>)hasActiveWorkGroup;
-(NSObject*<OS_dispatch_group>)hasWorkGroup;
-(id)descriptionForJobsMatching:(id)arg1 ordering:(id)arg2 additionalColumns:(id)arg3 additionalValuesHandler:(/*^block*/id)arg4 context:(id)arg5 ;
-(void)describeInBuffer:(id)arg1 aggregateOfJobsMatching:(id)arg2 context:(id)arg3 ;
-(void)computeStamps:(throttle_stamps*)arg1 forJobID:(id)arg2 throttle:(id)arg3 shouldBackoff:(BOOL)arg4 ;
-(void)signalWithDeadline:(long long)arg1 ;
-(long long)updateStamps:(throttle_stamps*)arg1 throttle:(id)arg2 now:(long long)arg3 ;
-(BOOL)setState:(int)arg1 forJobsMatching:(id)arg2 ;
-(BOOL)hasActiveWork;
-(void)setHasWork:(BOOL)arg1 ;
-(void)setHasActiveWork:(BOOL)arg1 ;
-(void)performFirstSchedulingAfterStartupInDB:(id)arg1 ;
-(BOOL)canScheduleMoreJobs;
-(void)checkIfHasWork;
-(void)setHasWorkGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setHasActiveWorkGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(id)initWithSession:(id)arg1 name:(id)arg2 tableName:(id)arg3 ;
-(BOOL)canRetryJobWithID:(id)arg1 ;
-(BOOL)haveActiveJobsMatching:(id)arg1 ;
-(int)jobStateFor:(id)arg1 ;
-(id)descriptionForJobsMatching:(id)arg1 context:(id)arg2 ;
-(id)aggregateDescriptionForJobsMatching:(id)arg1 context:(id)arg2 ;
-(unsigned long long)postponeJobID:(id)arg1 withThrottle:(id)arg2 ;
-(brc_job_update)insertOrUpdateJobID:(id)arg1 throttle:(id)arg2 withState:(int)arg3 insertedSQLColumn:(id)arg4 insertedSQLValues:(id)arg5 updatedSQLValues:(id)arg6 ;
-(void)rescheduleSuspendedJobsMatching:(id)arg1 inState:(int)arg2 ;
-(BOOL)setState:(int)arg1 forJobID:(id)arg2 ;
-(void)deleteJobsMatching:(id)arg1 ;
-(void)resetBackoffForJobWithID:(id)arg1 ;
-(void)deleteExpiredJobs;
-(unsigned)recoverAndReportMissingJobs;
-(void)scheduleWithBatchSize:(int)arg1 whereSQLClause:(id)arg2 columns:(id)arg3 actionHandler:(/*^block*/id)arg4 ;
@end

