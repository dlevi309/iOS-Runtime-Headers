/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <EmailDaemon/EDPersistenceDatabaseConnection.h>

@class _MFSearchMatcherContext;

@interface MFPersistenceDatabaseConnection_iOS : EDPersistenceDatabaseConnection {

	void* _ICUSearchContext;
	_MFSearchMatcherContext* _CPSearchContext;

}
-(void)handleSQLResult:(int)arg1 message:(id)arg2 ;
-(long long)transactionTypeForWriting;
-(void)_handleFullDatabase;
-(void)_handleIOError;
-(void)_handleBusyError;
-(void)_handleInvalidDatabaseIOError;
-(BOOL)performWithOptions:(unsigned long long)arg1 transactionError:(id*)arg2 block:(/*^block*/id)arg3 ;
-(void)_handleCorruptDatabase;
-(void)_handleDetachedDatabaseIOError;
-(void)_handleProtectedDataIOError;
-(void)_logFileSystemStats;
-(int)configureSQLConnection;
-(void)dealloc;
@end

