/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLExpressionIntermediate.h>

@class NSExpression, NSSQLFetchIntermediate, NSSQLEntity, NSMutableString, NSString, NSSQLColumn, NSMutableArray;

@interface NSSQLSubqueryExpressionIntermediate : NSSQLExpressionIntermediate {

	NSExpression* _trailingKeypath;
	NSExpression* _variableExpression;
	NSSQLFetchIntermediate* _fetchIntermediate;
	NSSQLEntity* _selectFromEntity;
	NSMutableString* _selectFromCorrelationTarget;
	NSString* _selectEntityAlias;
	NSSQLEntity* _governingEntityForVariable;
	NSSQLColumn* _variableColumn;
	NSString* _variableAlias;
	NSSQLColumn* _targetColumn;
	NSString* _targetAlias;
	NSMutableArray* _keypathsToPromote;
	BOOL _useDistinct;
	BOOL _isCount;
	BOOL _hasTrailingFunction;
	BOOL _onlyTrailIsCount;
	BOOL _subqueryHasTruePredicate;

}
-(id)_generateSQLForVariableExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3 ;
-(void)_createSelectClauseInFetchWithContext:(id)arg1 ;
-(id)fetchIntermediateForKeypathExpression:(id)arg1 ;
-(void)_promoteJoinsForSubqueryScopedKeypath:(id)arg1 ;
-(void)_createCollectionJoinsForFetchInContext:(id)arg1 ;
-(void)_setVariableColumn:(id)arg1 ;
-(BOOL)keypathExpressionIsSafeLHSForIn:(id)arg1 ;
-(id)governingAliasForKeypathExpression:(id)arg1 ;
-(void)_promoteJoinsForSubqueryScopedKeypaths;
-(id)governingEntityForKeypathExpression:(id)arg1 ;
-(BOOL)canDoDirectJoinGivenPredicate:(id)arg1 ;
-(void)selectDistinct;
-(id)generateSQLStringInContext:(id)arg1 ;
-(BOOL)_isKeypathScopedToSubquery:(id)arg1 ;
-(id)initWithExpression:(id)arg1 trailingKeypath:(id)arg2 inScope:(id)arg3 ;
-(void)dealloc;
@end

