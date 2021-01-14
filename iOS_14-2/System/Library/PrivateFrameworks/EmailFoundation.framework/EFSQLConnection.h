/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)flush;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(BOOL)isOpen;
-(id)initWithInMemoryDatabase;
-(void)close;
-(BOOL)openWithError:(id*)arg1 ;
-(BOOL)openWithFlags:(int)arg1 error:(id*)arg2 ;
-(NSURL *)url;
-(id)preparedStatementForQueryString:(id)arg1 ;
-(NSString *)description;
-(BOOL)finalizeStatementsWithError:(id*)arg1 ;
-(BOOL)executeStatementString:(id)arg1 error:(id*)arg2 ;
-(id)resultsForQueryString:(id)arg1 ;
-(id)initWithSQLDB:(sqlite3Ref)arg1 ;
-(BOOL)_isSuccessResultCode:(int)arg1 sqlDB:(sqlite3Ref)arg2 error:(id*)arg3 ;
-(BOOL)commitTransactionWithError:(id*)arg1 ;
-(sqlite3Ref)sqlDB;
-(BOOL)beginTransaction:(long long)arg1 error:(id*)arg2 ;
-(BOOL)rollbackTransactionWithError:(id*)arg1 ;
@end

