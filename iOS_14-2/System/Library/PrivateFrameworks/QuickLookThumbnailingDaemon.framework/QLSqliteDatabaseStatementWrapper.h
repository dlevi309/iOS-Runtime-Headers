/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/QuickLookThumbnailingDaemon
*/


#import <QuickLookThumbnailingDaemon/QuickLookThumbnailingDaemon-Structs.h>
@class NSMapTable, NSString;

@interface QLSqliteDatabaseStatementWrapper : NSObject {

	sqlite3_stmtRef _stmt;
	NSMapTable* _inUseTable;
	NSString* _key;

}

@property (nonatomic,copy) NSString * key;                           //@synthesize key=_key - In the implementation block
@property (assign,getter=isInUse,nonatomic) BOOL inUse; 
@property (assign,nonatomic) sqlite3_stmtRef stmt;                   //@synthesize stmt=_stmt - In the implementation block
-(sqlite3_stmtRef)stmt;
-(BOOL)isInUse;
-(NSString *)key;
-(void)setInUse:(BOOL)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(void)dealloc;
-(void)setStmt:(sqlite3_stmtRef)arg1 ;
-(id)initWithStatement:(sqlite3_stmtRef)arg1 key:(id)arg2 inUseTable:(id)arg3 ;
@end

