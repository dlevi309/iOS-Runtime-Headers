/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/ML3Query.h>

@class ML3Predicate, ML3Container, NSArray;

@interface ML3ContainerQuery : ML3Query {

	ML3Predicate* _containerPredicate;
	ML3Container* _container;
	NSArray* _limitedPersistentIDs;

}

@property (nonatomic,readonly) NSArray * limitedPersistentIDs;              //@synthesize limitedPersistentIDs=_limitedPersistentIDs - In the implementation block
@property (nonatomic,readonly) ML3Container * container;                    //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) BOOL requiresSmartLimiting; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(ML3Container *)container;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForAggregateFunction:(id)arg1 onEntitiesForProperty:(id)arg2 ;
-(unsigned long long)countOfEntities;
-(BOOL)hasEntities;
-(unsigned long long)countOfDistinctRowsForColumn:(id)arg1 ;
-(id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(BOOL)arg2 ;
-(id)enumerationDatabaseResultForSQL:(id)arg1 onConnection:(id)arg2 withParameters:(id)arg3 ;
-(BOOL)requiresSmartLimiting;
-(id)initWithEntityClass:(Class)arg1 container:(id)arg2 predicate:(id)arg3 orderingTerms:(id)arg4 ;
-(id)selectPersistentIDsSQLAndPropertiesForResultSet:(id)arg1 ordered:(BOOL)arg2 ;
-(NSArray *)limitedPersistentIDs;
@end

