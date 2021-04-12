/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@interface MLFeatureProviderUtils : NSObject
+(id)_featureValuesForNames:(id)arg1 providedBy:(id)arg2 error:(id*)arg3 ;
+(long long)_vectorizedSizeOfFeatureValues:(id)arg1 error:(id*)arg2 ;
+(BOOL)_vectorizeWithoutSizeCheckFeatureValues:(id)arg1 intoDoubleVector:(double*)arg2 stride:(unsigned long long)arg3 error:(id*)arg4 ;
+(BOOL)vectorizeFeaturesProvidedBy:(id)arg1 featureNames:(id)arg2 intoDoubleVector:(double*)arg3 length:(unsigned long long)arg4 stride:(unsigned long long)arg5 error:(id*)arg6 ;
+(id)vectorizeFeaturesProvidedBy:(id)arg1 featureNames:(id)arg2 error:(id*)arg3 ;
+(BOOL)canVectorizeFeatureWithDescription:(id)arg1 ;
+(BOOL)canVectorizeAllFeaturesWithDescriptions:(id)arg1 ;
+(id)providerWithSubsetOfFeaturesNamed:(id)arg1 providedBy:(id)arg2 ;
+(id)lazyProviderWithFeaturesProvidedBy:(id)arg1 addedToFeaturesProvidedBy:(id)arg2 ;
@end

