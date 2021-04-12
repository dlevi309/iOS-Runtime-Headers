/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@interface MLDataConversionUtils : NSObject
+(id)featureProviderFromEspressoDataProvider:(id)arg1 neuralNetworkEngine:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
+(id)espressoDataProviderFromFeatureProvider:(id)arg1 forPrediction:(BOOL)arg2 neuralNetworkEngine:(id)arg3 error:(id*)arg4 ;
+(id)stridesForShape:(id)arg1 ;
+(id)espressoDataProviderFromBatchProvider:(id)arg1 forPrediction:(BOOL)arg2 neuralNetworkEngine:(id)arg3 error:(id*)arg4 ;
+(BOOL)populateEspressoShapeAndStridesFromInputShape:(id)arg1 ndRepresentation:(BOOL)arg2 espressoShape:(id*)arg3 espressoStrides:(id*)arg4 error:(id*)arg5 ;
+(id)batchProviderFromEspressoDataProvider:(id)arg1 neuralNetworkEngine:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
+(BOOL)populateShapeAndStrideFor:(id)arg1 inputShape:(id)arg2 outputShape:(id*)arg3 outputStrides:(id*)arg4 error:(id*)arg5 ;
@end

