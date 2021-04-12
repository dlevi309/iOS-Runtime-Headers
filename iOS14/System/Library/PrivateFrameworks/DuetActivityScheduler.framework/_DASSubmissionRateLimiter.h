/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)pluginGroupNameForGroupName:(id)arg1 ;
+(id)groupNameForActivity:(id)arg1 ;
-(void)activityCanceled:(id)arg1 withScheduler:(id)arg2 ;
-(void)setSubmittedActivities:(NSMutableDictionary *)arg1 ;
-(id)init;
-(NSMutableDictionary *)activityGroups;
-(NSObject*<OS_os_log>)log;
-(void)setDastoolToken:(int)arg1 ;
-(void)setPenaltyBox:(NSMutableDictionary *)arg1 ;
-(void)setActivityGroups:(NSMutableDictionary *)arg1 ;
-(void)activityCompleted:(id)arg1 withScheduler:(id)arg2 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)handleCanceledActivity:(id)arg1 ;
-(BOOL)shouldDelayGroupSubmissionOfActivity:(id)arg1 ;
-(NSMutableDictionary *)activityGroupQueue;
-(NSObject*<OS_dispatch_queue>)delayedSubmissionQueue;
-(BOOL)shouldQueueActivity:(id)arg1 ;
-(void)setDelayedSubmissionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)admitNextActivityAfterCompletionOf:(id)arg1 withScheduler:(id)arg2 ;
-(void)submitActivity:(id)arg1 inGroup:(id)arg2 withScheduler:(id)arg3 ;
-(BOOL)shouldDelaySubmissionOfActivity:(id)arg1 ;
-(void)removeFromPenaltyBox:(id)arg1 ;
-(void)removeAllObjects;
-(void)addToPenaltyBox:(id)arg1 atDate:(id)arg2 ;
-(void)updateCapacity:(unsigned long long)arg1 forGroupName:(id)arg2 ;
-(void)submitActivities:(id)arg1 withScheduler:(id)arg2 ;
-(unsigned long long)capacityForGroupName:(id)arg1 ;
-(void)createActivityGroup:(id)arg1 ;
-(int)dastoolToken;
-(void)submitActivity:(id)arg1 withScheduler:(id)arg2 ;
-(void)setActivityGroupQueue:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)submittedActivities;
-(NSMutableDictionary *)penaltyBox;
-(void)handleCanceledActivity:(id)arg1 withGroupName:(id)arg2 ;
-(void)dealloc;
@end

