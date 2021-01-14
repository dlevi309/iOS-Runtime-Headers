/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@protocol EFSQLValueExpressable;
@class NSString, NSArray;

@interface EFSQLIndexSchema : NSObject {

	BOOL _unique;
	NSString* _name;
	NSString* _tableName;
	NSArray* _indexedColumns;
	id<EFSQLValueExpressable> _where;

}

@property (nonatomic,copy,readonly) NSArray * indexedColumns;                //@synthesize indexedColumns=_indexedColumns - In the implementation block
@property (nonatomic,readonly) id<EFSQLValueExpressable> where;              //@synthesize where=_where - In the implementation block
@property (nonatomic,readonly) BOOL unique;                                  //@synthesize unique=_unique - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * tableName;                    //@synthesize tableName=_tableName - In the implementation block
-(NSString *)tableName;
-(NSString *)name;
-(id)initWithTableName:(id)arg1 indexedColumns:(id)arg2 where:(id)arg3 unique:(BOOL)arg4 ;
-(BOOL)unique;
-(id<EFSQLValueExpressable>)where;
-(id)initWithTableName:(id)arg1 indexedColumns:(id)arg2 ;
-(id)definitionWithDatabaseName:(id)arg1 ;
-(NSArray *)indexedColumns;
-(id)initWithTableName:(id)arg1 columnNames:(id)arg2 ;
-(id)initWithTableName:(id)arg1 columnNames:(id)arg2 where:(id)arg3 unique:(BOOL)arg4 ;
-(id)initWithName:(id)arg1 tableName:(id)arg2 indexedColumns:(id)arg3 where:(id)arg4 unique:(BOOL)arg5 ;
@end

