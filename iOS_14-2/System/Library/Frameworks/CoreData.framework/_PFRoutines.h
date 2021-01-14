/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


#import <CoreData/CoreData-Structs.h>
@interface _PFRoutines : NSObject
+(void)initialize;
+(id)_newCollectionFromCollection:(id)arg1 forParentContext:(id)arg2 andClass:(Class)arg3 ;
+(void)readBytesForExternalReferenceData:(id)arg1 intoBuffer:(void*)arg2 range:(NSRange)arg3 ;
+(id)newMappedDataForExternalReference:(id)arg1 ;
+(BOOL)_isInMemoryStore:(id)arg1 ;
+(unsigned long long)_generateUbiquityHashForPath:(id)arg1 ;
+(id)newOrderedSetFromCollection:(id)arg1 byInsertingItems:(id)arg2 atIndex:(unsigned long long)arg3 ;
+(void)efficientlyEnumerateManagedObjectsInFetchRequest:(id)arg1 usingManagedObjectContext:(id)arg2 andApplyBlock:(/*^block*/id)arg3 ;
+(id)valueForProcessArgument:(id)arg1 ;
+(BOOL)isSanitizedVersionOf:(id)arg1 equalTo:(id)arg2 ;
+(id)newMutableArrayFromCollection:(id)arg1 forParentContext:(id)arg2 ;
+(BOOL)_generateObjectIDMaptableForArray:(id)arg1 withMapping:(id*)arg2 andEntries:(id*)arg3 ;
+(id)_groupObjectsByRootEntity:(id)arg1 ;
+(CFDictionaryRef)_createDictionaryPartitioningObjects:(id)arg1 intoHierarchies:(BOOL)arg2 ;
+(id)newMutableSetFromCollection:(id)arg1 byRemovingItems:(id)arg2 ;
+(id)anyObjectFromCollection:(id)arg1 ;
+(id)_coalescedPrefetchKeypaths:(id)arg1 ;
+(BOOL)createExternalReferenceLinkFromPath:(id)arg1 toPath:(id)arg2 protectionLevel:(int)arg3 error:(id*)arg4 ;
+(BOOL)_isInMemoryStoreURL:(id)arg1 ;
+(BOOL)isUbiquitousURLUploaded:(id)arg1 error:(id*)arg2 ;
+(id)retainedDecodeValue:(id)arg1 forTransformableAttribute:(id)arg2 ;
+(id)attributeClassesForSecureCoding;
+(CFDictionaryRef)createDictionaryPartitioningObjectsByEntity:(id)arg1 ;
+(id)_frameworkHash;
+(CFDictionaryRef)createDictionaryPartitioningObjectsByRootEntity:(id)arg1 ;
+(id)writePFExternalReferenceDataToInterimFile:(id)arg1 ;
+(id)_replaceBaseline:(id)arg1 inOrderedSet:(id)arg2 withOrderedSet:(id)arg3 ;
+(void*)readExternalReferenceDataFromFile:(id)arg1 ;
+(BOOL)_expressionIsCompoundIndexCompatible:(id)arg1 ;
+(BOOL)isUbiquitousURLDownloaded:(id)arg1 error:(id*)arg2 ;
+(id)applicationDeactivateLifecyleNotifications;
+(void)deleteFileForPFExternalReferenceData:(id)arg1 ;
+(id)fetchHeterogeneousCollectionByObjectIDs:(id)arg1 intoContext:(id)arg2 ;
+(id)newCollection:(Class)arg1 fromCollection:(id)arg2 byAddingItems:(id)arg3 ;
+(id)newMutableArrayFromCollection:(id)arg1 byRemovingItems:(id)arg2 ;
+(id)newOrderedSetFromCollection:(id)arg1 byAddingItems:(id)arg2 ;
+(void)wrapBlockInGuardedAutoreleasePool:(/*^block*/id)arg1 ;
+(BOOL)moveInterimFileToPermanentLocation:(id)arg1 ;
+(id)newOrderedSetFromCollection:(id)arg1 ;
+(id)_getUUID;
+(BOOL)_doNameAndTypeCheck:(id)arg1 ;
+(BOOL)_objectsInOrderedCollection:(id)arg1 formSubstringInOrderedCollection:(id)arg2 ;
+(void)attemptToUpdatePermissionsForFileAtPath:(const char*)arg1 toLevel:(int)arg2 ;
+(void)cleanupExternalReferenceLink:(const char*)arg1 ;
+(id)stringValueForOverride:(id)arg1 ;
+(id)newMutableSetFromCollection:(id)arg1 forParentContext:(id)arg2 ;
+(void)setOrRemoveValue:(id)arg1 forKey:(id)arg2 inDictionary:(id)arg3 ;
+(id)newArrayOfObjectIDsFromCollection:(id)arg1 ;
+(id)_newObjectIDsArrayWithMapping:(id)arg1 andEntries:(id)arg2 andCoordinator:(id)arg3 ;
+(void)generateSHA512:(char*)arg1 forStrings:(id)arg2 ;
+(CFDictionaryRef)createDictionaryPartitioningObjectsIDByRootEntity:(id)arg1 ;
+(id)sanitize:(id)arg1 ;
+(id)newOrderedSetOfObjectIDsFromCollection:(id)arg1 ;
+(long long)lengthOfFileAtExternalReferenceLocation:(const char*)arg1 ;
+(id)newOrderedSetFromCollection:(id)arg1 byRemovingItems:(id)arg2 ;
+(id)retainedEncodeObjectValue:(id)arg1 forTransformableAttribute:(id)arg2 ;
+(id)_rootEntityGroupsForObjects:(id)arg1 passingBlock:(/*^block*/id)arg2 ;
+(CFDictionaryRef)createDictionaryPartitioningObjectsIDByEntity:(id)arg1 ;
+(id)_remoteChangeNotificationNameForStore:(id)arg1 ;
+(void)_logFileAccessDebugInformation:(const char*)arg1 ;
+(id)plistClassesForSecureCoding;
+(id)newMutableOrderedSetFromCollection:(id)arg1 forParentContext:(id)arg2 ;
+(BOOL)convertCString:(const char*)arg1 toUnsignedInt64:(unsigned long long*)arg2 withBase:(int)arg3 ;
+(void)getIndexes:(unsigned*)arg1 fromCollection:(id)arg2 forObjectsInCollection:(id)arg3 ;
+(long long)integerValueForOverride:(id)arg1 ;
+(id)newSetFromCollection:(id)arg1 byAddingItems:(id)arg2 ;
+(CFDictionaryRef)_createDictionaryPartitioningObjectIDs:(id)arg1 intoHierarchies:(BOOL)arg2 ;
+(id)newMutableOrderedSetFromCollection:(id)arg1 ;
+(id)_createNicksBase64EncodedStringFromData:(id)arg1 ;
+(BOOL)boolValueForOverride:(id)arg1 ;
+(id)newMutableSetFromCollection:(id)arg1 byIntersectingWithCollection:(id)arg2 ;
+(id)newSetOfObjectIDsFromCollection:(id)arg1 ;
+(id)_getPFBundleVersionNumber;
+(id)applicationActivateLifecyleNotifications;
@end

