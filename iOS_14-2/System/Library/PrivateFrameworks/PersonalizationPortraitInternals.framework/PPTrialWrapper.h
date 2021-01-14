/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class _PASLock, NSDictionary, PPSQLDatabase;

@interface PPTrialWrapper : NSObject {

	_PASLock* _lock;
	NSDictionary* _namespaceNamesIdsDict;
	BOOL _useDefaultFiles;
	PPSQLDatabase* _db;

}
+(id)sharedInstance;
-(id)lazyPlistForFactorName:(id)arg1 namespaceName:(id)arg2 error:(id*)arg3 ;
-(id)concatenatedTreatmentNames;
-(void)setUseDefaultFiles:(BOOL)arg1 ;
-(void)callRegisteredUpdateHandlers;
-(id)levelForFactor:(id)arg1 namespaceName:(id)arg2 ;
-(void)updateMetadataWithGuardedData:(id)arg1 ;
-(BOOL)resetMLModelsForNamespaceName:(id)arg1 error:(id*)arg2 ;
-(void)overrideFilepathForFileFactor:(id)arg1 namespaceName:(id)arg2 path:(id)arg3 ;
-(BOOL)hasFactor:(id)arg1 namespaceName:(id)arg2 ;
-(void)removeUpdateHandlerForToken:(id)arg1 ;
-(void)clearOverrideFilepathForFileFactor:(id)arg1 namespaceName:(id)arg2 ;
-(id)plistForFactorName:(id)arg1 namespaceName:(id)arg2 ;
-(id)filepathForFactor:(id)arg1 namespaceName:(id)arg2 ;
-(id)treatmentNameForNamespaceName:(id)arg1 ;
-(id)defaultFilepathForFactor:(id)arg1 namespaceName:(id)arg2 ;
-(void)updateMetadata;
-(id)treatmentIdForNamespaceName:(id)arg1 ;
-(id)lastTreatmentUpdateForNamespaceName:(id)arg1 ;
-(void)addUpdateHandlerForNamespaceName:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)readableTreatmentsMapping;
-(BOOL)hasModel:(id)arg1 namespaceName:(id)arg2 ;
-(unsigned)treatmentsHash;
-(id)mlModelPathForModelName:(id)arg1 namespaceName:(id)arg2 error:(id*)arg3 ;
-(void)updateMetadataForNamespaceName:(id)arg1 ;
-(id)initWithSettings:(id)arg1 database:(id)arg2 trialClient:(id)arg3 ;
-(void)callRegisteredUpdateHandlersForNamespaceName:(id)arg1 ;
-(id)mlModelForModelName:(id)arg1 namespaceName:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
@end

