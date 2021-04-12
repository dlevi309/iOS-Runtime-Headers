/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@class EFSQLColumnSchema, NSString;

@interface EDPersistenceAssociationPlaceholder : NSObject {

	EFSQLColumnSchema* _column;
	NSString* _tableName;

}

@property (nonatomic,readonly) EFSQLColumnSchema * column;              //@synthesize column=_column - In the implementation block
@property (nonatomic,copy,readonly) NSString * tableName;               //@synthesize tableName=_tableName - In the implementation block
-(NSString *)tableName;
-(EFSQLColumnSchema *)column;
-(id)description;
-(id)initWithColumn:(id)arg1 tableName:(id)arg2 ;
-(BOOL)resolveWithSchema:(id)arg1 ;
@end

