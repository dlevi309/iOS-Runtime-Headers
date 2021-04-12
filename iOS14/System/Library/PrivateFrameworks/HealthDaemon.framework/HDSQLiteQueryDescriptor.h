/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, HDSQLitePredicate, NSString;

@interface HDSQLiteQueryDescriptor : NSObject <NSCopying> {

	BOOL _returnsDistinctEntities;
	BOOL _shouldExpandLastSQLStatement;
	Class _entityClass;
	long long _limitCount;
	NSArray* _orderingTerms;
	HDSQLitePredicate* _predicate;
	NSString* _groupBy;
	NSArray* _preferredEntityJoinOrder;

}

@property (assign,nonatomic) BOOL shouldExpandLastSQLStatement;              //@synthesize shouldExpandLastSQLStatement=_shouldExpandLastSQLStatement - In the implementation block
@property (assign,nonatomic) Class entityClass;                              //@synthesize entityClass=_entityClass - In the implementation block
@property (assign,nonatomic) long long limitCount;                           //@synthesize limitCount=_limitCount - In the implementation block
@property (nonatomic,copy) NSArray * orderingTerms;                          //@synthesize orderingTerms=_orderingTerms - In the implementation block
@property (assign,nonatomic) BOOL returnsDistinctEntities;                   //@synthesize returnsDistinctEntities=_returnsDistinctEntities - In the implementation block
@property (nonatomic,copy) HDSQLitePredicate * predicate;                    //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) NSString * groupBy;                               //@synthesize groupBy=_groupBy - In the implementation block
@property (nonatomic,copy) NSArray * preferredEntityJoinOrder;               //@synthesize preferredEntityJoinOrder=_preferredEntityJoinOrder - In the implementation block
-(NSArray *)orderingTerms;
-(NSString *)groupBy;
-(BOOL)returnsDistinctEntities;
-(void)setReturnsDistinctEntities:(BOOL)arg1 ;
-(HDSQLitePredicate *)predicate;
-(NSArray *)preferredEntityJoinOrder;
-(void)setLimitCount:(long long)arg1 ;
-(void)setPredicate:(HDSQLitePredicate *)arg1 ;
-(id)_SQLForSelectWithProperties:(id)arg1 ;
-(Class)entityClass;
-(id)_joinClauseForProperties:(id)arg1 ;
-(/*^block*/id)_joinClauseComparatorWithPreferredEntityOrder:(id)arg1 ;
-(void)setOrderingTerms:(NSArray *)arg1 ;
-(BOOL)shouldExpandLastSQLStatement;
-(void)setPreferredEntityJoinOrder:(NSArray *)arg1 ;
-(void)setGroupBy:(NSString *)arg1 ;
-(id)_SQLForSelectWithProperties:(id)arg1 columns:(id)arg2 ;
-(void)setShouldExpandLastSQLStatement:(BOOL)arg1 ;
-(long long)limitCount;
-(void)setEntityClass:(Class)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_SQLForDeleteWithError:(id*)arg1 ;
-(id)_sortedJoinClauses:(id)arg1 preferredOrder:(id)arg2 baseTables:(id)arg3 ;
@end

