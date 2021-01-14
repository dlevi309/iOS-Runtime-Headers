/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@class EFSQLInsertStatement, EFSQLUpdateStatement, NSArray, NSString;

@interface EFSQLUpsertStatement : NSObject {

	EFSQLInsertStatement* _insertStatement;
	EFSQLUpdateStatement* _updateStatement;
	NSArray* _conflictTarget;

}

@property (nonatomic,readonly) id<EFSQLInsertStatementValue> insertValue; 
@property (nonatomic,readonly) id<EFSQLUpdateStatementValue> updateValue; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,copy,readonly) NSString * queryString; 
@property (nonatomic,retain) id<EFSQLValueExpressable> whereClause; 
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSString *)queryString;
-(void)setWhereClause:(id<EFSQLValueExpressable>)arg1 ;
-(void)enumerateBindingNamesAndValuesUsingBlock:(/*^block*/id)arg1 ;
-(id<EFSQLValueExpressable>)whereClause;
-(id)excludedColumnExpressionForColumnName:(id)arg1 ;
-(id)initWithTable:(id)arg1 conflictTarget:(id)arg2 ;
-(id<EFSQLInsertStatementValue>)insertValue;
-(id<EFSQLUpdateStatementValue>)updateValue;
-(BOOL)isEmpty;
@end

