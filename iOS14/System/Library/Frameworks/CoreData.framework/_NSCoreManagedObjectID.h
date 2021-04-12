/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSManagedObjectID.h>

@interface _NSCoreManagedObjectID : NSManagedObjectID
+(id)alloc;
+(void)initialize;
+(void)release;
+(Class)classWithStore:(id)arg1 andEntity:(id)arg2 ;
+(void)_setStoreInfo1:(id)arg1 ;
+(id)retain;
+(void)_release_1;
+(id)allocWithZone:(NSZone*)arg1 ;
+(unsigned)allocateBatch:(id*)arg1 count:(unsigned)arg2 ;
+(id)_retain_1;
+(id)_storeInfo1;
+(void)_storeDeallocated;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(BOOL)_usesTaggedPointers;
+(void)setObjectStoreIdentifier:(id)arg1 ;
+(id)managedObjectIDFromUTF8String:(const char*)arg1 length:(unsigned long long)arg2 ;
+(BOOL)accessInstanceVariablesDirectly;
+(char*)generatedNameSuffix;
+(long long)version;
+(id)managedObjectIDFromURIRepresentation:(id)arg1 ;
-(id)persistentStore;
-(BOOL)_isPersistentStoreAlive;
-(id)entityName;
-(oneway void)release;
-(id)entity;
-(id)URIRepresentation;
-(id)retain;
-(unsigned long long)retainCount;
-(id)_storeInfo1;
-(unsigned long long)hash;
-(BOOL)isTemporaryID;
-(id)_storeIdentifier;
-(BOOL)isEqual:(id)arg1 ;
@end

