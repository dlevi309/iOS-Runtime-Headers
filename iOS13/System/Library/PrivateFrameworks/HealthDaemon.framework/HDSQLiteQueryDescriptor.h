/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, HDSQLitePredicate, NSString;

@interface HDSQLiteQueryDescriptor : NSObject <NSCopying> {

	BOOL _returnsDistinctEntities;
	Class _entityClass;
	long long _limitCount;
	NSArray* _orderingTerms;
	HDSQLitePredicate* _predicate;
	NSString* _groupBy;
	NSArray* _preferredEntityJoinOrder;

}

@property (assign,nonatomic) Class entityClass;                             //@synthesize entityClass=_entityClass - In the implementation block
@property (assign,nonatomic) long long limitCount;                          //@synthesize limitCount=_limitCount - In the implementation block
@property (nonatomic,copy) NSArray * orderingTerms;                         //@synthesize orderingTerms=_orderingTerms - In the implementation block
@property (assign,nonatomic) BOOL returnsDistinctEntities;                  //@synthesize returnsDistinctEntities=_returnsDistinctEntities - In the implementation block
@property (nonatomic,copy) HDSQLitePredicate * predicate;                   //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) NSString * groupBy;                              //@synthesize groupBy=_groupBy - In the implementation block
@property (nonatomic,copy) NSArray * preferredEntityJoinOrder;              //@synthesize preferredEntityJoinOrder=_preferredEntityJoinOrder - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPredicate:(HDSQLitePredicate *)arg1 ;
-(HDSQLitePredicate *)predicate;
-(Class)entityClass;
-(long long)limitCount;
-(void)setEntityClass:(Class)arg1 ;
-(void)setLimitCount:(long long)arg1 ;
-(BOOL)returnsDistinctEntities;
-(void)setReturnsDistinctEntities:(BOOL)arg1 ;
-(NSArray *)orderingTerms;
-(void)setOrderingTerms:(NSArray *)arg1 ;
-(void)setPreferredEntityJoinOrder:(NSArray *)arg1 ;
-(id)_sortedJoinClauses:(id)arg1 preferredOrder:(id)arg2 baseTables:(id)arg3 ;
-(id)_joinClauseForProperties:(id)arg1 ;
-(NSString *)groupBy;
-(id)_SQLForSelectWithProperties:(id)arg1 columns:(id)arg2 ;
-(id)_SQLForDeleteWithError:(id*)arg1 ;
-(/*^block*/id)_joinClauseComparatorWithPreferredEntityOrder:(id)arg1 ;
-(id)_SQLForSelectWithProperties:(id)arg1 ;
-(void)setGroupBy:(NSString *)arg1 ;
-(NSArray *)preferredEntityJoinOrder;
@end

