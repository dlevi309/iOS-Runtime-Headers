/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

