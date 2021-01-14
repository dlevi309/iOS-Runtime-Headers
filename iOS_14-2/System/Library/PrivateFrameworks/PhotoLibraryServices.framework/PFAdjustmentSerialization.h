/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PFAdjustmentSerialization : NSObject
+(id)deserializeDictionaryFromData:(id)arg1 error:(id*)arg2 ;
+(id)serializeAdjustments:(id)arg1 error:(id*)arg2 ;
+(id)deserializeAdjustmentsFromData:(id)arg1 error:(id*)arg2 ;
+(id)serializeDictionary:(id)arg1 error:(id*)arg2 ;
+(BOOL)validateArchive:(id)arg1 containsEntryWithKey:(id)arg2 ofType:(Class)arg3 errors:(id)arg4 ;
+(BOOL)validateValue:(id)arg1 isOfType:(Class)arg2 errors:(id)arg3 ;
@end

