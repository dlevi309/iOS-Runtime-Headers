/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/


@protocol TRIArtifactProvider
@required
-(void)fetchExperimentWithLatestDeploymentForExperimentId:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)fetchTreatmentWithId:(id)arg1 assetIndexes:(id)arg2 options:(id)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)fetchExperimentNotificationsWithNamespaceNames:(id)arg1 rollbacksOnly:(BOOL)arg2 lastFetchDateOverride:(id)arg3 options:(id)arg4 resultsHandler:(/*^block*/id)arg5;
-(void)fetchExperimentWithExperimentDeployment:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end

