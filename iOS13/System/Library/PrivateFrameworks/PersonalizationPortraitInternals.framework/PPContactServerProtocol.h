/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@protocol PPContactServerProtocol <PPFeedbackAccepting>
@required
-(void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)arg1 chosenContactIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)contactNameRecordChangesForClient:(id)arg1 completion:(/*^block*/id)arg2;
-(void)contactNameRecordChangesForClient:(id)arg1 queryId:(unsigned long long)arg2;
-(void)contactNameRecordsForClient:(id)arg1 queryId:(unsigned long long)arg2;
-(void)rankedContactsWithQuery:(id)arg1 queryId:(unsigned long long)arg2;

@end

