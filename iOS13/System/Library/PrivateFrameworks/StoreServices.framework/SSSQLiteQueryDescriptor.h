/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, SSSQLitePredicate;

@interface SSSQLiteQueryDescriptor : NSObject <NSCopying> {

	Class _entityClass;
	long long _limitCount;
	Class _memoryEntityClass;
	NSString* _orderingClause;
	NSArray* _orderingDirections;
	NSArray* _orderingProperties;
	SSSQLitePredicate* _predicate;
	BOOL _returnsDistinctEntities;

}

@property (assign,nonatomic) Class entityClass;                         //@synthesize entityClass=_entityClass - In the implementation block
@property (assign,nonatomic) Class memoryEntityClass;                   //@synthesize memoryEntityClass=_memoryEntityClass - In the implementation block
@property (assign,nonatomic) long long limitCount;                      //@synthesize limitCount=_limitCount - In the implementation block
@property (nonatomic,copy) NSString * orderingClause;                   //@synthesize orderingClause=_orderingClause - In the implementation block
@property (nonatomic,copy) NSArray * orderingDirections;                //@synthesize orderingDirections=_orderingDirections - In the implementation block
@property (nonatomic,copy) NSArray * orderingProperties;                //@synthesize orderingProperties=_orderingProperties - In the implementation block
@property (assign,nonatomic) BOOL returnsDistinctEntities;              //@synthesize returnsDistinctEntities=_returnsDistinctEntities - In the implementation block
@property (nonatomic,copy) SSSQLitePredicate * predicate;               //@synthesize predicate=_predicate - In the implementation block
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPredicate:(SSSQLitePredicate *)arg1 ;
-(SSSQLitePredicate *)predicate;
-(Class)entityClass;
-(NSArray *)orderingProperties;
-(void)setOrderingProperties:(NSArray *)arg1 ;
-(Class)memoryEntityClass;
-(long long)limitCount;
-(void)setOrderingDirections:(NSArray *)arg1 ;
-(void)setEntityClass:(Class)arg1 ;
-(void)setMemoryEntityClass:(Class)arg1 ;
-(void)setLimitCount:(long long)arg1 ;
-(NSString *)orderingClause;
-(void)setOrderingClause:(NSString *)arg1 ;
-(NSArray *)orderingDirections;
-(BOOL)returnsDistinctEntities;
-(void)setReturnsDistinctEntities:(BOOL)arg1 ;
-(id)_newSelectSQLWithProperties:(const id*)arg1 count:(unsigned long long)arg2 columns:(id)arg3 ;
@end

