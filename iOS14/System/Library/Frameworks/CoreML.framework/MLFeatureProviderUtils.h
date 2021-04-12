/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@interface MLFeatureProviderUtils : NSObject
+(BOOL)vectorizeFeaturesProvidedBy:(id)arg1 featureNames:(id)arg2 intoDoubleVector:(double*)arg3 length:(unsigned long long)arg4 stride:(unsigned long long)arg5 error:(id*)arg6 ;
+(id)lazyProviderWithFeaturesProvidedBy:(id)arg1 addedToFeaturesProvidedBy:(id)arg2 ;
+(BOOL)canVectorizeFeatureWithDescription:(id)arg1 ;
+(id)vectorizeFeaturesProvidedBy:(id)arg1 featureNames:(id)arg2 error:(id*)arg3 ;
+(long long)_vectorizedSizeOfFeatureValues:(id)arg1 error:(id*)arg2 ;
+(BOOL)_vectorizeWithoutSizeCheckFeatureValues:(id)arg1 intoDoubleVector:(double*)arg2 stride:(unsigned long long)arg3 error:(id*)arg4 ;
+(id)_featureValuesForNames:(id)arg1 providedBy:(id)arg2 error:(id*)arg3 ;
+(BOOL)canVectorizeAllFeaturesWithDescriptions:(id)arg1 ;
+(id)providerWithSubsetOfFeaturesNamed:(id)arg1 providedBy:(id)arg2 ;
@end

