/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@protocol PPTopicReadOnlyServerProtocol <PPFeedbackAccepting>
@required
-(void)unmapMappedTopicIdentifier:(id)arg1 mappingIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)scoresForTopicMapping:(id)arg1 query:(id)arg2 queryId:(unsigned long long)arg3;
-(void)topicRecordsWithQuery:(id)arg1 queryId:(unsigned long long)arg2;
-(void)rankedTopicsWithQuery:(id)arg1 queryId:(unsigned long long)arg2;

@end

