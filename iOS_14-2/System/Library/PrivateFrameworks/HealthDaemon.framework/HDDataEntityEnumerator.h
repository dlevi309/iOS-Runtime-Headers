/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSQLiteQueryDescriptor.h>

@class HDProfile, NSMutableDictionary, NSSet, NSNumber, HDSQLitePredicate, NSArray, HDDatabaseTransactionContext, NSString, _HKFilter;

@interface HDDataEntityEnumerator : HDSQLiteQueryDescriptor {

	HDProfile* _profile;
	NSMutableDictionary* _encodingOptions;
	BOOL _useLeftJoin;
	BOOL _ignoreEntityClassAdditionalPredicateForEnumeration;
	BOOL _improveJoinOrderingForStartDateIndexSelection;
	NSSet* _objectTypes;
	NSSet* _restrictedSourceEntities;
	/*^block*/id _authorizationFilter;
	NSNumber* _anchor;
	NSNumber* _deletedObjectsAnchor;
	HDSQLitePredicate* _deletedObjectsPredicate;
	NSArray* _sortDescriptors;
	HDDatabaseTransactionContext* _databaseTransactionContext;
	NSString* _lastSQL;
	_HKFilter* _filter;

}

@property (nonatomic,retain) _HKFilter * filter;                                                   //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) NSSet * objectTypes;                                                //@synthesize objectTypes=_objectTypes - In the implementation block
@property (nonatomic,retain) NSSet * restrictedSourceEntities;                                     //@synthesize restrictedSourceEntities=_restrictedSourceEntities - In the implementation block
@property (nonatomic,copy) id authorizationFilter;                                                 //@synthesize authorizationFilter=_authorizationFilter - In the implementation block
@property (nonatomic,retain) NSNumber * anchor;                                                    //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,retain) NSNumber * deletedObjectsAnchor;                                      //@synthesize deletedObjectsAnchor=_deletedObjectsAnchor - In the implementation block
@property (nonatomic,copy) HDSQLitePredicate * deletedObjectsPredicate;                            //@synthesize deletedObjectsPredicate=_deletedObjectsPredicate - In the implementation block
@property (nonatomic,copy) NSArray * sortDescriptors;                                              //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (nonatomic,copy) HDDatabaseTransactionContext * databaseTransactionContext;              //@synthesize databaseTransactionContext=_databaseTransactionContext - In the implementation block
@property (assign,nonatomic) BOOL ignoreEntityClassAdditionalPredicateForEnumeration;              //@synthesize ignoreEntityClassAdditionalPredicateForEnumeration=_ignoreEntityClassAdditionalPredicateForEnumeration - In the implementation block
@property (assign,nonatomic) BOOL improveJoinOrderingForStartDateIndexSelection;                   //@synthesize improveJoinOrderingForStartDateIndexSelection=_improveJoinOrderingForStartDateIndexSelection - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastSQL;                                            //@synthesize lastSQL=_lastSQL - In the implementation block
-(HDDatabaseTransactionContext *)databaseTransactionContext;
-(HDSQLitePredicate *)deletedObjectsPredicate;
-(id)_initWithEntityClass:(Class)arg1 profile:(id)arg2 ;
-(void)setFilter:(_HKFilter *)arg1 ;
-(_HKFilter *)filter;
-(BOOL)enumerateIncludingDeletedObjects:(BOOL)arg1 error:(id*)arg2 handler:(/*^block*/id)arg3 ;
-(void)addEncodingOptionsFromDictionary:(id)arg1 ;
-(BOOL)_setOrderingTermsOnDescriptor:(id)arg1 error:(id*)arg2 ;
-(NSSet *)objectTypes;
-(void)setRestrictedSourceEntities:(NSSet *)arg1 ;
-(NSArray *)sortDescriptors;
-(id)_joinClauseForProperties:(id)arg1 ;
-(BOOL)_enumerateObjectsWithDatabaseTransaction:(id)arg1 error:(id*)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)_prepareDeletedObjectsAndSamplesDescriptor:(id)arg1 error:(id*)arg2 ;
-(NSString *)lastSQL;
-(void)setEncodingOption:(id)arg1 forKey:(id)arg2 ;
-(void)setIgnoreEntityClassAdditionalPredicateForEnumeration:(BOOL)arg1 ;
-(void)setImproveJoinOrderingForStartDateIndexSelection:(BOOL)arg1 ;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(void)setDeletedObjectsAnchor:(NSNumber *)arg1 ;
-(void)setAuthorizationFilter:(id)arg1 ;
-(id)_initWithObjectType:(id)arg1 entityClass:(Class)arg2 profile:(id)arg3 ;
-(id)authorizationFilter;
-(BOOL)_prepareDescriptor:(id)arg1 error:(id*)arg2 ;
-(void)setDeletedObjectsPredicate:(HDSQLitePredicate *)arg1 ;
-(BOOL)enumerateWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(NSNumber *)deletedObjectsAnchor;
-(void)setDatabaseTransactionContext:(HDDatabaseTransactionContext *)arg1 ;
-(id)_initWithObjectTypes:(id)arg1 entityClass:(Class)arg2 profile:(id)arg3 ;
-(NSNumber *)anchor;
-(NSSet *)restrictedSourceEntities;
-(id)encodingOptionForKey:(id)arg1 ;
-(BOOL)improveJoinOrderingForStartDateIndexSelection;
-(void)setAnchor:(NSNumber *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)ignoreEntityClassAdditionalPredicateForEnumeration;
@end

