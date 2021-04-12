/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/


@interface PFCameraAdjustmentsSerialization : NSObject
+(Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3 ;
+(id)deserializedAdjustmentsFromData:(id)arg1 error:(id*)arg2 ;
+(BOOL)deserializeDictionary:(id)arg1 toFilters:(id*)arg2 portraitMetadata:(id*)arg3 error:(id*)arg4 ;
+(id)serializedAdjustments:(id)arg1 error:(id*)arg2 ;
+(id)serializedDictionaryForFilters:(id)arg1 portraitMetadata:(id)arg2 error:(id*)arg3 ;
+(id)_errorWithMessage:(id)arg1 code:(long long)arg2 ;
@end

