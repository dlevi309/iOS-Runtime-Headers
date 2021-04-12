/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ML3MusicLibrary, ML3Predicate, NSArray, NSString, ML3AggregateQuery;

@interface ML3Query : NSObject <NSSecureCoding, NSCopying> {

	ML3MusicLibrary* _library;
	Class _entityClass;
	ML3Predicate* _predicate;
	NSArray* _orderingTerms;
	NSString* _propertyToCount;
	ML3AggregateQuery* _nonDirectAggregateQuery;
	BOOL _usingSections;
	long long _options;
	BOOL _filtersOnDynamicProperties;
	unsigned long long _limit;

}

@property (nonatomic,readonly) NSString * selectPersistentIDsSQL; 
@property (nonatomic,readonly) NSString * selectCountSQL; 
@property (nonatomic,readonly) NSString * persistentIDProperty; 
@property (nonatomic,readonly) ML3MusicLibrary * library;                                          //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) Class entityClass;                                                  //@synthesize entityClass=_entityClass - In the implementation block
@property (nonatomic,readonly) ML3Predicate * predicate;                                           //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,readonly) ML3Predicate * predicateIncludingSystemwidePredicates; 
@property (nonatomic,readonly) NSArray * orderingTerms;                                            //@synthesize orderingTerms=_orderingTerms - In the implementation block
@property (nonatomic,readonly) NSString * propertyToCount;                                         //@synthesize propertyToCount=_propertyToCount - In the implementation block
@property (nonatomic,readonly) BOOL hasEntities; 
@property (nonatomic,readonly) long long anyEntityPersistentID; 
@property (nonatomic,readonly) unsigned long long countOfEntities; 
@property (nonatomic,readonly) ML3AggregateQuery * nonDirectAggregateQuery;                        //@synthesize nonDirectAggregateQuery=_nonDirectAggregateQuery - In the implementation block
@property (nonatomic,readonly) NSString * sectionProperty; 
@property (nonatomic,readonly) BOOL usingSections;                                                 //@synthesize usingSections=_usingSections - In the implementation block
@property (assign,nonatomic) unsigned long long limit;                                             //@synthesize limit=_limit - In the implementation block
@property (assign,nonatomic) BOOL ignoreSystemFilterPredicates; 
@property (assign,nonatomic) BOOL ignoreRestrictionsPredicates; 
@property (nonatomic,readonly) long long options;                                                  //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) BOOL filtersOnDynamicProperties;                                    //@synthesize filtersOnDynamicProperties=_filtersOnDynamicProperties - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)orderingTerms;
-(ML3MusicLibrary *)library;
-(BOOL)hasEntities;
-(void)setLimit:(unsigned long long)arg1 ;
-(void)enumeratePersistentIDsAndProperties:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2 directionality:(id)arg3 ;
-(unsigned long long)limit;
-(ML3Predicate *)predicate;
-(void)enumerateSectionsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)ignoreSystemFilterPredicates;
-(id)sectionsParameters;
-(ML3AggregateQuery *)nonDirectAggregateQuery;
-(id)sections;
-(NSString *)persistentIDProperty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithLibrary:(id)arg1 entityClass:(Class)arg2 predicate:(id)arg3 orderingTerms:(id)arg4 usingSections:(BOOL)arg5 nonDirectAggregateQuery:(id)arg6 propertyToCount:(id)arg7 options:(long long)arg8 ;
-(id)reverseQuery;
-(long long)options;
-(id)valueForAggregateFunction:(id)arg1 onEntitiesForProperty:(id)arg2 ;
-(void)enumeratePersistentIDsAndProperties:(id)arg1 ordered:(BOOL)arg2 cancelBlock:(/*^block*/id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(Class)entityClass;
-(void)enumeratePersistentIDsAndSectionsWithProperty:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)countOfDistinctRowsForColumn:(id)arg1 ;
-(id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(BOOL)arg2 ;
-(NSString *)selectPersistentIDsSQL;
-(id)countStatementParameters;
-(BOOL)ignoreRestrictionsPredicates;
-(NSString *)propertyToCount;
-(id)description;
-(id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2 limit:(unsigned long long)arg3 ;
-(id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingTerms:(id)arg3 ;
-(BOOL)sectionsPersistentIDColumnIsDistinct;
-(id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 ;
-(id)lowerBoundParametersForOrderingTerms:(id)arg1 lowerBoundPersistentID:(long long)arg2 ;
-(BOOL)usingSections;
-(long long)anyEntityPersistentID;
-(ML3Predicate *)predicateIncludingSystemwidePredicates;
-(NSString *)selectCountSQL;
-(id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(BOOL)arg2 distinct:(BOOL)arg3 ;
-(void)enumeratePersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumeratePersistentIDsAndProperties:(id)arg1 ordered:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)loadNamesFromLibrary:(id)arg1 onConnection:(id)arg2 forPredicate:(id)arg3 loadAllNames:(BOOL)arg4 cancelHandler:(/*^block*/id)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hasRowForColumn:(id)arg1 ;
-(id)selectSectionsSQL;
-(BOOL)deleteAllEntitiesFromLibraryWithDeletionType:(int)arg1 ;
-(unsigned long long)countOfEntities;
-(id)selectUnorderedPersistentIDsSQL;
-(void)setIgnoreRestrictionsPredicates:(BOOL)arg1 ;
-(id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2 ;
-(id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 distinct:(BOOL)arg3 ;
-(id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingTerms:(id)arg3 directionality:(id)arg4 usingLowerBound:(BOOL)arg5 distinct:(BOOL)arg6 limit:(unsigned long long)arg7 ;
-(id)selectSQLWithColumns:(id)arg1 orderingTerms:(id)arg2 distinct:(BOOL)arg3 ;
-(NSString *)sectionProperty;
-(id)persistentIDParameters;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)filtersOnDynamicProperties;
-(BOOL)deleteAllEntitiesFromLibrary;
-(void)setIgnoreSystemFilterPredicates:(BOOL)arg1 ;
-(id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingTerms:(id)arg3 limit:(unsigned long long)arg4 ;
-(void)enumeratePersistentIDsAndProperties:(id)arg1 ordered:(BOOL)arg2 sectionProperty:(id)arg3 cancelBlock:(/*^block*/id)arg4 usingBlock:(/*^block*/id)arg5 ;
-(id)nameOrderPropertyForProperty:(id)arg1 ;
-(BOOL)deleteAllEntitiesFromLibraryWithDeletionType:(int)arg1 usingConnection:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingTerms:(id)arg3 directionality:(id)arg4 usingLowerBound:(BOOL)arg5 ;
-(id)enumerationDatabaseResultForSQL:(id)arg1 onConnection:(id)arg2 withParameters:(id)arg3 ;
@end

