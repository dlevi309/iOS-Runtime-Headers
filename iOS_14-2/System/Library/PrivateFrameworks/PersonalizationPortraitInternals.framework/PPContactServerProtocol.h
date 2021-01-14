/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@protocol PPContactServerProtocol <PPFeedbackAccepting>
@required
-(void)contactNameRecordChangesForClient:(id)arg1 queryId:(unsigned long long)arg2;
-(void)rankedContactsWithQuery:(id)arg1 queryId:(unsigned long long)arg2;
-(void)contactNameRecordsForClient:(id)arg1 queryId:(unsigned long long)arg2;
-(void)contactHandlesForTopics:(id)arg1 queryId:(unsigned long long)arg2;
-(void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)arg1 chosenContactIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)contactHandlesForSource:(id)arg1 queryId:(unsigned long long)arg2;
-(void)contactNameRecordChangesForClient:(id)arg1 completion:(/*^block*/id)arg2;

@end

