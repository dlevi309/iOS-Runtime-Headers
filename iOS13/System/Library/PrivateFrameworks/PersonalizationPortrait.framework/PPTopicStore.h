/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <libobjc.A.dylib/PPFeedbackAccepting.h>
#import <libobjc.A.dylib/PPClientStore.h>

@class NSString;

@interface PPTopicStore : NSObject <PPFeedbackAccepting, PPClientStore>

@property (nonatomic,retain) NSString * clientIdentifier; 
+(id)defaultStore;
+(double)decayValue:(double)arg1 withDecayRate:(double)arg2 forTimeElapsed:(double)arg3 ;
+(double)squash:(double)arg1 withSigmoidWidth:(double)arg2 withPeakAt:(double)arg3 ;
+(double)squash:(double)arg1 usingHalfSigmoidWithScalingFactor:(double)arg2 ;
-(id)init;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSString *)clientIdentifier;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)donateTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 sentimentScore:(double)arg5 error:(id*)arg6 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 deletedCount:(unsigned long long*)arg2 error:(id*)arg3 ;
-(BOOL)deleteAllTopicsWithTopicId:(id)arg1 deletedCount:(unsigned long long*)arg2 error:(id*)arg3 ;
-(BOOL)cloudSyncWithError:(id*)arg1 ;
-(BOOL)clearWithError:(id*)arg1 deletedCount:(unsigned long long*)arg2 ;
-(BOOL)iterRankedTopicsWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)rankedTopicsWithQuery:(id)arg1 error:(id*)arg2 ;
-(BOOL)iterScoresForTopicMapping:(id)arg1 query:(id)arg2 error:(id*)arg3 block:(/*^block*/id)arg4 ;
-(id)scoresForTopicMapping:(id)arg1 query:(id)arg2 error:(id*)arg3 ;
-(BOOL)iterTopicRecordsWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)topicRecordsWithQuery:(id)arg1 error:(id*)arg2 ;
-(id)unmapMappedTopicIdentifier:(id)arg1 mappingIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)_initFromSubclass;
-(BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThan:(id)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5 ;
-(BOOL)clearWithError:(id*)arg1 ;
@end

