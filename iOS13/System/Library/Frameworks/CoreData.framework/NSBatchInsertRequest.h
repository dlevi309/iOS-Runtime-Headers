/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (copy) id insertDictionaryHandler; 
@property (copy) id insertManagedObjectHandler; 
@property (copy,readonly) NSString * entityName; 
@property (readonly) NSEntityDescription * entity; 
@property (copy) NSArray * objectsToInsert;                     //@synthesize objectsToInsert=_objectsToInsert - In the implementation block
@property (assign) unsigned long long resultType; 
+(id)decodeFromXPCArchive:(id)arg1 withContext:(id)arg2 ;
+(id)stringForResultType:(unsigned long long)arg1 ;
+(id)batchInsertRequestWithEntityName:(id)arg1 objects:(id)arg2 ;
+(id)shortStringForResultType:(unsigned long long)arg1 ;
+(id)batchInsertRequestWithEntityName:(id)arg1 dictionaryHandler:(/*^block*/id)arg2 ;
+(id)batchInsertRequestWithEntityName:(id)arg1 managedObjectHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(unsigned long long)resultType;
-(void)setResultType:(unsigned long long)arg1 ;
-(NSString *)entityName;
-(NSEntityDescription *)entity;
-(unsigned long long)requestType;
-(id)encodeForXPC;
-(NSArray *)objectsToInsert;
-(BOOL)_secureOperation;
-(id)initWithEntityName:(id)arg1 objects:(id)arg2 ;
-(void)_setSecureOperation:(BOOL)arg1 ;
-(void)_resolveEntityWithSQLCore:(id)arg1 ;
-(void)_resolveEntityWithContext:(id)arg1 ;
-(id)initWithEntity:(id)arg1 objects:(id)arg2 ;
-(void)setObjectsToInsert:(NSArray *)arg1 ;
-(id)initWithEntityName:(id)arg1 dictionaryHandler:(/*^block*/id)arg2 ;
-(id)initWithEntityName:(id)arg1 managedObjectHandler:(/*^block*/id)arg2 ;
-(id)insertDictionaryHandler;
-(void)setInsertDictionaryHandler:(id)arg1 ;
-(id)insertManagedObjectHandler;
-(void)setInsertManagedObjectHandler:(id)arg1 ;
-(id)initWithEntity:(id)arg1 dictionaryHandler:(/*^block*/id)arg2 ;
-(id)initWithEntity:(id)arg1 managedObjectHandler:(/*^block*/id)arg2 ;
@end

