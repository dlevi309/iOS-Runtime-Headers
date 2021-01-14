/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSManagedObjectID.h>

@class NSEntityDescription;

@interface NSTemporaryObjectID : NSManagedObjectID {

	int _cd_rc;
	int _counter;
	NSEntityDescription* _entity;

}
+(id)initWithEntity:(id)arg1 ;
+(id)alloc;
+(void)initialize;
+(void)release;
+(id)initWithEntity:(id)arg1 andUUIDString:(id)arg2 ;
+(id)retain;
+(void)_release_1;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)_retain_1;
+(void)_storeDeallocated;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(BOOL)_usesTaggedPointers;
+(Class)classForStore:(id)arg1 ;
+(void)setObjectStoreIdentifier:(id)arg1 ;
+(BOOL)accessInstanceVariablesDirectly;
+(long long)version;
+(unsigned)allocateBatch:(id*)arg1 forEntity:(id)arg2 count:(unsigned)arg3 ;
-(id)persistentStore;
-(id)initWithEntity:(id)arg1 ;
-(BOOL)_isPersistentStoreAlive;
-(oneway void)release;
-(id)entity;
-(id)URIRepresentation;
-(void)finalize;
-(id)initWithEntity:(id)arg1 andUUIDString:(id)arg2 ;
-(id)_retainedURIString;
-(id)retain;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(id)_referenceData;
-(void)_setPersistentStore:(id)arg1 ;
-(int)_temporaryIDCounter;
-(BOOL)isTemporaryID;
-(id)_storeIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

