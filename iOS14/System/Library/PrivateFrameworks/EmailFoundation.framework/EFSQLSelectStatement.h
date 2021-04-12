/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFSQLValueCollectionExpressable.h>
#import <libobjc.A.dylib/EFSQLSelectComponent.h>

@protocol EFSQLValueExpressable;
@class NSString, NSMutableArray, NSArray;

@interface EFSQLSelectStatement : NSObject <EFSQLValueCollectionExpressable, EFSQLSelectComponent> {

	BOOL _distinct;
	id<EFSQLValueExpressable> _where;
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
@property (nonatomic,retain) id<EFSQLValueExpressable> where;                  //@synthesize where=_where - In the implementation block
@property (assign,nonatomic) unsigned long long limit;                         //@synthesize limit=_limit - In the implementation block
@property (nonatomic,copy,readonly) NSString * queryString; 
@property (nonatomic,copy,readonly) NSString * ef_SQLExpression; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLimit:(unsigned long long)arg1 ;
-(id)ef_SQLIsolatedExpression;
-(NSString *)tableName;
-(NSMutableArray *)results;
-(id)initWithResult:(id)arg1 ;
-(void)groupByColumn:(id)arg1 ;
-(id)leftOuterJoin:(id)arg1 on:(id)arg2 ;
-(unsigned long long)limit;
-(id)leftOuterJoin:(id)arg1 sourceColumn:(id)arg2 targetColumn:(id)arg3 ;
-(void)groupBy:(id)arg1 ;
-(NSString *)queryString;
-(void)addResultColumn:(id)arg1 ;
-(void)setWhere:(id<EFSQLValueExpressable>)arg1 ;
-(void)addResultColumn:(id)arg1 fromTable:(id)arg2 ;
-(void)orderByColumn:(id)arg1 fromTable:(id)arg2 ascending:(BOOL)arg3 ;
-(NSString *)ef_SQLExpression;
-(id)initWithResult:(id)arg1 table:(id)arg2 ;
-(id)initWithResultColumn:(id)arg1 table:(id)arg2 ;
-(NSMutableArray *)joinExpressions;
-(NSMutableArray *)orderExpressions;
-(id)join:(id)arg1 alias:(id)arg2 sourceColumn:(id)arg3 targetColumn:(id)arg4 ;
-(void)setGroupExpressions:(NSArray *)arg1 ;
-(void)orderByColumn:(id)arg1 ascending:(BOOL)arg2 ;
-(void)orderBy:(id)arg1 ascending:(BOOL)arg2 ;
-(id)leftOuterJoin:(id)arg1 alias:(id)arg2 sourceColumn:(id)arg3 targetColumn:(id)arg4 ;
-(id)join:(id)arg1 alias:(id)arg2 on:(id)arg3 ;
-(void)groupByColumn:(id)arg1 fromTable:(id)arg2 ;
-(id<EFSQLValueExpressable>)where;
-(BOOL)distinct;
-(void)addResult:(id)arg1 alias:(id)arg2 ;
-(id)join:(id)arg1 on:(id)arg2 ;
-(id)initWithResultColumn:(id)arg1 ;
-(void)ef_renderSQLExpressionInto:(id)arg1 ;
-(id)leftOuterJoin:(id)arg1 alias:(id)arg2 on:(id)arg3 ;
-(void)setDistinct:(BOOL)arg1 ;
-(void)ef_renderSQLExpressionInto:(id)arg1 conjoiner:(id)arg2 ;
-(id)join:(id)arg1 sourceColumn:(id)arg2 targetColumn:(id)arg3 ;
-(NSArray *)groupExpressions;
@end

