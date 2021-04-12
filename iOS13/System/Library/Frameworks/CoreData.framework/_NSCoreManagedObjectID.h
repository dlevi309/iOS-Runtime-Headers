/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSManagedObjectID.h>

@interface _NSCoreManagedObjectID : NSManagedObjectID
+(id)alloc;
+(id)retain;
+(void)release;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(BOOL)accessInstanceVariablesDirectly;
+(long long)version;
+(unsigned)allocateBatch:(id*)arg1 count:(unsigned)arg2 ;
+(id)_storeInfo1;
+(void)_setStoreInfo1:(id)arg1 ;
+(char*)generatedNameSuffix;
+(id)_retain_1;
+(void)_release_1;
+(void)setObjectStoreIdentifier:(id)arg1 ;
+(Class)classWithStore:(id)arg1 andEntity:(id)arg2 ;
+(id)managedObjectIDFromUTF8String:(const char*)arg1 length:(unsigned long long)arg2 ;
+(id)managedObjectIDFromURIRepresentation:(id)arg1 ;
+(void)_storeDeallocated;
-(unsigned long long)retainCount;
-(BOOL)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)hash;
-(id)entityName;
-(id)entity;
-(id)URIRepresentation;
-(id)_storeInfo1;
-(id)persistentStore;
-(id)_storeIdentifier;
-(BOOL)isTemporaryID;
-(BOOL)_isPersistentStoreAlive;
@end

