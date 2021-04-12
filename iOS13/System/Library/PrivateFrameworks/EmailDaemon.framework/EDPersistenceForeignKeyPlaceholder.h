/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@class EFSQLColumnSchema, NSString;

@interface EDPersistenceForeignKeyPlaceholder : NSObject {

	EFSQLColumnSchema* _column;
	NSString* _tableName;
	unsigned long long _deleteAction;
	unsigned long long _updateAction;

}

@property (nonatomic,readonly) EFSQLColumnSchema * column;                   //@synthesize column=_column - In the implementation block
@property (nonatomic,copy,readonly) NSString * tableName;                    //@synthesize tableName=_tableName - In the implementation block
@property (nonatomic,readonly) unsigned long long deleteAction;              //@synthesize deleteAction=_deleteAction - In the implementation block
@property (nonatomic,readonly) unsigned long long updateAction;              //@synthesize updateAction=_updateAction - In the implementation block
-(id)description;
-(unsigned long long)updateAction;
-(NSString *)tableName;
-(EFSQLColumnSchema *)column;
-(unsigned long long)deleteAction;
-(id)initWithColumn:(id)arg1 tableName:(id)arg2 onDelete:(unsigned long long)arg3 onUpdate:(unsigned long long)arg4 ;
-(BOOL)resolveWithSchema:(id)arg1 ;
-(BOOL)resolveToStringForTableNames:(id)arg1 ;
@end

