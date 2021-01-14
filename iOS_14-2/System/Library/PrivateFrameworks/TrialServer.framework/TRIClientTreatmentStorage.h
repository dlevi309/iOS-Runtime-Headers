/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/


@protocol TRIPaths, TRIAssetExtracting;
@interface TRIClientTreatmentStorage : NSObject {

	id<TRIPaths> _paths;
	id<TRIAssetExtracting> _extractor;

}
-(id)init;
-(id)initWithPaths:(id)arg1 ;
-(BOOL)removeTreatmentWithTreatmentId:(id)arg1 ;
-(BOOL)removeTreatmentFromLayer:(unsigned long long)arg1 withNamespaceName:(id)arg2 ;
-(id)loadTreatmentWithTreatmentId:(id)arg1 isFilePresent:(BOOL*)arg2 ;
-(id)urlForDefaultFactorsWithNamespaceName:(id)arg1 ;
-(id)saveTreatment:(id)arg1 assetURLs:(id)arg2 ;
-(id)urlForFactorsWithTreatmentId:(id)arg1 namespaceName:(id)arg2 ;
-(id)updateSavedTreatmentWithTreatmentId:(id)arg1 mergingAssetURLs:(id)arg2 forNamespaceNames:(id)arg3 ;
-(id)initWithPaths:(id)arg1 extractor:(id)arg2 ;
-(id)urlForTreatmentWithTreatmentId:(id)arg1 ;
-(BOOL)_saveAssetsFromURLs:(id)arg1 treatment:(id)arg2 ;
-(BOOL)_linkAssetsUpdatingTreatment:(id)arg1 ;
-(BOOL)_saveNamespacePartitionedTreatmentsForTreatment:(id)arg1 forNamespaceNames:(id)arg2 ;
-(BOOL)_savePersistedTreatment:(id)arg1 ;
-(BOOL)_removeFactorsWithURL:(id)arg1 ;
-(BOOL)_removeFactorsWithTreatmentId:(id)arg1 namespaceName:(id)arg2 ;
-(id)_baseUrlForTreatment:(id)arg1 namespaceName:(id)arg2 ;
-(id)_assetMapWithTreatment:(id)arg1 ;
-(id)_assetURLForFactor:(id)arg1 treatmentId:(id)arg2 ;
-(BOOL)_resolveAssetPathsInTreatment:(id)arg1 usingReferenceURL:(id)arg2 ;
-(id)_copyFileFromURL:(id)arg1 to:(id)arg2 ;
@end

