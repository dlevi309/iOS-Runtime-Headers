/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@interface SGExtractionModel : NSObject
+(id)loadLazyPlistWithBasename:(id)arg1 ;
+(id)inputDictFromTaggedCharacterRanges:(id)arg1 usingTokenMapping:(id)arg2 forModel:(id)arg3 ;
+(unsigned long long)featureDimensionForInputSection:(id)arg1 forModel:(id)arg2 ;
+(id)modelOutputFromOutputMapping:(id)arg1 modelOutput:(id)arg2 modelInput:(id)arg3 ;
+(id)argMaxForSequence:(id)arg1 ;
+(id)argMaxForLastOutput:(id)arg1 ;
+(id)argMaxForOutputIndex:(id)arg1 index:(int)arg2 shape:(id)arg3 ;
+(id)enrichTaggedCharacterRangesWithModelOutput:(id)arg1 usingInputCharacterRanges:(id)arg2 ;
+(void)cleanModelAssets;
+(void)cleanModelsDirectoryOfModelsNamed:(id)arg1 ;
+(void)cleanLegacyModelsDirectoryOfModelsNamed:(id)arg1 ;
+(id)modelsDirectoryName;
-(id)currentModelURLForModelName:(id)arg1 ;
@end

