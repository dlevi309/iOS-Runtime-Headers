/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <EmailFoundation/EmailFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EFSQLTableSchema, EFSQLColumnSchema;

@interface EFSQLGeneratorTableRelationship : NSObject <NSCopying> {

	EFSQLTableSchema* _table;
	EFSQLColumnSchema* _sourceColumn;
	EFSQLTableSchema* _targetTable;
	unsigned long long _relationship;

}

@property (nonatomic,readonly) EFSQLTableSchema * table;                      //@synthesize table=_table - In the implementation block
@property (nonatomic,readonly) EFSQLColumnSchema * sourceColumn;              //@synthesize sourceColumn=_sourceColumn - In the implementation block
@property (nonatomic,readonly) EFSQLTableSchema * targetTable;                //@synthesize targetTable=_targetTable - In the implementation block
@property (nonatomic,readonly) unsigned long long relationship;               //@synthesize relationship=_relationship - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)relationship;
-(EFSQLTableSchema *)table;
-(EFSQLColumnSchema *)sourceColumn;
-(EFSQLTableSchema *)targetTable;
-(BOOL)isEqualToTableRelationship:(id)arg1 ;
-(id)initWithPropertyMapper:(id)arg1 previousTable:(id)arg2 ;
@end

