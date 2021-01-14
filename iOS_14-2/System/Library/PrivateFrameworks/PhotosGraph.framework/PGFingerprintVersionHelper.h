/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@interface PGFingerprintVersionHelper : NSObject
+(BOOL)_generateError:(id*)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3 underlyingError:(id)arg4 ;
+(id)nameForFingerprintVersion:(long long)arg1 ;
+(long long)fingerprintVersionForName:(id)arg1 ;
+(id)featureExtractorForFingerprintVersion:(long long)arg1 withGraph:(id)arg2 withTransformers:(id)arg3 error:(id*)arg4 ;
+(id)fetchOptionPropertySetForFingerprintVersion:(long long)arg1 ;
+(BOOL)isAssetFingerprintVersion:(long long)arg1 ;
+(BOOL)isMomentFingerprintVersion:(long long)arg1 ;
+(BOOL)isMemoryFingerprintVersion:(long long)arg1 ;
+(void)resetPreCalculatedFeatures;
+(id)_assetPrintFeatureExtractorForAssetPrintType:(long long)arg1 transformers:(id)arg2 ;
+(id)_multiModalFeatureExtractorForMutliModalType:(long long)arg1 assetFeatureExtractor:(id)arg2 personaVectorFeatureExtractor:(id)arg3 graph:(id)arg4 transformers:(id)arg5 error:(id*)arg6 ;
+(id)_personaVectorFeatureExtractorForPersonaVectorType:(long long)arg1 fetchOptionPropertySet:(id)arg2 graph:(id)arg3 transformers:(id)arg4 error:(id*)arg5 ;
+(id)_featureExtractors:(id)arg1 withTransformers:(id)arg2 ;
+(id)_featureExtractors:(id)arg1 withTransformers:(id)arg2 parentFeatureExtractorName:(id)arg3 ;
+(id)_featureExtractor:(id)arg1 withTransformers:(id)arg2 ;
+(id)_featureExtractor:(id)arg1 withTransformers:(id)arg2 parentFeatureExtractorName:(id)arg3 ;
+(id)_sceneprintFeatureExtractorInstance;
@end

