/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Transports/IOAccessoryManager.transport/IOAccessoryManager
*/


#import <IOAccessoryManager/IOAccessoryManager-Structs.h>
@class ACCSQLite, NSString, NSMutableArray;

@interface ACCSQLiteStatement : NSObject {

	ACCSQLite* _SQLite;
	NSString* _SQL;
	sqlite3_stmtRef _handle;
	BOOL _reset;
	NSMutableArray* _temporaryBoundObjects;

}

@property (nonatomic,retain) NSMutableArray * temporaryBoundObjects;                //@synthesize temporaryBoundObjects=_temporaryBoundObjects - In the implementation block
@property (setter=QLite,nonatomic,__weak,readonly) ACCSQLite * SQLite;              //@synthesize SQLite=_SQLite - In the implementation block
@property (setter=QL,nonatomic,readonly) NSString * SQL;                            //@synthesize SQL=_SQL - In the implementation block
@property (nonatomic,readonly) sqlite3_stmtRef handle;                              //@synthesize handle=_handle - In the implementation block
@property (assign,getter=isReset,nonatomic) BOOL reset;                             //@synthesize reset=_reset - In the implementation block
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)allObjects;
-(sqlite3_stmtRef)handle;
-(BOOL)reset;
-(id)initWithSQLite:(id)arg1 SQL:(id)arg2 handle:(sqlite3_stmtRef)arg3 ;
-(void)finalizeStatement;
-(void)resetAfterStepError;
-(BOOL)step;
-(void)bindInt:(int)arg1 atIndex:(unsigned long long)arg2 ;
-(void)bindInt64:(long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)bindDouble:(double)arg1 atIndex:(unsigned long long)arg2 ;
-(void)bindBlob:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)bindText:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)bindNullAtIndex:(unsigned long long)arg1 ;
-(id)retainedTemporaryBoundObject:(id)arg1 ;
-(void)bindValue:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)bindValues:(id)arg1 ;
-(unsigned long long)columnCount;
-(int)columnTypeAtIndex:(unsigned long long)arg1 ;
-(id)columnNameAtIndex:(unsigned long long)arg1 ;
-(int)intAtIndex:(unsigned long long)arg1 ;
-(long long)int64AtIndex:(unsigned long long)arg1 ;
-(double)doubleAtIndex:(unsigned long long)arg1 ;
-(id)blobAtIndex:(unsigned long long)arg1 ;
-(id)textAtIndex:(unsigned long long)arg1 ;
-(id)allObjectsByColumnName;
-(ACCSQLite *)SQLite;
-(NSString *)SQL;
-(BOOL)isReset;
-(void)setReset:(BOOL)arg1 ;
-(NSMutableArray *)temporaryBoundObjects;
-(void)setTemporaryBoundObjects:(NSMutableArray *)arg1 ;
@end

