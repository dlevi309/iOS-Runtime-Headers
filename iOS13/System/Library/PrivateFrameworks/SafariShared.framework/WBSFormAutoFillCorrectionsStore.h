/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol WBSFormAutoFillCorrectionsStore <NSObject>
@required
-(void)getClassificationForFieldWithFingerprint:(id)arg1 onDomain:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)setLocalClassification:(id)arg1 forFieldWithFingerprint:(id)arg2 onDomain:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)removeAllLocalClassificationsWithCompletionHandler:(/*^block*/id)arg1;
-(void)removeLocalClassificationsForDomain:(id)arg1 recordedOnOrAfter:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)getLastCrowdsourcedCorrectionsRetrievalURLStringWithCompletionHandler:(/*^block*/id)arg1;
-(void)setLastCrowdsourcedCorrectionsRetrievalURLString:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)replaceCrowdsourcedCorrectionSetsWithCorrectionSets:(id)arg1 retrievalURLString:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)setCrowdsourcedClassification:(id)arg1 forFieldWithFingerprint:(id)arg2 onDomain:(id)arg3 completionHandler:(/*^block*/id)arg4;

@end

