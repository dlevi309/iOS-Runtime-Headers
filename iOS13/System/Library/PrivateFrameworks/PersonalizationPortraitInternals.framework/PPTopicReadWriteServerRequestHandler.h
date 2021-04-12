/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <libobjc.A.dylib/PPTopicReadWriteServerProtocol.h>

@interface PPTopicReadWriteServerRequestHandler : NSObject <PPTopicReadWriteServerProtocol>
-(void)clearWithCompletion:(/*^block*/id)arg1 ;
-(void)cloudSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)deleteAllTopicsWithTopicId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)donateTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 sentimentScore:(double)arg5 completion:(/*^block*/id)arg6 ;
@end

