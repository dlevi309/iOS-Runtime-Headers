/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/


@class WBSSQLiteDatabase, NSMutableDictionary;

@interface WBSSQLiteStatementCache : NSObject {

	WBSSQLiteDatabase* _database;
	NSMutableDictionary* _statements;

}
-(void)setCachedStatement:(id)arg1 forQuery:(id)arg2 ;
-(id)init;
-(id)_createStatementForQuery:(id)arg1 error:(id*)arg2 ;
-(id)cachedStatementForQuery:(id)arg1 ;
-(id)statementForQuery:(id)arg1 error:(id*)arg2 ;
-(void)invalidate;
-(id)initWithDatabase:(id)arg1 ;
-(void)dealloc;
@end

