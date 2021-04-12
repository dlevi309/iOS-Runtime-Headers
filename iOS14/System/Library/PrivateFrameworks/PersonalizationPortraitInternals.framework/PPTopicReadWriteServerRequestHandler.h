/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <libobjc.A.dylib/PPTopicReadWriteServerProtocol.h>

@interface PPTopicReadWriteServerRequestHandler : NSObject <PPTopicReadWriteServerProtocol>
-(void)clearWithCompletion:(/*^block*/id)arg1 ;
-(void)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cloudSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)deleteAllTopicsWithTopicId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)donateTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 sentimentScore:(double)arg5 exactMatchesInSourceText:(id)arg6 completion:(/*^block*/id)arg7 ;
@end

