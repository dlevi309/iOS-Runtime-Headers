/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Security.framework/Security
*/


#import <Security/Security-Structs.h>
@class SFSQLite, NSString, NSMutableArray;

@interface SFSQLiteStatement : NSObject {

	SFSQLite* _SQLite;
	NSString* _SQL;
	sqlite3_stmtRef _handle;
	BOOL _reset;
	NSMutableArray* _temporaryBoundObjects;

}

@property (nonatomic,retain) NSMutableArray * temporaryBoundObjects;               //@synthesize temporaryBoundObjects=_temporaryBoundObjects - In the implementation block
@property (setter=QLite,nonatomic,__weak,readonly) SFSQLite * SQLite;              //@synthesize SQLite=_SQLite - In the implementation block
@property (setter=QL,nonatomic,readonly) NSString * SQL;                           //@synthesize SQL=_SQL - In the implementation block
@property (nonatomic,readonly) sqlite3_stmtRef handle;                             //@synthesize handle=_handle - In the implementation block
@property (assign,getter=isReset,nonatomic) BOOL reset;                            //@synthesize reset=_reset - In the implementation block
-(NSString *)SQL;
-(sqlite3_stmtRef)handle;
-(NSMutableArray *)temporaryBoundObjects;
-(void)finalizeStatement;
-(void)bindInt64:(long long)arg1 atIndex:(unsigned long long)arg2 ;
-(id)allObjectsByColumnName;
-(int)intAtIndex:(unsigned long long)arg1 ;
-(void)bindDouble:(double)arg1 atIndex:(unsigned long long)arg2 ;
-(id)retainedTemporaryBoundObject:(id)arg1 ;
-(void)setReset:(BOOL)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)allObjects;
-(int)columnTypeAtIndex:(unsigned long long)arg1 ;
-(BOOL)isReset;
-(void)bindValues:(id)arg1 ;
-(void)resetAfterStepError;
-(void)bindText:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)step;
-(void)bindBlob:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)blobAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)columnCount;
-(BOOL)reset;
-(SFSQLite *)SQLite;
-(void)bindNullAtIndex:(unsigned long long)arg1 ;
-(void)bindValue:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setTemporaryBoundObjects:(NSMutableArray *)arg1 ;
-(id)columnNameAtIndex:(unsigned long long)arg1 ;
-(void)bindInt:(int)arg1 atIndex:(unsigned long long)arg2 ;
-(long long)int64AtIndex:(unsigned long long)arg1 ;
-(id)textAtIndex:(unsigned long long)arg1 ;
-(id)initWithSQLite:(id)arg1 SQL:(id)arg2 handle:(sqlite3_stmtRef)arg3 ;
-(double)doubleAtIndex:(unsigned long long)arg1 ;
@end

