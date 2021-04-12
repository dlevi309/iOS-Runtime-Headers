/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HDProfile, NSMutableDictionary, NSMutableSet, HDSQLiteDatabase, NSNumber, NSSet;

@interface HDDataEntityDeletionContext : NSObject {

	HDProfile* _profile;
	NSMutableDictionary* _deleteStatementsByClassName;
	NSMutableDictionary* _deletedObjectProvenanceIDsByOriginalProvenanceID;
	NSMutableDictionary* _localSourceIDsByOriginalSourceID;
	NSMutableSet* _deletedObjectTypeSet;
	BOOL _insertDeletedObjects;
	BOOL _callWillDeleteFromDatabase;
	HDSQLiteDatabase* _database;
	/*^block*/id _recursiveDeleteAuthorizationBlock;
	NSNumber* _lastInsertedDeletedObjectPersistentID;
	unsigned long long _deletedObjectCount;

}

@property (nonatomic,readonly) HDSQLiteDatabase * database;                                   //@synthesize database=_database - In the implementation block
@property (nonatomic,copy) id recursiveDeleteAuthorizationBlock;                              //@synthesize recursiveDeleteAuthorizationBlock=_recursiveDeleteAuthorizationBlock - In the implementation block
@property (assign,nonatomic) BOOL insertDeletedObjects;                                       //@synthesize insertDeletedObjects=_insertDeletedObjects - In the implementation block
@property (assign,nonatomic) BOOL callWillDeleteFromDatabase;                                 //@synthesize callWillDeleteFromDatabase=_callWillDeleteFromDatabase - In the implementation block
@property (nonatomic,readonly) NSNumber * lastInsertedDeletedObjectPersistentID;              //@synthesize lastInsertedDeletedObjectPersistentID=_lastInsertedDeletedObjectPersistentID - In the implementation block
@property (nonatomic,copy,readonly) NSSet * deletedObjectTypeSet;                             //@synthesize deletedObjectTypeSet=_deletedObjectTypeSet - In the implementation block
@property (nonatomic,readonly) unsigned long long deletedObjectCount;                         //@synthesize deletedObjectCount=_deletedObjectCount - In the implementation block
-(void)finish;
-(HDSQLiteDatabase *)database;
-(id)initWithProfile:(id)arg1 database:(id)arg2 ;
-(BOOL)deleteObjectWithPersistentID:(long long)arg1 entityClass:(Class)arg2 error:(id*)arg3 ;
-(void)setInsertDeletedObjects:(BOOL)arg1 ;
-(void)setRecursiveDeleteAuthorizationBlock:(id)arg1 ;
-(BOOL)deleteObjectWithPersistentID:(long long)arg1 objectUUID:(id)arg2 entityClass:(Class)arg3 objectType:(id)arg4 provenanceIdentifier:(id)arg5 deletionDate:(id)arg6 error:(id*)arg7 ;
-(NSNumber *)lastInsertedDeletedObjectPersistentID;
-(unsigned long long)deletedObjectCount;
-(NSSet *)deletedObjectTypeSet;
-(void)setCallWillDeleteFromDatabase:(BOOL)arg1 ;
-(BOOL)_deleteAssociatedObjectsForPersistentID:(long long)arg1 entityClass:(Class)arg2 deletionDate:(id)arg3 error:(id*)arg4 ;
-(id)_provenanceIDForDeletedObjectWithOriginalProvenanceID:(id)arg1 error:(id*)arg2 ;
-(id)_localSourceIDForSourceID:(id)arg1 error:(id*)arg2 ;
-(id)recursiveDeleteAuthorizationBlock;
-(BOOL)insertDeletedObjects;
-(BOOL)callWillDeleteFromDatabase;
@end

