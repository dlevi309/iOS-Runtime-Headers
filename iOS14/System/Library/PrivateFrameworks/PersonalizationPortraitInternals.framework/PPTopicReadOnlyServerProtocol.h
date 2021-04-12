/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@protocol PPTopicReadOnlyServerProtocol <PPFeedbackAccepting>
@required
-(void)rankedTopicsWithQuery:(id)arg1 queryId:(unsigned long long)arg2;
-(void)topicRecordsWithQuery:(id)arg1 queryId:(unsigned long long)arg2;
-(void)topicExtractionsFromText:(id)arg1 queryId:(unsigned long long)arg2;
-(void)unmapMappedTopicIdentifier:(id)arg1 mappingIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)scoresForTopicMapping:(id)arg1 query:(id)arg2 queryId:(unsigned long long)arg3;

@end

