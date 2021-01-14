/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/_NSScalarObjectID.h>

@interface _NSCoreDataTaggedObjectID : _NSScalarObjectID
+(id)alloc;
+(void)initialize;
+(Class)classWithStore:(id)arg1 andEntity:(id)arg2 ;
+(void)_setStoreInfo1:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(unsigned)allocateBatch:(id*)arg1 count:(unsigned)arg2 ;
+(id)_storeInfo1;
+(void)_storeDeallocated;
+(BOOL)_usesTaggedPointers;
+(void)setObjectStoreIdentifier:(id)arg1 ;
+(id)managedObjectIDFromURIRepresentation:(id)arg1 ;
-(id)persistentStore;
-(BOOL)_isPersistentStoreAlive;
-(id)entityName;
-(oneway void)release;
-(id)entity;
-(id)_retainedURIString;
-(id)retain;
-(id)copy;
-(unsigned long long)retainCount;
-(id)_storeInfo1;
-(unsigned long long)hash;
-(id)initWithPK64:(long long)arg1 ;
-(long long)_referenceData64;
-(BOOL)isTemporaryID;
-(id)_storeIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

