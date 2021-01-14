/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSSQLEntity, NSArray;

@interface NSSQLIntermediate : NSObject {

	NSSQLIntermediate* _scope;

}

@property (nonatomic,readonly) NSSQLEntity * disambiguatingEntity; 
@property (nonatomic,readonly) NSArray * disambiguationKeypath; 
@property (nonatomic,readonly) BOOL disambiguationKeypathHasToMany; 
+(BOOL)isSimpleKeypath:(id)arg1 ;
+(BOOL)expressionIsBasicKeypath:(id)arg1 ;
-(id)scope;
-(id)_generateSQLForVariableExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3 ;
-(id)governingEntity;
-(BOOL)isSimpleKeypath:(id)arg1 ;
-(id)_generateSQLForConstantValue:(id)arg1 inContext:(id)arg2 ;
-(BOOL)isVariableBasedKeypathScopedBySubquery:(id)arg1 ;
-(BOOL)isIndexScoped;
-(BOOL)isWhereScoped;
-(BOOL)isHavingScoped;
-(BOOL)_functionExpressionIsSubqueryFollowedByKeypath:(id)arg1 ;
-(id)_generateSQLForSubqueryExpression:(id)arg1 trailingKeypath:(id)arg2 inContext:(id)arg3 ;
-(BOOL)isIndexExpressionScoped;
-(BOOL)expressionIsBasicKeypath:(id)arg1 ;
-(id)_entitySpecificationKeypath;
-(void)_setEntitySpecificationKeypath:(id)arg1 ;
-(void)promoteJoinsInKeypathsForExpression:(id)arg1 ;
-(void)_promoteJoinsForKeypathExpression:(id)arg1 ;
-(void)_promoteJoinsForFunctionExpression:(id)arg1 ;
-(BOOL)isSimpleNoIndexFunction:(id)arg1 ;
-(void)_promoteJoinsForAggregateExpression:(id)arg1 ;
-(void)_promoteJoinsForTernaryExpression:(id)arg1 ;
-(id)_generateSQLForConstantCollection:(id)arg1 reboundFrom:(id)arg2 inContext:(id)arg3 ;
-(BOOL)_canDoASubselectForExpression:(id)arg1 inContext:(id)arg2 ;
-(id)_generateSQLForFetchExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForFunctionExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3 ;
-(id)fetchIntermediateForKeypathExpression:(id)arg1 ;
-(id)_generateSQLForExpressionCollection:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForTernaryExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3 ;
-(void)_promoteJoinsForSubqueryScopedKeypath:(id)arg1 ;
-(id)governingAlias;
-(BOOL)isUpdateColumnsScoped;
-(id)_lastScopedItem;
-(BOOL)isTargetColumnsScoped;
-(void)setDisambiguatingEntity:(id)arg1 withKeypath:(id)arg2 hasToMany:(BOOL)arg3 ;
-(id)initWithScope:(id)arg1 ;
-(BOOL)isOrScoped;
-(id)fetchIntermediate;
-(NSSQLEntity *)disambiguatingEntity;
-(BOOL)keypathExpressionIsSafeLHSForIn:(id)arg1 ;
-(id)governingAliasForKeypathExpression:(id)arg1 ;
-(BOOL)isUpdateScoped;
-(void)_promoteJoinsForSubqueryScopedKeypaths;
-(id)governingEntityForKeypathExpression:(id)arg1 ;
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)_generateSQLForKeyPathExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3 ;
-(BOOL)isFunctionScoped;
-(BOOL)disambiguationKeypathHasToMany;
-(NSArray *)disambiguationKeypath;
@end

