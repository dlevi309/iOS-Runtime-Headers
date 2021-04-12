/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/


@interface PICompositionSerializer : NSObject
+(void)initialize;
+(id)serializeComposition:(id)arg1 versionInfo:(id)arg2 error:(out id*)arg3 ;
+(void)disableApertureEffects:(BOOL)arg1 ;
+(id)deserializeDictionaryFromData:(id)arg1 error:(out id*)arg2 ;
+(id)serializeComposition:(id)arg1 versionInfo:(id)arg2 serializerMetadata:(id)arg3 error:(out id*)arg4 ;
+(id)deserializeCompositionFromData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 error:(out id*)arg4 ;
+(BOOL)canInterpretDataWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 ;
+(id)deserializeCompositionFromAdjustments:(id)arg1 metadata:(id)arg2 formatIdentifier:(id)arg3 formatVersion:(id)arg4 error:(out id*)arg5 ;
+(id)serializeDictionary:(id)arg1 error:(out id*)arg2 ;
+(BOOL)validateCompositionWithMissingSource:(id)arg1 error:(out id*)arg2 ;
+(BOOL)validateAdjustmentsEnvelope:(id)arg1 error:(out id*)arg2 ;
+(BOOL)_validateValueTypesForKeys:(id)arg1 requiredKeys:(id)arg2 inDictionary:(id)arg3 error:(out id*)arg4 ;
+(void)_sanitizeComposition:(id)arg1 ;
+(id)adjustmentInformationForComposition:(id)arg1 error:(out id*)arg2 ;
@end

