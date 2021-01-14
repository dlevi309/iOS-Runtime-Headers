/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@class NSMutableDictionary;

@interface IMDCKSyncStatsCollector : NSObject {

	NSMutableDictionary* _inMemorySyncStatistics;

}

@property (nonatomic,retain) NSMutableDictionary * inMemorySyncStatistics;              //@synthesize inMemorySyncStatistics=_inMemorySyncStatistics - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSMutableDictionary *)inMemorySyncStatistics;
-(void)_incrementCountsForColumnSyncedKey:(id)arg1 syncedColumnAmountToIncrease:(unsigned long long)arg2 totalColumnAmountKey:(id)arg3 totalColumnAmountToIncrease:(unsigned long long)arg4 ;
-(void)refreshWithDBSyncStatistics;
-(id)currentInMemorySyncStatistics;
-(void)incrementSyncedChatCount:(unsigned long long)arg1 incrementTotalChatCount:(unsigned long long)arg2 ;
-(void)incrementSyncedMessageCount:(unsigned long long)arg1 incrementTotalMessageCount:(unsigned long long)arg2 ;
-(void)incrementSyncedAttachmentCount:(unsigned long long)arg1 incrementTotalAttachmentCount:(unsigned long long)arg2 ;
-(void)setInMemorySyncStatistics:(NSMutableDictionary *)arg1 ;
@end

