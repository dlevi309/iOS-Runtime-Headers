/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPersistentStoreRequest.h>

@class NSArray, NSString, NSEntityDescription;

@interface NSBatchInsertRequest : NSPersistentStoreRequest {

	id _entity;
	NSArray* _objectsToInsert;
	/*^block*/id _insertDictionaryHandler;
	/*^block*/id _insertManagedObjectHandler;
	struct {
		unsigned resultType : 2;
		unsigned entityIsName : 1;
		unsigned secureOperation : 1;
		unsigned _RESERVED : 28;
	}  _flags;

}

@property (copy,readonly) NSString * entityName; 
@property (readonly) NSEntityDescription * entity; 
@property (copy) NSArray * objectsToInsert;                     //@synthesize objectsToInsert=_objectsToInsert - In the implementation block
@property (copy) id dictionaryHandler; 
@property (copy) id managedObjectHandler; 
@property (assign) unsigned long long resultType; 
+(id)decodeFromXPCArchive:(id)arg1 withContext:(id)arg2 ;
+(id)stringForResultType:(unsigned long long)arg1 ;
+(id)batchInsertRequestWithEntityName:(id)arg1 objects:(id)arg2 ;
+(id)batchInsertRequestWithEntityName:(id)arg1 dictionaryHandler:(/*^block*/id)arg2 ;
+(id)batchInsertRequestWithEntityName:(id)arg1 managedObjectHandler:(/*^block*/id)arg2 ;
+(id)shortStringForResultType:(unsigned long long)arg1 ;
-(id)encodeForXPC;
-(void)setResultType:(unsigned long long)arg1 ;
-(NSString *)entityName;
-(void)_resolveEntityWithContext:(id)arg1 ;
-(NSEntityDescription *)entity;
-(BOOL)_secureOperation;
-(id)init;
-(unsigned long long)requestType;
-(id)managedObjectHandler;
-(unsigned long long)resultType;
-(id)description;
-(void)setManagedObjectHandler:(id)arg1 ;
-(NSArray *)objectsToInsert;
-(id)initWithEntityName:(id)arg1 objects:(id)arg2 ;
-(void)_resolveEntityWithSQLCore:(id)arg1 ;
-(void)_setSecureOperation:(BOOL)arg1 ;
-(id)initWithEntityName:(id)arg1 dictionaryHandler:(/*^block*/id)arg2 ;
-(id)initWithEntityName:(id)arg1 managedObjectHandler:(/*^block*/id)arg2 ;
-(id)initWithEntity:(id)arg1 objects:(id)arg2 ;
-(id)initWithEntity:(id)arg1 managedObjectHandler:(/*^block*/id)arg2 ;
-(id)initWithEntity:(id)arg1 dictionaryHandler:(/*^block*/id)arg2 ;
-(id)dictionaryHandler;
-(void)setDictionaryHandler:(id)arg1 ;
-(void)setObjectsToInsert:(NSArray *)arg1 ;
-(void)dealloc;
@end

