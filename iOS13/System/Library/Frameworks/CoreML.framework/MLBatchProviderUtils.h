/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@interface MLBatchProviderUtils : NSObject
+(id)featureNamesInBatch:(id)arg1 ;
+(id)featureProviderArrayFromBatch:(id)arg1 ;
+(id)dictionaryFromBatch:(id)arg1 featureNames:(id)arg2 ;
+(id)dictionaryFromBatch:(id)arg1 ;
+(id)featureValueArrayForName:(id)arg1 batch:(id)arg2 error:(id*)arg3 ;
+(id)featureDescriptionsByNameForBatch:(id)arg1 error:(id*)arg2 ;
+(id)lazyBatchWindowIntoBatch:(id)arg1 startIndex:(unsigned long long)arg2 windowLength:(unsigned long long)arg3 error:(id*)arg4 ;
+(id)lazyBatchIndexIntoBatch:(id)arg1 indices:(id)arg2 error:(id*)arg3 ;
+(id)lazyBatchWithFeaturesInBatch:(id)arg1 addedToBatch:(id)arg2 error:(id*)arg3 ;
+(id)batchFromConcatinatingBatches:(id)arg1 ;
+(id)batchWithSubsetOfFeaturesNamed:(id)arg1 fromBatch:(id)arg2 ;
+(BOOL)vectorizeFeaturesNamed:(id)arg1 fromBatch:(id)arg2 intoRowsOfDoubleMatrix:(id)arg3 error:(id*)arg4 ;
@end

