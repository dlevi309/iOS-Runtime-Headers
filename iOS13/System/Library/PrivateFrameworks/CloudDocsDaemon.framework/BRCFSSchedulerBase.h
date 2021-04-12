/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/BRCLifeCycle.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class BRCAccountSession, BRCDeadlineSource, NSObject, NSString, PQLNameInjection;

@interface BRCFSSchedulerBase : NSObject <BRCLifeCycle> {

	BRCAccountSession* _session;
	BRCDeadlineSource* _schedulerSource;
	NSObject*<OS_dispatch_queue> _schedulerQueue;
	NSString* _name;
	BOOL _firstSchedulingAfterStartupDone;
	BOOL _hasActiveWork;
	BOOL _hasWork;
	BOOL _isCancelled;
	NSObject*<OS_dispatch_group> _hasWorkGroup;
	PQLNameInjection* _tableName;

}

@property (assign,nonatomic) BOOL hasWork;                                 //@synthesize hasWork=_hasWork - In the implementation block
@property (assign,nonatomic) BOOL hasActiveWork;                           //@synthesize hasActiveWork=_hasActiveWork - In the implementation block
@property (retain) NSObject*<OS_dispatch_group> hasWorkGroup;              //@synthesize hasWorkGroup=_hasWorkGroup - In the implementation block
@property (readonly) PQLNameInjection * tableName;                         //@synthesize tableName=_tableName - In the implementation block
@property (readonly) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (readonly) BOOL closed; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isCancelled;                           //@synthesize isCancelled=_isCancelled - In the implementation block
-(NSString *)name;
-(void)close;
-(void)cancel;
-(void)resume;
-(BOOL)isCancelled;
-(void)signal;
-(void)suspend;
-(BOOL)closed;
-(void)schedule;
-(PQLNameInjection *)tableName;
-(void)_close;
-(BOOL)hasWork;
-(NSObject*<OS_dispatch_group>)hasWorkGroup;
-(id)descriptionForJobsMatching:(id)arg1 ordering:(id)arg2 additionalColumns:(id)arg3 additionalValuesHandler:(/*^block*/id)arg4 context:(id)arg5 ;
-(void)describeInBuffer:(id)arg1 aggregateOfJobsMatching:(id)arg2 context:(id)arg3 ;
-(void)computeStamps:(throttle_stamps*)arg1 forJobID:(id)arg2 throttle:(id)arg3 shouldBackoff:(BOOL)arg4 ;
-(void)signalWithDeadline:(long long)arg1 ;
-(long long)updateStamps:(throttle_stamps*)arg1 throttle:(id)arg2 now:(long long)arg3 ;
-(BOOL)setState:(int)arg1 forJobsMatching:(id)arg2 ;
-(void)setHasActiveWork:(BOOL)arg1 ;
-(void)setHasWork:(BOOL)arg1 ;
-(void)performFirstSchedulingAfterStartupInDB:(id)arg1 ;
-(BOOL)canScheduleMoreJobs;
-(void)setHasWorkGroup:(NSObject*<OS_dispatch_group>)arg1 ;
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
-(void)scheduleWithBatchSize:(int)arg1 whereSQLClause:(id)arg2 columns:(id)arg3 actionHandler:(/*^block*/id)arg4 ;
-(BOOL)hasActiveWork;
@end

