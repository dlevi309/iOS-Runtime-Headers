/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, AMSSQLitePredicate;

@interface AMSSQLiteQueryDescriptor : NSObject <NSCopying> {

	Class _entityClass;
	long long _limitCount;
	Class _memoryEntityClass;
	NSString* _orderingClause;
	NSArray* _orderingDirections;
	NSArray* _orderingProperties;
	AMSSQLitePredicate* _predicate;
	BOOL _returnsDistinctEntities;

}

@property (assign,nonatomic) Class entityClass;                         //@synthesize entityClass=_entityClass - In the implementation block
@property (assign,nonatomic) Class memoryEntityClass;                   //@synthesize memoryEntityClass=_memoryEntityClass - In the implementation block
@property (assign,nonatomic) long long limitCount;                      //@synthesize limitCount=_limitCount - In the implementation block
@property (nonatomic,copy) NSString * orderingClause;                   //@synthesize orderingClause=_orderingClause - In the implementation block
@property (nonatomic,copy) NSArray * orderingDirections;                //@synthesize orderingDirections=_orderingDirections - In the implementation block
@property (nonatomic,copy) NSArray * orderingProperties;                //@synthesize orderingProperties=_orderingProperties - In the implementation block
@property (assign,nonatomic) BOOL returnsDistinctEntities;              //@synthesize returnsDistinctEntities=_returnsDistinctEntities - In the implementation block
@property (nonatomic,copy) AMSSQLitePredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
-(BOOL)returnsDistinctEntities;
-(void)setReturnsDistinctEntities:(BOOL)arg1 ;
-(AMSSQLitePredicate *)predicate;
-(NSArray *)orderingDirections;
-(void)setLimitCount:(long long)arg1 ;
-(void)setPredicate:(AMSSQLitePredicate *)arg1 ;
-(NSString *)orderingClause;
-(void)setOrderingDirections:(NSArray *)arg1 ;
-(void)setMemoryEntityClass:(Class)arg1 ;
-(void)setOrderingProperties:(NSArray *)arg1 ;
-(Class)entityClass;
-(NSArray *)orderingProperties;
-(id)_newSelectSQLWithProperties:(id)arg1 columns:(id)arg2 ;
-(void)setOrderingClause:(NSString *)arg1 ;
-(Class)memoryEntityClass;
-(long long)limitCount;
-(void)setEntityClass:(Class)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

