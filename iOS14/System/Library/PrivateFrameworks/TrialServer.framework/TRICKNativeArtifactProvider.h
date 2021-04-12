/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <libobjc.A.dylib/TRIArtifactProvider.h>

@protocol TRIDateProviding, TRINamespaceDescriptorProviding, TRIPaths;
@class CKContainer, CKRecordZoneID, NSString;

@interface TRICKNativeArtifactProvider : NSObject <TRIArtifactProvider> {

	CKContainer* _container;
	CKRecordZoneID* _zoneID;
	NSString* _teamId;
	id<TRIDateProviding> _dateProvider;
	id<TRINamespaceDescriptorProviding> _namespaceDescriptorProvider;
	id<TRIPaths> _paths;
	NSString* _bundleId;

}

@property (nonatomic,readonly) CKContainer * container;                                                      //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) CKRecordZoneID * zoneID;                                                      //@synthesize zoneID=_zoneID - In the implementation block
@property (nonatomic,readonly) NSString * teamId;                                                            //@synthesize teamId=_teamId - In the implementation block
@property (nonatomic,readonly) id<TRIDateProviding> dateProvider;                                            //@synthesize dateProvider=_dateProvider - In the implementation block
@property (nonatomic,readonly) id<TRINamespaceDescriptorProviding> namespaceDescriptorProvider;              //@synthesize namespaceDescriptorProvider=_namespaceDescriptorProvider - In the implementation block
@property (nonatomic,readonly) id<TRIPaths> paths;                                                           //@synthesize paths=_paths - In the implementation block
@property (nonatomic,readonly) NSString * bundleId;                                                          //@synthesize bundleId=_bundleId - In the implementation block
+(id)providerForContainer:(int)arg1 teamId:(id)arg2 bundleId:(id)arg3 dateProvider:(id)arg4 namespaceDescriptorProvider:(id)arg5 paths:(id)arg6 ;
+(id)mockSQLiteContainerWithIdentifier:(id)arg1 ;
+(id)cloudkitIdentifierForContainer:(int)arg1 ;
+(id)containerForIdentifier:(id)arg1 ;
+(id)recordZoneForContainerIdentifier:(id)arg1 teamId:(id)arg2 ;
+(int)containerFromCkContainer:(id)arg1 ;
-(id<TRIPaths>)paths;
-(CKRecordZoneID *)zoneID;
-(NSString *)teamId;
-(NSString *)bundleId;
-(id<TRIDateProviding>)dateProvider;
-(CKContainer *)container;
-(void)fetchExperimentWithLatestDeploymentForExperimentId:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchTreatmentWithId:(id)arg1 assetIndexes:(id)arg2 options:(id)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)configurationFromOptions:(id)arg1 ;
-(id)initWithCloudKitContainer:(int)arg1 teamId:(id)arg2 bundleId:(id)arg3 dateProvider:(id)arg4 namespaceDescriptorProvider:(id)arg5 paths:(id)arg6 ;
-(id<TRINamespaceDescriptorProviding>)namespaceDescriptorProvider;
-(id)queryOperationForRecordType:(id)arg1 predicate:(id)arg2 options:(id)arg3 recordFetchedBlock:(/*^block*/id)arg4 queryCompletionBlock:(/*^block*/id)arg5 ;
-(void)_fetchExperimentWithExperimentId:(id)arg1 deploymentId:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_fetchNotificationsWithQueryType:(unsigned long long)arg1 withCursor:(id)arg2 withNamespaceNames:(id)arg3 sinceDate:(id)arg4 options:(id)arg5 resultsHandler:(/*^block*/id)arg6 ;
-(id)queryOperationWithCursor:(id)arg1 options:(id)arg2 recordFetchedBlock:(/*^block*/id)arg3 queryCompletionBlock:(/*^block*/id)arg4 ;
-(void)_fetchExperimentsWithCursor:(id)arg1 withNamespaceNames:(id)arg2 sinceDate:(id)arg3 fetchRollbacksOnly:(BOOL)arg4 options:(id)arg5 resultsHandler:(/*^block*/id)arg6 ;
-(id)_selectAssetIndexesFromTreatment:(id)arg1 requestedAssetIndexes:(id)arg2 ;
-(void)fetchExperimentNotificationsWithNamespaceNames:(id)arg1 rollbacksOnly:(BOOL)arg2 lastFetchDateOverride:(id)arg3 options:(id)arg4 resultsHandler:(/*^block*/id)arg5 ;
-(void)fetchExperimentWithExperimentDeployment:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

