/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@class EFSQLColumnSchema, NSString;

@interface EDPersistenceAssociationPlaceholder : NSObject {

	EFSQLColumnSchema* _column;
	NSString* _tableName;

}

@property (nonatomic,readonly) EFSQLColumnSchema * column;              //@synthesize column=_column - In the implementation block
@property (nonatomic,copy,readonly) NSString * tableName;               //@synthesize tableName=_tableName - In the implementation block
-(id)description;
-(NSString *)tableName;
-(EFSQLColumnSchema *)column;
-(id)initWithColumn:(id)arg1 tableName:(id)arg2 ;
-(BOOL)resolveWithSchema:(id)arg1 ;
@end

