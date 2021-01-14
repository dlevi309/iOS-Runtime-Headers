/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/


@interface PFLFileStorage : NSObject
+(void)initialize;
+(BOOL)fileExistsAtPath:(id)arg1 ;
+(id)_fileManager;
+(BOOL)removeFileAtPath:(id)arg1 ;
+(id)savedStateSave:(id)arg1 forTaskId:(id)arg2 ;
+(id)_localCacheModelsPath;
+(id)_localCacheSavedStatesPath;
+(id)_localCacheUploadResultsPath;
+(id)_listFilesAtPath:(id)arg1 ;
+(id)_modelFileName:(id)arg1 ;
+(id)_compiledModelFileName:(id)arg1 ;
+(BOOL)savedStateRemoveForTaskId:(id)arg1 ;
+(id)_savedStateFileName:(id)arg1 ;
+(BOOL)uploadResultsRemoveForTaskId:(id)arg1 ;
+(id)_uploadResultsFileName:(id)arg1 ;
+(id)_modelsFolder;
+(id)_uploadResultsFolder;
+(id)_savedStatesFolder;
+(void)cleanUnusedResourcesExceptActiveModels:(id)arg1 activeTasks:(id)arg2 ;
+(id)modelMoveToLocalCache:(id)arg1 from:(id)arg2 ;
+(id)modelRetrieveForModelId:(id)arg1 ;
+(BOOL)modelExistsForModelId:(id)arg1 ;
+(id)compiledModelMoveToLocalCache:(id)arg1 from:(id)arg2 ;
+(id)compiledModelRetrieveForModelId:(id)arg1 ;
+(BOOL)compiledModelExistsForModelId:(id)arg1 ;
+(BOOL)compiledModelRemoveForModelId:(id)arg1 ;
+(id)savedStateRetrieveForTaskId:(id)arg1 ;
+(BOOL)savedStateExistsForTaskId:(id)arg1 ;
+(id)uploadResultsSave:(id)arg1 forTaskId:(id)arg2 ;
+(id)uploadResultsRetrieveForTaskId:(id)arg1 ;
+(BOOL)uploadResultsExistsForTaskId:(id)arg1 ;
@end

