/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFSQLExpressable.h>
#import <libobjc.A.dylib/EFSQLSelectComponent.h>

@protocol EFSQLExpressable;
@class NSString, NSMutableArray, NSArray;

@interface EFSQLSelectStatement : NSObject <EFSQLExpressable, EFSQLSelectComponent> {

	BOOL _distinct;
	id<EFSQLExpressable> _where;
	unsigned long long _limit;
	NSString* _tableName;
	NSMutableArray* _results;
	NSMutableArray* _joinExpressions;
	NSArray* _groupExpressions;
	NSMutableArray* _orderExpressions;

}

@property (nonatomic,copy,readonly) NSString * tableName;                      //@synthesize tableName=_tableName - In the implementation block
@property (nonatomic,readonly) NSMutableArray * results;                       //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) NSMutableArray * joinExpressions;               //@synthesize joinExpressions=_joinExpressions - In the implementation block
@property (nonatomic,retain) NSArray * groupExpressions;                       //@synthesize groupExpressions=_groupExpressions - In the implementation block
@property (nonatomic,readonly) NSMutableArray * orderExpressions;              //@synthesize orderExpressions=_orderExpressions - In the implementation block
@property (assign,nonatomic) BOOL distinct;                                    //@synthesize distinct=_distinct - In the implementation block
@property (nonatomic,retain) id<EFSQLExpressable> where;                       //@synthesize where=_where - In the implementation block
@property (assign,nonatomic) unsigned long long limit;                         //@synthesize limit=_limit - In the implementation block
@property (nonatomic,copy,readonly) NSString * queryString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * ef_SQLExpression; 
-(NSMutableArray *)results;
-(unsigned long long)limit;
-(void)setLimit:(unsigned long long)arg1 ;
-(id)initWithResult:(id)arg1 ;
-(NSString *)tableName;
-(NSString *)queryString;
-(BOOL)distinct;
-(NSString *)ef_SQLExpression;
-(id)initWithResult:(id)arg1 table:(id)arg2 ;
-(void)setWhere:(id<EFSQLExpressable>)arg1 ;
-(id)initWithResultColumn:(id)arg1 table:(id)arg2 ;
-(void)addResultColumn:(id)arg1 ;
-(id<EFSQLExpressable>)where;
-(void)addResultColumn:(id)arg1 fromTable:(id)arg2 ;
-(void)addResult:(id)arg1 alias:(id)arg2 ;
-(id)join:(id)arg1 alias:(id)arg2 on:(id)arg3 ;
-(id)leftOuterJoin:(id)arg1 alias:(id)arg2 on:(id)arg3 ;
-(NSMutableArray *)joinExpressions;
-(id)join:(id)arg1 alias:(id)arg2 sourceColumn:(id)arg3 targetColumn:(id)arg4 ;
-(id)leftOuterJoin:(id)arg1 alias:(id)arg2 sourceColumn:(id)arg3 targetColumn:(id)arg4 ;
-(void)setGroupExpressions:(NSArray *)arg1 ;
-(void)groupByColumn:(id)arg1 fromTable:(id)arg2 ;
-(NSMutableArray *)orderExpressions;
-(void)orderByColumn:(id)arg1 fromTable:(id)arg2 ascending:(BOOL)arg3 ;
-(void)orderBy:(id)arg1 ascending:(BOOL)arg2 ;
-(NSArray *)groupExpressions;
-(id)join:(id)arg1 on:(id)arg2 ;
-(id)leftOuterJoin:(id)arg1 on:(id)arg2 ;
-(id)join:(id)arg1 sourceColumn:(id)arg2 targetColumn:(id)arg3 ;
-(id)leftOuterJoin:(id)arg1 sourceColumn:(id)arg2 targetColumn:(id)arg3 ;
-(void)groupByColumn:(id)arg1 ;
-(void)orderByColumn:(id)arg1 ascending:(BOOL)arg2 ;
-(id)initWithResultColumn:(id)arg1 ;
-(void)groupBy:(id)arg1 ;
-(void)setDistinct:(BOOL)arg1 ;
@end

