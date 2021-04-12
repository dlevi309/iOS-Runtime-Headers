/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/


@interface PICompositionSerializer : NSObject
+(void)initialize;
+(id)deserializeDictionaryFromData:(id)arg1 error:(out id*)arg2 ;
+(id)serializeDictionary:(id)arg1 error:(out id*)arg2 ;
+(id)serializeComposition:(id)arg1 versionInfo:(id)arg2 serializerMetadata:(id)arg3 error:(out id*)arg4 ;
+(id)deserializeCompositionFromData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 error:(out id*)arg4 ;
+(BOOL)canInterpretDataWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 ;
+(id)deserializeCompositionFromAdjustments:(id)arg1 metadata:(id)arg2 formatIdentifier:(id)arg3 formatVersion:(id)arg4 error:(out id*)arg5 ;
+(id)serializeComposition:(id)arg1 versionInfo:(id)arg2 error:(out id*)arg3 ;
+(void)disableApertureEffects:(BOOL)arg1 ;
+(BOOL)validateCompositionWithMissingSource:(id)arg1 error:(out id*)arg2 ;
+(BOOL)validateAdjustmentsEnvelope:(id)arg1 error:(out id*)arg2 ;
+(BOOL)_validateValueTypesForKeys:(id)arg1 requiredKeys:(id)arg2 inDictionary:(id)arg3 error:(out id*)arg4 ;
+(void)_sanitizeComposition:(id)arg1 ;
@end

