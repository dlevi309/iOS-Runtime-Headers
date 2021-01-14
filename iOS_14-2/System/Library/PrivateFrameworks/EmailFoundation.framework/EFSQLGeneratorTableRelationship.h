/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(EFSQLTableSchema *)table;
-(unsigned long long)relationship;
-(EFSQLColumnSchema *)sourceColumn;
-(EFSQLTableSchema *)targetTable;
-(BOOL)isEqualToTableRelationship:(id)arg1 ;
-(id)initWithPropertyMapper:(id)arg1 previousTable:(id)arg2 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

