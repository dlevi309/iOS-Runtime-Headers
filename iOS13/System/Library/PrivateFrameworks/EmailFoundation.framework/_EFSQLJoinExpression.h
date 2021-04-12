/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFSQLExpressable.h>
#import <libobjc.A.dylib/EFSQLSelectComponent.h>

@protocol EFSQLExpressable;
@class EFSQLSelectStatement, NSString;

@interface _EFSQLJoinExpression : NSObject <EFSQLExpressable, EFSQLSelectComponent> {

	BOOL _isLeftOuter;
	EFSQLSelectStatement* _select;
	NSString* _tableName;
	NSString* _tableAlias;
	id<EFSQLExpressable> _joinConstraint;

}

@property (nonatomic,__weak,readonly) EFSQLSelectStatement * select;              //@synthesize select=_select - In the implementation block
@property (nonatomic,copy,readonly) NSString * tableName;                         //@synthesize tableName=_tableName - In the implementation block
@property (nonatomic,copy,readonly) NSString * tableAlias;                        //@synthesize tableAlias=_tableAlias - In the implementation block
@property (nonatomic,readonly) id<EFSQLExpressable> joinConstraint;               //@synthesize joinConstraint=_joinConstraint - In the implementation block
@property (nonatomic,readonly) BOOL isLeftOuter;                                  //@synthesize isLeftOuter=_isLeftOuter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * ef_SQLExpression; 
-(EFSQLSelectStatement *)select;
-(NSString *)tableName;
-(NSString *)ef_SQLExpression;
-(void)addResultColumn:(id)arg1 ;
-(NSString *)tableAlias;
-(id)join:(id)arg1 alias:(id)arg2 on:(id)arg3 ;
-(id)leftOuterJoin:(id)arg1 alias:(id)arg2 on:(id)arg3 ;
-(id)initWithSelect:(id)arg1 tableName:(id)arg2 tableAlias:(id)arg3 joinConstraint:(id)arg4 isLeftOuter:(BOOL)arg5 ;
-(id)join:(id)arg1 alias:(id)arg2 sourceColumn:(id)arg3 targetColumn:(id)arg4 ;
-(id)leftOuterJoin:(id)arg1 alias:(id)arg2 sourceColumn:(id)arg3 targetColumn:(id)arg4 ;
-(id)join:(id)arg1 on:(id)arg2 ;
-(id)leftOuterJoin:(id)arg1 on:(id)arg2 ;
-(id)join:(id)arg1 sourceColumn:(id)arg2 targetColumn:(id)arg3 ;
-(id)leftOuterJoin:(id)arg1 sourceColumn:(id)arg2 targetColumn:(id)arg3 ;
-(void)groupByColumn:(id)arg1 ;
-(void)orderByColumn:(id)arg1 ascending:(BOOL)arg2 ;
-(BOOL)isLeftOuter;
-(id<EFSQLExpressable>)joinConstraint;
@end

