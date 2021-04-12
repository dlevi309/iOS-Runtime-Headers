/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


#import <CoreData/CoreData-Structs.h>
@class NSSQLiteStatement, NSSQLiteAdapter, NSMutableString;

@interface _NSSQLGenerator : NSObject {

	NSSQLiteStatement* _statement;
	NSSQLiteAdapter* _adapter;
	NSMutableString* _sqlString;
	NSMutableString* _whereClause;
	NSMutableString* _selectList;

}
+(void)initialize;
-(void)dealloc;
-(id)sqlString;
-(void)appendSQL:(id)arg1 ;
-(void)prepareInsertStatementWithRow:(id)arg1 includeConstraints:(BOOL)arg2 ;
-(void)prepareInsertStatementWithRow:(id)arg1 includeConstraints:(BOOL)arg2 includeOnConflict:(BOOL)arg3 ;
-(void)_startSQL:(id)arg1 ;
-(void)appendWhereClause:(id)arg1 ;
-(void)buildWhereClauseForRow:(id)arg1 optLock:(long long)arg2 ;
-(void)appendWhereClauseToSQL;
-(id)initWithStatement:(id)arg1 forAdapter:(id)arg2 ;
-(void)prepareInsertStatementWithRow:(id)arg1 ;
-(void)prepareInsertStatementForRelationship:(id)arg1 ;
-(void)prepareMasterReorderStatementForRelationship:(id)arg1 ;
-(void)prepareMasterReorderStatementPart2ForRelationship:(id)arg1 ;
-(void)prepareReorderStatementForRelationship:(id)arg1 ;
-(void)prepareDeleteStatementForRelationship:(id)arg1 ;
-(void)prepareConstrainedValuesUpdateStatementWithRow:(id)arg1 ;
-(void)prepareUpdateStatementWithRow:(id)arg1 originalRow:(id)arg2 withMask:(CFBitVectorRef)arg3 ;
-(void)prepareDeleteStatementWithRow:(id)arg1 ;
@end

