/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
*/


@protocol OS_dispatch_queue, OS_os_log;
@class NSMutableDictionary, NSObject;

@interface _DASSubmissionRateLimiter : NSObject {

	int _dastoolToken;
	NSMutableDictionary* _penaltyBox;
	NSObject*<OS_dispatch_queue> _delayedSubmissionQueue;
	NSObject*<OS_os_log> _log;
	NSMutableDictionary* _activityGroupQueue;
	NSMutableDictionary* _submittedActivities;
	NSMutableDictionary* _activityGroups;

}

@property (nonatomic,retain) NSMutableDictionary * penaltyBox;                                 //@synthesize penaltyBox=_penaltyBox - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delayedSubmissionQueue;              //@synthesize delayedSubmissionQueue=_delayedSubmissionQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                                         //@synthesize log=_log - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activityGroupQueue;                         //@synthesize activityGroupQueue=_activityGroupQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * submittedActivities;                        //@synthesize submittedActivities=_submittedActivities - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activityGroups;                             //@synthesize activityGroups=_activityGroups - In the implementation block
@property (assign,nonatomic) int dastoolToken;                                                 //@synthesize dastoolToken=_dastoolToken - In the implementation block
+(id)groupNameForActivity:(id)arg1 ;
+(id)pluginGroupNameForGroupName:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)removeAllObjects;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(NSMutableDictionary *)activityGroupQueue;
-(void)handleCanceledActivity:(id)arg1 withGroupName:(id)arg2 ;
-(void)removeFromPenaltyBox:(id)arg1 ;
-(void)addToPenaltyBox:(id)arg1 atDate:(id)arg2 ;
-(unsigned long long)capacityForGroupName:(id)arg1 ;
-(BOOL)shouldQueueActivity:(id)arg1 ;
-(void)updateCapacity:(unsigned long long)arg1 forGroupName:(id)arg2 ;
-(BOOL)shouldDelaySubmissionOfActivity:(id)arg1 ;
-(BOOL)shouldDelayGroupSubmissionOfActivity:(id)arg1 ;
-(void)handleCanceledActivity:(id)arg1 ;
-(void)admitNextActivityAfterCompletionOf:(id)arg1 withScheduler:(id)arg2 ;
-(void)createActivityGroup:(id)arg1 ;
-(void)submitActivity:(id)arg1 withScheduler:(id)arg2 ;
-(void)submitActivities:(id)arg1 withScheduler:(id)arg2 ;
-(void)submitActivity:(id)arg1 inGroup:(id)arg2 withScheduler:(id)arg3 ;
-(void)activityCanceled:(id)arg1 withScheduler:(id)arg2 ;
-(void)activityCompleted:(id)arg1 withScheduler:(id)arg2 ;
-(NSMutableDictionary *)penaltyBox;
-(void)setPenaltyBox:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)delayedSubmissionQueue;
-(void)setDelayedSubmissionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setActivityGroupQueue:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)submittedActivities;
-(void)setSubmittedActivities:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)activityGroups;
-(void)setActivityGroups:(NSMutableDictionary *)arg1 ;
-(int)dastoolToken;
-(void)setDastoolToken:(int)arg1 ;
@end

