/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol WBSFormAutoFillCorrectionsStore <NSObject>
@required
-(void)getLastCrowdsourcedCorrectionsRetrievalURLStringWithCompletionHandler:(/*^block*/id)arg1;
-(void)replaceCrowdsourcedCorrectionSetsWithCorrectionSets:(id)arg1 retrievalURLString:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)setLastCrowdsourcedCorrectionsRetrievalURLString:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getClassificationForFieldWithFingerprint:(id)arg1 onDomain:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)removeAllLocalClassificationsWithCompletionHandler:(/*^block*/id)arg1;
-(void)removeLocalClassificationsForDomain:(id)arg1 recordedOnOrAfter:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)setLocalClassification:(id)arg1 forFieldWithFingerprint:(id)arg2 onDomain:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)setCrowdsourcedClassification:(id)arg1 forFieldWithFingerprint:(id)arg2 onDomain:(id)arg3 completionHandler:(/*^block*/id)arg4;

@end

