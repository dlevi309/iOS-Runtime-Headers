/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/


@interface _PSBehaviorRuleRankingUtilities : NSObject
+(id)loadMLModelConfigurationWithConfigDict:(id)arg1 ;
+(id)getAdaptedModelRecipeVersionFilePath;
+(id)getAdaptedCompiledMLModelPath;
+(id)loadMLModel:(id)arg1 modelConfig:(id)arg2 ;
+(id)getTrialCompiledMLModelPath;
+(id)getDeployedCompiledMLModelPath;
+(id)reformatFeaturesInFeaturizedBehaviorRuleArray:(id)arg1 ;
+(id)batchPredictWithMLModel:(id)arg1 featureArrayDict:(id)arg2 ;
+(id)batchPredictWithAdaptedMLModel:(id)arg1 psConfigForAdaptableModel:(id)arg2 featurizedRules:(id)arg3 ;
+(id)unzipFileWithPath:(id)arg1 toFileName:(id)arg2 toFolderPath:(id)arg3 ;
+(id)getDeployedAdaptableCompiledMLModelPath;
+(id)getZippedDefaultAdaptableModelPath;
+(id)getIntermediateAdaptableCompiledMLModel;
+(id)getArchivedDefaultAdaptableModelPath;
+(id)reformatFeaturesInFeatureDictArray:(id)arg1 ;
+(id)predictWithMLModel:(id)arg1 featureDictArray:(id)arg2 ;
+(id)batchPredictWithAdaptedMLModel:(id)arg1 psConfigForAdaptableModel:(id)arg2 featureDictArray:(id)arg3 ;
+(BOOL)loadDeployedAdaptableModelUnderDirectory:(id)arg1 ;
+(id)loadAdaptableModelConfig:(id)arg1 ;
+(id)compileMLModelAtPath:(id)arg1 ;
+(BOOL)removeFolderAtPath:(id)arg1 ;
+(BOOL)copyFileFromURL:(id)arg1 toURL:(id)arg2 ;
+(id)getTrialCompiledAdaptableMLModelPath;
+(BOOL)copyZippedAdaptableModel:(id)arg1 ;
@end

