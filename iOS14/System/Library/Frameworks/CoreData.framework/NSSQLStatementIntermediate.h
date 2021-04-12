/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLIntermediate.h>

@class NSSQLEntity, NSString, NSSQLWhereIntermediate, NSSQLLimitIntermediate, NSSQLOrderIntermediate;

@interface NSSQLStatementIntermediate : NSSQLIntermediate {

	NSSQLEntity* _governingEntity;
	NSString* _governingAlias;
	NSString* _correlationToken;
	NSSQLWhereIntermediate* _whereClause;
	NSSQLLimitIntermediate* _limitClause;
	NSSQLOrderIntermediate* _orderIntermediate;

}
-(void)setGoverningEntity:(id)arg1 ;
-(id)governingEntity;
-(id)governingAlias;
-(id)whereIntermediate;
-(void)setOrderIntermediate:(id)arg1 ;
-(void)setLimitIntermediate:(id)arg1 ;
-(id)correlationToken;
-(id)limitIntermediate;
-(void)setGoverningAlias:(id)arg1 ;
-(BOOL)keypathExpressionIsSafeLHSForIn:(id)arg1 ;
-(id)governingAliasForKeypathExpression:(id)arg1 ;
-(id)governingEntityForKeypathExpression:(id)arg1 ;
-(id)orderIntermediate;
-(id)initWithEntity:(id)arg1 alias:(id)arg2 inScope:(id)arg3 ;
-(void)setCorrelationToken:(id)arg1 ;
-(void)dealloc;
-(void)setWhereIntermediate:(id)arg1 ;
@end

