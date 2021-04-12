/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/


@protocol OS_dispatch_queue;
@class TRIClient, NSString, NSObject, NSDate;

@interface TRIArtifactManager : NSObject {

	TRIClient* _triClient;
	NSString* _assetDownloadDir;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSDate* _lastFetchExperimentDate;

}

@property (retain) NSDate * lastFetchExperimentDate;              //@synthesize lastFetchExperimentDate=_lastFetchExperimentDate - In the implementation block
+(id)instance;
-(id)init;
-(void)dealloc;
-(id)dispatchQueue;
-(BOOL)isInternalBuild;
-(BOOL)downloadAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)downloadWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isBetaUser;
-(BOOL)fetchTreatmentWithId:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)fetchExperimentsSinceDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSDate *)lastFetchExperimentDate;
-(double)cloudKitAssetDownloadTimeoutSeconds;
-(id)assetDownloadDir;
-(BOOL)moveFileToCache:(id*)arg1 error:(id*)arg2 ;
-(BOOL)checkResponse:(id)arg1 location:(id)arg2 error:(id)arg3 request:(id)arg4 ;
-(void)setLastFetchExperimentDate:(NSDate *)arg1 ;
-(BOOL)runCloudKitQueryWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned)cloudKitCacheControlMaxAge;
-(BOOL)isFetchAllowed;
-(id)allowedDeploymentPopulations;
-(BOOL)fetchExperimentsWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)sortedResultsByModifiedDate:(id)arg1 ;
-(id)downloadAssetsFromCloudKitResult:(id)arg1 error:(id*)arg2 ;
-(BOOL)fetchExperimentsWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)fetchRollbacksSinceDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)fetchExperimentWithId:(id)arg1 sinceLastFetchOnly:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

