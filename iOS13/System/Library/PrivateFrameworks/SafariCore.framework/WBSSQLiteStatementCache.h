/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/


@class WBSSQLiteDatabase, NSMutableDictionary;

@interface WBSSQLiteStatementCache : NSObject {

	WBSSQLiteDatabase* _database;
	NSMutableDictionary* _statements;

}
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id)initWithDatabase:(id)arg1 ;
-(id)cachedStatementForQuery:(id)arg1 ;
-(id)_createStatementForQuery:(id)arg1 error:(id*)arg2 ;
-(void)setCachedStatement:(id)arg1 forQuery:(id)arg2 ;
-(id)statementForQuery:(id)arg1 error:(id*)arg2 ;
@end

