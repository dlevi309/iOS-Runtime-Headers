/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/

#import <ProactiveSupport/ProactiveSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _PASSqliteDatabase, _PASSQLColumnMapping;

@interface _PASSqliteStatement : NSObject <NSCopying> {

	_PASSqliteDatabase* _owner;
	_PASSQLColumnMapping* _columnMapping;
	sqlite3_stmtRef _stmt;

}

@property (nonatomic,readonly) sqlite3_stmtRef stmt;              //@synthesize stmt=_stmt - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)finalize;
-(sqlite3_stmtRef)stmt;
-(id)getNSStringForColumn:(int)arg1 ;
-(int)bindNamedParam:(const char*)arg1 toNSString:(id)arg2 ;
-(int)bindNamedParam:(const char*)arg1 toInteger:(long long)arg2 ;
-(int)bindNamedParamToNull:(const char*)arg1 ;
-(id)getNSDataForColumn:(int)arg1 ;
-(int)bindNamedParam:(const char*)arg1 toNSData:(id)arg2 ;
-(id)initWithStatementPointer:(sqlite3_stmtRef)arg1 owner:(id)arg2 ;
-(void)prepareForRowDeserialization;
-(int)bindNamedParam:(const char*)arg1 toInt64:(long long)arg2 ;
-(int)bindNamedParam:(const char*)arg1 toInt64AsNSNumber:(id)arg2 ;
-(int)bindNamedParam:(const char*)arg1 toDouble:(double)arg2 ;
-(int)bindNamedParam:(const char*)arg1 toDoubleAsNSNumber:(id)arg2 ;
-(int)bindParamToNull:(int)arg1 ;
-(int)bindParam:(int)arg1 toNSString:(id)arg2 ;
-(int)bindParam:(int)arg1 toNSData:(id)arg2 ;
-(int)bindParam:(int)arg1 toInteger:(long long)arg2 ;
-(int)bindParam:(int)arg1 toInt64:(long long)arg2 ;
-(int)bindParam:(int)arg1 toInt64AsNSNumber:(id)arg2 ;
-(int)bindParam:(int)arg1 toDouble:(double)arg2 ;
-(int)bindParam:(int)arg1 toDoubleAsNSNumber:(id)arg2 ;
-(long long)getIntegerForColumn:(int)arg1 ;
-(long long)getInt64ForColumn:(int)arg1 ;
-(id)getInt64AsNSNumberForColumn:(int)arg1 ;
-(double)getDoubleForColumn:(int)arg1 ;
-(id)getDoubleAsNSNumberForColumn:(int)arg1 ;
-(id)getNSStringForColumnName:(const char*)arg1 table:(const char*)arg2 ;
-(id)getNSDataForColumnName:(const char*)arg1 table:(const char*)arg2 ;
-(long long)getIntegerForColumnName:(const char*)arg1 table:(const char*)arg2 ;
-(long long)getInt64ForColumnName:(const char*)arg1 table:(const char*)arg2 ;
-(id)getInt64AsNSNumberForColumnName:(const char*)arg1 table:(const char*)arg2 ;
-(double)getDoubleForColumnName:(const char*)arg1 table:(const char*)arg2 ;
-(id)getDoubleAsNSNumberForColumnName:(const char*)arg1 table:(const char*)arg2 ;
-(BOOL)isNullForColumnName:(const char*)arg1 table:(const char*)arg2 ;
-(id)getNSStringForColumnAlias:(const char*)arg1 ;
-(id)getNSDataForColumnAlias:(const char*)arg1 ;
-(long long)getIntegerForColumnAlias:(const char*)arg1 ;
-(long long)getInt64ForColumnAlias:(const char*)arg1 ;
-(id)getInt64AsNSNumberForColumnAlias:(const char*)arg1 ;
-(double)getDoubleForColumnAlias:(const char*)arg1 ;
-(id)getDoubleAsNSNumberForColumnAlias:(const char*)arg1 ;
-(BOOL)isNullForColumnAlias:(const char*)arg1 ;
-(BOOL)isColumnNull:(int)arg1 ;
@end

