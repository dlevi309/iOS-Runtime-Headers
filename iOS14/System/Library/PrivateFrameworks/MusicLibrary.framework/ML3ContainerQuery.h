/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)hasEntities;
-(void)encodeWithCoder:(id)arg1 ;
-(id)valueForAggregateFunction:(id)arg1 onEntitiesForProperty:(id)arg2 ;
-(id)initWithEntityClass:(Class)arg1 container:(id)arg2 predicate:(id)arg3 orderingTerms:(id)arg4 ;
-(unsigned long long)countOfDistinctRowsForColumn:(id)arg1 ;
-(id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(BOOL)arg2 ;
-(BOOL)requiresSmartLimiting;
-(id)initWithCoder:(id)arg1 ;
-(id)selectPersistentIDsSQLAndPropertiesForResultSet:(id)arg1 ordered:(BOOL)arg2 ;
-(unsigned long long)countOfEntities;
-(NSArray *)limitedPersistentIDs;
-(ML3Container *)container;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)enumerationDatabaseResultForSQL:(id)arg1 onConnection:(id)arg2 withParameters:(id)arg3 ;
@end

