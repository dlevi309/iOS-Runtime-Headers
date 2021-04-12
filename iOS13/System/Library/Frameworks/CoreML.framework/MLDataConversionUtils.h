/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@interface MLDataConversionUtils : NSObject
+(id)stridesForShape:(id)arg1 ;
+(BOOL)populateEspressoShapeAndStridesFromInputShape:(id)arg1 ndRepresentation:(BOOL)arg2 espressoShape:(id*)arg3 espressoStrides:(id*)arg4 error:(id*)arg5 ;
+(BOOL)populateShapeAndStrideFor:(id)arg1 inputShape:(id)arg2 outputShape:(id*)arg3 outputStrides:(id*)arg4 error:(id*)arg5 ;
+(id)espressoDataProviderFromFeatureProvider:(id)arg1 forPrediction:(BOOL)arg2 neuralNetworkEngine:(id)arg3 error:(id*)arg4 ;
+(id)espressoDataProviderFromBatchProvider:(id)arg1 forPrediction:(BOOL)arg2 neuralNetworkEngine:(id)arg3 error:(id*)arg4 ;
+(id)featureProviderFomEspressoDataProvider:(id)arg1 neuralNetworkEngine:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
+(id)batchProviderFomEspressoDataProvider:(id)arg1 neuralNetworkEngine:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
@end

