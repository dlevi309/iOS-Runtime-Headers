/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@class EFSQLInsertStatement, EFSQLUpdateStatement, NSArray, NSString;

@interface EFSQLUpsertStatement : NSObject {

	EFSQLInsertStatement* _insertStatement;
	EFSQLUpdateStatement* _updateStatement;
	NSArray* _conflictTarget;

}

@property (nonatomic,readonly) EFSQLInsertStatement * insertStatement;                 //@synthesize insertStatement=_insertStatement - In the implementation block
@property (nonatomic,readonly) EFSQLUpdateStatement * updateStatement;                 //@synthesize updateStatement=_updateStatement - In the implementation block
@property (nonatomic,readonly) NSArray * conflictTarget;                               //@synthesize conflictTarget=_conflictTarget - In the implementation block
@property (nonatomic,readonly) id<EFSQLInsertStatementValue> insertValue; 
@property (nonatomic,readonly) id<EFSQLUpdateStatementValue> updateValue; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,copy,readonly) NSString * queryString; 
@property (nonatomic,retain) id<EFSQLExpressable> whereClause; 
-(BOOL)isEmpty;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(EFSQLInsertStatement *)insertStatement;
-(EFSQLUpdateStatement *)updateStatement;
-(NSString *)queryString;
-(void)setWhereClause:(id<EFSQLExpressable>)arg1 ;
-(id<EFSQLExpressable>)whereClause;
-(void)enumerateBindingNamesAndValuesUsingBlock:(/*^block*/id)arg1 ;
-(NSArray *)conflictTarget;
-(id)excludedColumnExpressionForColumnName:(id)arg1 ;
-(id)initWithTable:(id)arg1 conflictTarget:(id)arg2 ;
-(id<EFSQLInsertStatementValue>)insertValue;
-(id<EFSQLUpdateStatementValue>)updateValue;
@end

