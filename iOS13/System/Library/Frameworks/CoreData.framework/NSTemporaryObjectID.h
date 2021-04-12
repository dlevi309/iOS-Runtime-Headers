/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)alloc;
+(id)retain;
+(void)release;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(BOOL)accessInstanceVariablesDirectly;
+(long long)version;
+(id)_retain_1;
+(void)_release_1;
+(id)initWithEntity:(id)arg1 andUUIDString:(id)arg2 ;
+(void)setObjectStoreIdentifier:(id)arg1 ;
+(void)_storeDeallocated;
+(id)initWithEntity:(id)arg1 ;
+(unsigned)allocateBatch:(id*)arg1 forEntity:(id)arg2 count:(unsigned)arg3 ;
+(Class)classForStore:(id)arg1 ;
-(unsigned long long)retainCount;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)hash;
-(void)finalize;
-(id)entity;
-(id)URIRepresentation;
-(id)persistentStore;
-(id)_storeIdentifier;
-(BOOL)isTemporaryID;
-(id)_referenceData;
-(id)initWithEntity:(id)arg1 andUUIDString:(id)arg2 ;
-(void)_setPersistentStore:(id)arg1 ;
-(id)_retainedURIString;
-(BOOL)_isPersistentStoreAlive;
-(id)initWithEntity:(id)arg1 ;
-(int)_temporaryIDCounter;
@end

