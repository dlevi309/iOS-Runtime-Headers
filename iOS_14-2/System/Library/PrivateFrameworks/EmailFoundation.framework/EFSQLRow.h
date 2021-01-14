/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


#import <EmailFoundation/EmailFoundation-Structs.h>
@class EFSQLPreparedStatement, NSDictionary;

@interface EFSQLRow : NSObject {

	BOOL _namedColumnsInitialized;
	sqlite3_stmtRef _statement;
	EFSQLPreparedStatement* _preparedStatement;
	NSDictionary* _columns;
	unsigned long long _columnCount;

}

@property (nonatomic,readonly) sqlite3_stmtRef statement;                             //@synthesize statement=_statement - In the implementation block
@property (nonatomic,retain) EFSQLPreparedStatement * preparedStatement;              //@synthesize preparedStatement=_preparedStatement - In the implementation block
@property (nonatomic,readonly) NSDictionary * columns;                                //@synthesize columns=_columns - In the implementation block
@property (assign,nonatomic) BOOL namedColumnsInitialized;                            //@synthesize namedColumnsInitialized=_namedColumnsInitialized - In the implementation block
@property (assign,nonatomic) unsigned long long columnCount;                          //@synthesize columnCount=_columnCount - In the implementation block
-(sqlite3_stmtRef)statement;
-(NSDictionary *)columns;
-(id)columnNames;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)initWithPreparedStatement:(id)arg1 ;
-(id)initWithSQLiteStatement:(sqlite3_stmtRef)arg1 ;
-(id)debugDescription;
-(void)setNamedColumnsInitialized:(BOOL)arg1 ;
-(void)setColumnCount:(unsigned long long)arg1 ;
-(id)initWithColumns:(id)arg1 ;
-(unsigned long long)columnCount;
-(void)setPreparedStatement:(EFSQLPreparedStatement *)arg1 ;
-(BOOL)namedColumnsInitialized;
-(id)_queryString;
-(BOOL)columnExistsAtIndex:(unsigned long long)arg1 ;
-(BOOL)columnExistsWithName:(id)arg1 ;
-(EFSQLPreparedStatement *)preparedStatement;
@end

