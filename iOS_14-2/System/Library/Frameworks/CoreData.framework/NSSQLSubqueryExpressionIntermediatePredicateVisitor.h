/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSSQLIntermediate;

@interface NSSQLSubqueryExpressionIntermediatePredicateVisitor : NSObject {

	NSSQLIntermediate* _scope;
	BOOL _foundKeypath;

}
-(BOOL)checkPredicate:(id)arg1 ;
-(void)visitPredicate:(id)arg1 ;
-(void)visitPredicateExpression:(id)arg1 ;
-(id)initWithScope:(id)arg1 ;
-(void)dealloc;
@end

