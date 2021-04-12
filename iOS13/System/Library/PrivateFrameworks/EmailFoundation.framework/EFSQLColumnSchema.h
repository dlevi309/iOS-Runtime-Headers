/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@class EFSQLTableSchema, NSString, EFSQLColumnExpression;

@interface EFSQLColumnSchema : NSObject {

	EFSQLTableSchema* _table;
	BOOL _nullable;
	BOOL _isPrimaryKey;
	BOOL _isAutoincrementing;
	NSString* _name;
	unsigned long long _type;
	EFSQLTableSchema* _foreignKeyTarget;
	EFSQLTableSchema* _associatedTable;
	unsigned long long _collation;
	id _defaultValue;
	NSString* _foreignKeyTargetString;
	unsigned long long _foreignKeyDeleteAction;
	unsigned long long _foreignKeyUpdateAction;

}

@property (nonatomic,readonly) unsigned long long collation;                                      //@synthesize collation=_collation - In the implementation block
@property (nonatomic,readonly) BOOL isPrimaryKey;                                                 //@synthesize isPrimaryKey=_isPrimaryKey - In the implementation block
@property (nonatomic,readonly) BOOL isAutoincrementing;                                           //@synthesize isAutoincrementing=_isAutoincrementing - In the implementation block
@property (nonatomic,readonly) id defaultValue;                                                   //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,copy) NSString * foreignKeyTargetString;                                     //@synthesize foreignKeyTargetString=_foreignKeyTargetString - In the implementation block
@property (assign,nonatomic,__weak) EFSQLTableSchema * foreignKeyTarget;                          //@synthesize foreignKeyTarget=_foreignKeyTarget - In the implementation block
@property (assign,nonatomic) unsigned long long foreignKeyDeleteAction;                           //@synthesize foreignKeyDeleteAction=_foreignKeyDeleteAction - In the implementation block
@property (assign,nonatomic) unsigned long long foreignKeyUpdateAction;                           //@synthesize foreignKeyUpdateAction=_foreignKeyUpdateAction - In the implementation block
@property (assign,nonatomic,__weak) EFSQLTableSchema * associatedTable;                           //@synthesize associatedTable=_associatedTable - In the implementation block
@property (nonatomic,__weak,readonly) EFSQLTableSchema * table; 
@property (nonatomic,copy,readonly) NSString * definition; 
@property (nonatomic,copy,readonly) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL nullable;                                                     //@synthesize nullable=_nullable - In the implementation block
@property (nonatomic,readonly) EFSQLColumnExpression * columnExpression; 
@property (nonatomic,readonly) EFSQLColumnExpression * columnExpressionWithFullName; 
+(id)integerColumnWithName:(id)arg1 nullable:(BOOL)arg2 defaultValue:(id)arg3 ;
+(id)integerColumnWithName:(id)arg1 nullable:(BOOL)arg2 ;
+(id)textColumnWithName:(id)arg1 collation:(unsigned long long)arg2 nullable:(BOOL)arg3 ;
+(id)blobColumnWithName:(id)arg1 nullable:(BOOL)arg2 ;
+(id)realColumnWithName:(id)arg1 nullable:(BOOL)arg2 defaultValue:(id)arg3 ;
+(id)textColumnWithName:(id)arg1 collation:(unsigned long long)arg2 nullable:(BOOL)arg3 defaultValue:(id)arg4 ;
+(id)stringForColumnType:(unsigned long long)arg1 ;
+(unsigned long long)columnTypeForString:(id)arg1 ;
+(id)realColumnWithName:(id)arg1 nullable:(BOOL)arg2 ;
-(id)description;
-(id)debugDescription;
-(NSString *)name;
-(unsigned long long)type;
-(NSString *)definition;
-(id)defaultValue;
-(EFSQLTableSchema *)table;
-(void)setTable:(EFSQLTableSchema *)arg1 ;
-(BOOL)isPrimaryKey;
-(unsigned long long)collation;
-(void)setAsForeignKeyForTable:(id)arg1 onDelete:(unsigned long long)arg2 onUpdate:(unsigned long long)arg3 ;
-(EFSQLColumnExpression *)columnExpression;
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 collation:(unsigned long long)arg3 nullable:(BOOL)arg4 defaultValue:(id)arg5 ;
-(id)initWithName:(id)arg1 isPrimaryKey:(BOOL)arg2 isAutoincrementing:(BOOL)arg3 type:(unsigned long long)arg4 collation:(unsigned long long)arg5 nullable:(BOOL)arg6 defaultValue:(id)arg7 ;
-(BOOL)isAutoincrementing;
-(BOOL)nullable;
-(NSString *)foreignKeyTargetString;
-(EFSQLTableSchema *)foreignKeyTarget;
-(unsigned long long)foreignKeyDeleteAction;
-(id)_stringForForeignKeyAction:(unsigned long long)arg1 ;
-(unsigned long long)foreignKeyUpdateAction;
-(id)fullNameWithDatabaseName:(id)arg1 ;
-(EFSQLTableSchema *)associatedTable;
-(void)setForeignKeyTarget:(EFSQLTableSchema *)arg1 ;
-(void)setForeignKeyDeleteAction:(unsigned long long)arg1 ;
-(void)setForeignKeyUpdateAction:(unsigned long long)arg1 ;
-(void)setForeignKeyTargetString:(NSString *)arg1 ;
-(void)setAssociatedTable:(EFSQLTableSchema *)arg1 ;
-(id)initRowIDWithAlias:(id)arg1 isAutoincrementing:(BOOL)arg2 ;
-(void)setAsForeignKeyForString:(id)arg1 onDelete:(unsigned long long)arg2 onUpdate:(unsigned long long)arg3 ;
-(void)associateWithTable:(id)arg1 ;
-(EFSQLColumnExpression *)columnExpressionWithFullName;
@end

