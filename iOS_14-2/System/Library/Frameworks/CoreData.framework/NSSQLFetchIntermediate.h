/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLStatementIntermediate.h>

@class NSSQLSelectIntermediate, NSSQLGroupByIntermediate, NSSQLHavingIntermediate, NSSQLOffsetIntermediate, NSMutableArray, NSMutableDictionary;

@interface NSSQLFetchIntermediate : NSSQLStatementIntermediate {

	NSSQLSelectIntermediate* _selectClause;
	NSSQLGroupByIntermediate* _groupByClause;
	NSSQLHavingIntermediate* _havingClause;
	NSSQLOffsetIntermediate* _offsetClause;
	NSMutableArray* _groupByKeypaths;
	BOOL _isDictionaryCountFetch;
	NSMutableArray* _joinIntermediates;
	NSMutableDictionary* _joinKeypaths;

}
-(id)havingIntermediate;
-(void)addJoinIntermediate:(id)arg1 atKeypathWithComponents:(id)arg2 ;
-(BOOL)isDictionaryCountFetch;
-(void)promoteToOuterJoinsAlongKeypathWithComponents:(id)arg1 ;
-(id)fetchIntermediateForKeypathExpression:(id)arg1 ;
-(void)setDictionaryCountFetch:(BOOL)arg1 ;
-(void)setOffsetIntermediate:(id)arg1 ;
-(void)setGroupByIntermediate:(id)arg1 ;
-(id)selectIntermediate;
-(id)joinIntermediates;
-(void)addGroupByKeypath:(id)arg1 ;
-(id)groupByIntermediate;
-(void)promoteToOuterJoinAtKeypathWithComponents:(id)arg1 ;
-(void)setHavingIntermediate:(id)arg1 ;
-(id)initWithScope:(id)arg1 ;
-(void)setSelectIntermediate:(id)arg1 ;
-(id)fetchIntermediate;
-(BOOL)groupByClauseContainsKeypath:(id)arg1 ;
-(id)_generateJoinSQLStringInContext:(id)arg1 ;
-(id)finalJoinForKeypathWithComponents:(id)arg1 ;
-(void)selectDistinct;
-(id)generateSQLStringInContext:(id)arg1 ;
-(BOOL)isFunctionScoped;
-(void)dealloc;
@end

