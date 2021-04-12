/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <EmailFoundation/EmailFoundation-Structs.h>
#import <libobjc.A.dylib/EFLoggable.h>

@class NSHashTable, NSURL, NSString;

@interface EFSQLConnection : NSObject <EFLoggable> {

	NSHashTable* _preparedStatements;
	sqlite3Ref _sqlDB;
	NSURL* _url;

}

@property (nonatomic,readonly) sqlite3Ref sqlDB;                    //@synthesize sqlDB=_sqlDB - In the implementation block
@property (nonatomic,readonly) BOOL isOpen; 
@property (nonatomic,readonly) NSURL * url;                         //@synthesize url=_url - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(BOOL)setFileProtection:(id)arg1 forDatabaseAtURL:(id)arg2 error:(id*)arg3 ;
+(BOOL)isSuccessResultCode:(int)arg1 forStep:(BOOL)arg2 error:(id*)arg3 ;
-(id)init;
-(NSString *)description;
-(id)initWithURL:(id)arg1 ;
-(void)close;
-(NSURL *)url;
-(BOOL)isOpen;
-(BOOL)openWithError:(id*)arg1 ;
-(void)flush;
-(id)initWithInMemoryDatabase;
-(BOOL)rollbackTransactionWithError:(id*)arg1 ;
-(BOOL)commitTransactionWithError:(id*)arg1 ;
-(id)preparedStatementForQueryString:(id)arg1 ;
-(sqlite3Ref)sqlDB;
-(BOOL)executeStatementString:(id)arg1 error:(id*)arg2 ;
-(BOOL)openWithFlags:(int)arg1 error:(id*)arg2 ;
-(BOOL)_isSuccessResultCode:(int)arg1 sqlDB:(sqlite3Ref)arg2 error:(id*)arg3 ;
-(id)initWithSQLDB:(sqlite3Ref)arg1 ;
-(BOOL)finalizeStatementsWithError:(id*)arg1 ;
-(BOOL)beginTransaction:(long long)arg1 error:(id*)arg2 ;
-(id)resultsForQueryString:(id)arg1 ;
@end

