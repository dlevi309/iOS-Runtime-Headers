/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)debugDescription;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)_queryString;
-(unsigned long long)columnCount;
-(NSDictionary *)columns;
-(sqlite3_stmtRef)statement;
-(void)setColumnCount:(unsigned long long)arg1 ;
-(BOOL)columnExistsWithName:(id)arg1 ;
-(id)columnNames;
-(id)initWithPreparedStatement:(id)arg1 ;
-(id)initWithSQLiteStatement:(sqlite3_stmtRef)arg1 ;
-(void)setPreparedStatement:(EFSQLPreparedStatement *)arg1 ;
-(id)initWithColumns:(id)arg1 ;
-(BOOL)columnExistsAtIndex:(unsigned long long)arg1 ;
-(EFSQLPreparedStatement *)preparedStatement;
-(BOOL)namedColumnsInitialized;
-(void)setNamedColumnsInitialized:(BOOL)arg1 ;
@end

