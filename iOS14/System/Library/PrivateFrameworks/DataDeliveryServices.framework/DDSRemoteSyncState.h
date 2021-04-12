/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/

#import <libobjc.A.dylib/DDSBackgroundActivitySchedulerDelegate.h>

@protocol DDSRemoteSyncStateDelegate;
@class NSDate, NSString, DDSBackgroundActivityScheduler;

@interface DDSRemoteSyncState : NSObject <DDSBackgroundActivitySchedulerDelegate> {

	id<DDSRemoteSyncStateDelegate> _delegate;
	long long _syncStatus;
	NSDate* _date;
	unsigned long long _attemptCount;
	NSString* _buildVersion;
	DDSBackgroundActivityScheduler* _scheduler;

}

@property (nonatomic,retain) NSDate * date;                                               //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) long long syncStatus;                                        //@synthesize syncStatus=_syncStatus - In the implementation block
@property (assign,nonatomic) unsigned long long attemptCount;                             //@synthesize attemptCount=_attemptCount - In the implementation block
@property (nonatomic,retain) NSString * buildVersion;                                     //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,retain) DDSBackgroundActivityScheduler * scheduler;                  //@synthesize scheduler=_scheduler - In the implementation block
@property (assign,nonatomic,__weak) id<DDSRemoteSyncStateDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buildVersionString;
+(double)timeIntervalUntilNextRegularUpdate;
-(void)loadState;
-(void)saveState;
-(long long)syncStatus;
-(unsigned long long)attemptCount;
-(void)setAttemptCount:(unsigned long long)arg1 ;
-(id)init;
-(void)requestUpdate;
-(id<DDSRemoteSyncStateDelegate>)delegate;
-(void)setDate:(NSDate *)arg1 ;
-(void)setDelegate:(id<DDSRemoteSyncStateDelegate>)arg1 ;
-(void)setBuildVersion:(NSString *)arg1 ;
-(void)resetState;
-(void)setScheduler:(DDSBackgroundActivityScheduler *)arg1 ;
-(NSString *)buildVersion;
-(NSDate *)date;
-(DDSBackgroundActivityScheduler *)scheduler;
-(void)performScheduledActivityWithIdentifier:(id)arg1 ;
-(BOOL)shouldInitiateRegularUpdateCycle;
-(void)scheduleRegularUpdate;
-(double)timeBetweenSyncs;
-(double)nextUpdateTimeIntervalForAttemptCount:(unsigned long long)arg1 ;
-(void)setSyncStatus:(long long)arg1 ;
-(void)scheduleRetry;
-(void)requestRetry;
-(void)beganUpdateCycle;
-(void)completedUpdateCycleWithError:(id)arg1 ;
@end

