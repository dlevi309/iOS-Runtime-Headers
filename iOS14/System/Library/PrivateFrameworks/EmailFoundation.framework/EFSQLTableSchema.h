/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@class NSMutableArray, NSMutableDictionary, NSHashTable, NSArray, NSString, EFSQLColumnSchema, NSSet;

@interface EFSQLTableSchema : NSObject {

	NSMutableArray* _columns;
	NSMutableDictionary* _columnsByName;
	NSMutableArray* _uniquenessConstraints;
	NSMutableArray* _checkConstraints;
	NSHashTable* _foreignKeyReferences;
	NSHashTable* _associatedColumns;
	NSMutableArray* _indexes;
	NSArray* _primaryKeyColumns;
	NSString* _name;
	NSString* _rowIDColumnName;
	unsigned long long _primaryKeyConflictResolution;

}

@property (nonatomic,copy,readonly) NSString * rowIDColumnName;                              //@synthesize rowIDColumnName=_rowIDColumnName - In the implementation block
@property (nonatomic,readonly) unsigned long long primaryKeyConflictResolution;              //@synthesize primaryKeyConflictResolution=_primaryKeyConflictResolution - In the implementation block
@property (nonatomic,readonly) EFSQLColumnSchema * rowIDColumn; 
@property (nonatomic,copy,readonly) NSArray * primaryKeyColumns;                             //@synthesize primaryKeyColumns=_primaryKeyColumns - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * columns; 
@property (nonatomic,copy,readonly) NSArray * uniqueColumns; 
@property (nonatomic,copy,readonly) NSArray * checkConstraints; 
@property (nonatomic,copy,readonly) NSSet * foreignKeyReferences; 
@property (nonatomic,copy,readonly) NSSet * associatedColumns; 
@property (nonatomic,copy,readonly) NSArray * indexes; 
-(NSArray *)columns;
-(void)addIndex:(id)arg1 ;
-(void)addColumn:(id)arg1 ;
-(void)removeColumn:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(EFSQLColumnSchema *)rowIDColumn;
-(id)fullNameWithDatabaseName:(id)arg1 ;
-(void)addForeignKeyReference:(id)arg1 ;
-(void)addAssociatedColumn:(id)arg1 ;
-(id)initWithName:(id)arg1 rowIDType:(unsigned long long)arg2 rowIDAlias:(id)arg3 columns:(id)arg4 primaryKeyColumns:(id)arg5 conflictResolution:(unsigned long long)arg6 ;
-(id)_columnsForColumnNames:(id)arg1 ;
-(NSArray *)primaryKeyColumns;
-(unsigned long long)primaryKeyConflictResolution;
-(NSString *)rowIDColumnName;
-(NSArray *)uniqueColumns;
-(NSSet *)foreignKeyReferences;
-(void)addCheckConstraintForExpression:(id)arg1 ;
-(NSSet *)associatedColumns;
-(NSArray *)checkConstraints;
-(id)columnForName:(id)arg1 ;
-(id)initWithName:(id)arg1 rowIDType:(unsigned long long)arg2 columns:(id)arg3 ;
-(void)addIndexForColumns:(id)arg1 ;
-(void)addUniquenessConstraintForColumns:(id)arg1 conflictResolution:(unsigned long long)arg2 ;
-(id)initWithName:(id)arg1 rowIDType:(unsigned long long)arg2 rowIDAlias:(id)arg3 columns:(id)arg4 ;
-(id)initWithName:(id)arg1 columns:(id)arg2 primaryKeyColumns:(id)arg3 ;
-(id)definitionWithDatabaseName:(id)arg1 includeIndexes:(BOOL)arg2 ;
-(id)definitionWithDatabaseName:(id)arg1 ;
-(id)indexDefinitionsWithDatabaseName:(id)arg1 ;
-(NSArray *)indexes;
-(id)initWithName:(id)arg1 columns:(id)arg2 primaryKeyColumns:(id)arg3 conflictResolution:(unsigned long long)arg4 ;
@end
